#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include <locale>
#include <string>
#include "XorStrEx.hpp"

namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}
class UObject;
class FField;
		
class FUObjectItem
{
public:
	uint64_t unk0;
	UObject* Object;
	int32_t Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;
	int32_t unk1;

	enum class EInternalObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::PendingKill));
	}
};

class TUObjectArray
{
public:
	enum
	{
		NumElementsPerChunk = 64 * 1024
	};

	int32_t Num() const
	{
		return NumElements;
	}
	
	bool IsValidIndex(int32_t Index) const
	{
		return Index < Num() && Index >= 0;
	}

	FUObjectItem* GetObjectPtr(int32_t Index) const
	{
		if (IsValidIndex(Index))
		{
			const int32_t ChunkIndex = Index / NumElementsPerChunk;
			const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
			FUObjectItem* Chunk = Objects[ChunkIndex];
			if (Chunk == nullptr) return nullptr;
			return Chunk + WithinChunkIndex;
		}
		return nullptr;
	}

	UObject* GetUObject(int32_t Index) const
	{
		UObject* result = nullptr;
		FUObjectItem* object = GetObjectPtr(Index);
		if(object)
		{
			result = object->Object;
		}		
		return result;
	}

private:
	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	}

	TArray(T* data, int32_t count, int32_t max)
		: Data(data),
		Count(count),
		Max(max)
	{
	}

	int Num() const
	{
		return Count;
	}

	T& operator[](int i)
	{
		return Data[i];
	}

	const T& operator[](int i) const
	{
		return Data[i];
	}

	bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

enum { NAME_SIZE = 1024 };

enum { FNameMaxBlockBits = 13 };
enum { FNameBlockOffsetBits = 16 };
enum { FNameMaxBlocks = 1 << FNameMaxBlockBits };
enum { FNameBlockOffsets = 1 << FNameBlockOffsetBits };


template <typename T>
constexpr T Align(T Val, uint64_t Alignment)
{
	return (T)(((uint64_t)Val + Alignment - 1) & ~(Alignment - 1));
}

struct FNameEntryId
{
	uint32_t Value;

	FNameEntryId() : Value(0) {}
	FNameEntryId(uint32_t value) : Value(value)	{}

	bool operator==(FNameEntryId Rhs) const { return Value == Rhs.Value; }
};

struct UENameInfo
{
	FNameEntryId Index;
	const char* Name;
	uint32_t Len;
};

struct FNameEntryHeader
{
	uint16_t bIsWide : 1;
	uint16_t LowercaseProbeHash : 5;
	uint16_t Len : 10;
};
		
class FNameEntry
{
public:
	FNameEntryId ComparisonId;
	FNameEntryHeader Header;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	const char* GetName(int* len = nullptr) const
	{
		if(len)
		{
			*len = Header.Len;
		}
		return AnsiName;
	}

	const wchar_t* GetWideName(int* len = nullptr) const
	{
		if (len)
		{
			*len = Header.Len;
		}
		return WideName;
	}

	bool IsWide() const
	{
		return Header.bIsWide;
	}

	int32_t GetNameLength() const
	{
		return Header.Len;
	}

	static int32_t GetDataOffset()
	{
		return offsetof(FNameEntry, AnsiName);
	}

	static int32_t GetSize(int32_t Length, bool bIsPureAnsi)
	{
		int32_t Bytes = GetDataOffset() + Length * (bIsPureAnsi ? sizeof(char) : sizeof(wchar_t));
		return Align(Bytes, alignof(FNameEntry));
	}
};

struct FNameEntryHandle
{
	uint32_t Block = 0;
	uint32_t Offset = 0;

	FNameEntryHandle(uint32_t InBlock, uint32_t InOffset)
		: Block(InBlock)
		, Offset(InOffset)
	{}

	FNameEntryHandle(FNameEntryId Id)
		: Block(Id.Value >> FNameBlockOffsetBits)
		, Offset(Id.Value& (FNameBlockOffsets - 1))
	{}

	FNameEntryHandle(uint32_t Id)
		: Block(Id >> FNameBlockOffsetBits)
		, Offset(Id & (FNameBlockOffsets - 1))
	{}

	FNameEntryId ToEntryId() const
	{
		return FNameEntryId(Block << FNameBlockOffsetBits | Offset);
	}

	operator uint32_t() const
	{
		return Block << FNameBlockOffsetBits | Offset;
	}

	explicit operator bool() const { return Block | Offset; }
};

class FNameEntryAllocator
{
public:
	enum { Stride = alignof(FNameEntry) };
	enum { BlockSizeBytes = Stride * static_cast<size_t>(FNameBlockOffsets) };
	
	uint8_t Lock[8];
	uint32_t CurrentBlock;
	uint32_t CurrentByteCursor;
	uint8_t* Blocks[8192];

	uint32_t NumBlocks() const
	{
		return CurrentBlock + 1;
	}

	FNameEntry* GetNameEntry(FNameEntryHandle Handle) const
	{
		return reinterpret_cast<FNameEntry*>(Blocks[Handle.Block] + Stride * static_cast<size_t>(Handle.Offset));
	}

