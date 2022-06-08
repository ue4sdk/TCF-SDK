#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CoreUObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0030
class UObject
{
public:
	static TUObjectArray*                              GObjects;                                                 // 0x0000(0x0000)
	void*                                              VTableObject;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            unk1;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            unk2;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	UObject*                                           Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Object"));
		return ptr;
	}

    static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	int GetName(char* nameOut) const;

	int GetFullName(char* fullNameOut) const;

	int GetFullClassName(char* outClassName) const;

	template<typename T>
	static T* FindObject(const char* name, bool findFirstBest = false)
	{
		return nullptr;
	}

	static UClass* FindClass(const char* name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(const int index)
	{
		return static_cast<T*>(GetGlobalObjects().GetUObject(index));
	}

	bool IsA(UClass* cmp) const;

    void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 68)(this, function, parms);
	}


	void ExecuteUbergraph(int EntryPoint);
};


// Class CoreUObject.Interface
// 0x0000 (0x0030 - 0x0030)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Interface"));
		return ptr;
	}

};


// Class CoreUObject.Package
// 0x0078 (0x00A8 - 0x0030)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Package"));
		return ptr;
	}

};


// Class CoreUObject.Field
// 0x0008 (0x0038 - 0x0030)
class UField : public UObject
{
public:
	UField*                                            Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Field"));
		return ptr;
	}

};


// Class CoreUObject.Struct
// 0x0088 (0x00C0 - 0x0038)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData0x30[0x10];                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	UStruct*                                           SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint64_t                                           unk1;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	UField*                                            Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FField*                                            ChildProperties;                                          // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>                                    Script;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              PropertyLink;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              RefLink;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              DestructorLink;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              PostConstructLink;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptAndPropertyObjectReferences;                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              UnresolvedScriptProperties;                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData0xA8[0x8];                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Struct"));
		return ptr;
	}

};


// Class CoreUObject.Class
// 0x0180 (0x0240 - 0x00C0)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x00C0(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Class"));
		return ptr;
	}

    template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

    UObject* CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, 116)(this);
	}

};


// Class CoreUObject.GCObjectReferencer
// 0x0048 (0x0078 - 0x0030)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.GCObjectReferencer"));
		return ptr;
	}

};


// Class CoreUObject.TextBuffer
// 0x0028 (0x0058 - 0x0030)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.TextBuffer"));
		return ptr;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0010 (0x00D0 - 0x00C0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ScriptStruct"));
		return ptr;
	}

};


// Class CoreUObject.Function
// 0x0030 (0x00F0 - 0x00C0)
class UFunction : public UStruct
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData0xB4[0x24];                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Function"));
		return ptr;
	}

};


// Class CoreUObject.DelegateFunction
// 0x0000 (0x00F0 - 0x00F0)
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.DelegateFunction"));
		return ptr;
	}

};


// Class CoreUObject.SparseDelegateFunction
// 0x0010 (0x0100 - 0x00F0)
class USparseDelegateFunction : public UDelegateFunction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.SparseDelegateFunction"));
		return ptr;
	}

};


// Class CoreUObject.DynamicClass
// 0x0080 (0x02C0 - 0x0240)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0240(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.DynamicClass"));
		return ptr;
	}

};


// Class CoreUObject.PackageMap
// 0x00B8 (0x00E8 - 0x0030)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.PackageMap"));
		return ptr;
	}

};


// Class CoreUObject.Enum
// 0x0038 (0x0070 - 0x0038)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Enum"));
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderClass
// 0x01B8 (0x03F8 - 0x0240)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0240(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.LinkerPlaceholderClass"));
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00C8 (0x00F8 - 0x0030)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.LinkerPlaceholderExportObject"));
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x01B8 (0x02A8 - 0x00F0)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x00F0(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.LinkerPlaceholderFunction"));
		return ptr;
	}

};


// Class CoreUObject.MetaData
// 0x00A0 (0x00D0 - 0x0030)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MetaData"));
		return ptr;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0038 - 0x0030)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ObjectRedirector"));
		return ptr;
	}

};


// Class CoreUObject.Property
// 0x0040 (0x0078 - 0x0038)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Property"));
		return ptr;
	}

};


// Class CoreUObject.EnumProperty
// 0x0010 (0x0088 - 0x0078)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.EnumProperty"));
		return ptr;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0008 (0x0080 - 0x0078)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ArrayProperty"));
		return ptr;
	}

};


// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0080 - 0x0078)
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ObjectPropertyBase"));
		return ptr;
	}

};


// Class CoreUObject.BoolProperty
// 0x0008 (0x0080 - 0x0078)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.BoolProperty"));
		return ptr;
	}

};


// Class CoreUObject.NumericProperty
// 0x0000 (0x0078 - 0x0078)
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.NumericProperty"));
		return ptr;
	}

};


// Class CoreUObject.ByteProperty
// 0x0008 (0x0080 - 0x0078)
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ByteProperty"));
		return ptr;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ObjectProperty"));
		return ptr;
	}

};


// Class CoreUObject.ClassProperty
// 0x0008 (0x0088 - 0x0080)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.ClassProperty"));
		return ptr;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.DelegateProperty"));
		return ptr;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000 (0x0078 - 0x0078)
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.DoubleProperty"));
		return ptr;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000 (0x0078 - 0x0078)
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.FloatProperty"));
		return ptr;
	}

};


// Class CoreUObject.IntProperty
// 0x0000 (0x0078 - 0x0078)
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.IntProperty"));
		return ptr;
	}

};


// Class CoreUObject.Int8Property
// 0x0000 (0x0078 - 0x0078)
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Int8Property"));
		return ptr;
	}

};


// Class CoreUObject.Int16Property
// 0x0000 (0x0078 - 0x0078)
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Int16Property"));
		return ptr;
	}

};


// Class CoreUObject.Int64Property
// 0x0000 (0x0078 - 0x0078)
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.Int64Property"));
		return ptr;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0080 - 0x0078)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.InterfaceProperty"));
		return ptr;
	}

};


// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0080 - 0x0080)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.LazyObjectProperty"));
		return ptr;
	}

};


// Class CoreUObject.MapProperty
// 0x0028 (0x00A0 - 0x0078)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MapProperty"));
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0080 - 0x0078)
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MulticastDelegateProperty"));
		return ptr;
	}

};


// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000 (0x0080 - 0x0080)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MulticastInlineDelegateProperty"));
		return ptr;
	}

};


// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0000 (0x0080 - 0x0080)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MulticastSparseDelegateProperty"));
		return ptr;
	}

};


// Class CoreUObject.NameProperty
// 0x0000 (0x0078 - 0x0078)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.NameProperty"));
		return ptr;
	}

};


// Class CoreUObject.SetProperty
// 0x0020 (0x0098 - 0x0078)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.SetProperty"));
		return ptr;
	}

};


// Class CoreUObject.SoftObjectProperty
// 0x0000 (0x0080 - 0x0080)
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.SoftObjectProperty"));
		return ptr;
	}

};


// Class CoreUObject.SoftClassProperty
// 0x0008 (0x0088 - 0x0080)
class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.SoftClassProperty"));
		return ptr;
	}

};


// Class CoreUObject.StrProperty
// 0x0000 (0x0078 - 0x0078)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.StrProperty"));
		return ptr;
	}

};


// Class CoreUObject.StructProperty
// 0x0008 (0x0080 - 0x0078)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.StructProperty"));
		return ptr;
	}

};


// Class CoreUObject.UInt16Property
// 0x0000 (0x0078 - 0x0078)
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.UInt16Property"));
		return ptr;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000 (0x0078 - 0x0078)
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.UInt32Property"));
		return ptr;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000 (0x0078 - 0x0078)
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.UInt64Property"));
		return ptr;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0080 - 0x0080)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.WeakObjectProperty"));
		return ptr;
	}

};


// Class CoreUObject.TextProperty
// 0x0000 (0x0078 - 0x0078)
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.TextProperty"));
		return ptr;
	}

};


// Class CoreUObject.PropertyWrapper
// 0x0008 (0x0038 - 0x0030)
class UPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.PropertyWrapper"));
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegatePropertyWrapper
// 0x0000 (0x0038 - 0x0038)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MulticastDelegatePropertyWrapper"));
		return ptr;
	}

};


// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// 0x0000 (0x0038 - 0x0038)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CoreUObject.MulticastInlineDelegatePropertyWrapper"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