	bool FindName(const char* nameToFind, UENameInfo& out) const
	{
		for (uint32_t BlockIdx = 0; BlockIdx < CurrentBlock; ++BlockIdx)
		{
			if(FindNameInBlock(nameToFind, BlockIdx, BlockSizeBytes, out))
			{
				return true;
			}
		}

		return FindNameInBlock(nameToFind, CurrentBlock, CurrentByteCursor, out);
	}

	bool FindNameInBlock(const char* nameToFind, uint32_t BlockId, uint32_t BlockSize, UENameInfo& out) const
	{
		
		return false;
	}
};

class FNamePool
{
public:
	enum { MaxENames = 512 };

	FNameEntryAllocator Entries;

	uint32_t Num() const
	{
		return Entries.NumBlocks();
	}

	bool IsValidIndex(uint32_t index) const
	{
		FNameEntryHandle Handle(index);
		return Handle.Block < Entries.NumBlocks();
	}

	FNameEntry* GetById(uint32_t index) const
	{
		if (!IsValidIndex(index)) return nullptr;
		
		return Entries.GetNameEntry(index);
	}
};

struct FName
{
	FNameEntryId ComparisonIndex;
	int32_t Number;

	FName()
		: ComparisonIndex(0),
		  Number(0)
	{
	};

	FName(uint32_t i)
		: ComparisonIndex(i),
		  Number(0)
	{
	};

	FName(const char* nameToFind, uint32_t Number = 0)
		: ComparisonIndex(0),
		  Number(Number)
	{
		UENameInfo nameInfo;
		if(GetGlobalNames().Entries.FindName(nameToFind, nameInfo))
		{
			ComparisonIndex = nameInfo.Index;
		}
	}

	static FNamePool* GNames;
	static FNamePool& GetGlobalNames()
	{
		return *GNames;
	}

	int GetName(char* nameOut) const
	{
		return -1;
	}

	bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	}
};

class FFieldVariant
{
public:
	union FFieldObjectUnion
	{
		FField* Field;
		UObject* Object;
	} Container;
	bool bIsUObject;

	FFieldVariant()
		: bIsUObject(false)
	{
		Container.Field = nullptr;
	}

	FFieldVariant(const FField* InField)
		: bIsUObject(false)
	{
		Container.Field = const_cast<FField*>(InField);
	}
	FFieldVariant(const UObject* InObject)
		: bIsUObject(true)
	{
		Container.Object = const_cast<UObject*>(InObject);
	}

	bool IsUObject() const
	{
		return bIsUObject;
	}
	
	bool IsValid() const
	{
		return !!Container.Object;
	}
};

class FFieldClass
{
public:
	FName Name;
	uint64_t Id;
	uint64_t CastFlags;
	uint32_t ClassFlags;
	FFieldClass* SuperClass;
	FField* DefaultObject;
	FField* (*ConstructFn)(const FFieldVariant&, const FName&, uint32_t); // last param is EObjectFlags
	int32_t UnqiueNameIndexCounter; // FThreadSafeCounter
};

class FField
{
public:
	void* VTable;
	FFieldClass* Class;
	FFieldVariant Owner;
	FField* Next;
	FName Name;
	uint32_t Flags; // EObjectFlags
	unsigned char pad_0x34[4];
};

class FProperty : public FField
{
public:
	int32_t ArrayDim;
	int32_t ElementSize;
	uint64_t PropertyFlags; /* EPropertyFlags */
	uint16_t RepIndex;
	uint8_t BlueprintReplicationCondition;
	uint8_t BlueprintReplicationConditionPad;
	int32_t Offset;
	FName RepNotifyFunc;
	FProperty* PropertyLinkNext;
	FProperty* NextRef;
	FProperty* DestructorLinkNext;
	FProperty* PostConstructLinkNext;
};

struct FString : public TArray<wchar_t>
{
	FString()
	{
	}

	FString(const wchar_t* other)
	{
		Max = Count = *other ? StringUtils::Len(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	}

	bool IsValid() const
	{
		return Data != nullptr;
	}

	const wchar_t* c_str() const
	{
		return Data;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	int64_t unk;
	void* Object;
	void* SharedReferenceCount;
	uint32_t Flags;
	int32_t align;

	FText() :
		unk(0),
		Object(nullptr),
		SharedReferenceCount(nullptr),
		Flags(0),
		align(0)
	{
	}
};

struct FScriptDelegate
{
	void* Object;
	FName FunctionName;
};

struct FMulticastScriptDelegate
{
	unsigned char UnknownData[0x10];
};

struct FSparseDelegate
{
	unsigned char UnknownData[0x1];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

template<typename T>
class TSet
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FFieldPath
{
	FField* ResolvedField;
	FWeakObjectPtr ResolvedOwner;
	TArray<FName> Path;
};

struct FSoftObjectPath_
{
	FName AssetPathName;
	FString SubPathString;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath_>
{

};

template<typename ObjectType>
class TSoftObjectPtr : public FSoftObjectPtr
{

};

template<typename TClass = UObject>
class TSoftClassPtr
{
	FSoftObjectPtr SoftObjectPtr;
};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
