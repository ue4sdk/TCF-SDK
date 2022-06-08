#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VariantManagerContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (0x0098 - 0x0030)
class ULevelVariantSets : public UObject
{
public:
	class UBlueprintGeneratedClass* /*UObject*/        DirectorClass;                                            // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UVariantSet*>                         VariantSets;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.LevelVariantSets"));
		return ptr;
	}


	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0068 (0x02B8 - 0x0250)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0250(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<class UBlueprintGeneratedClass* /*UObject*/, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                        // 0x0268(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.LevelVariantSetsActor"));
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (0x0048 - 0x0030)
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.LevelVariantSetsFunctionDirector"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x0198 (0x01C8 - 0x0030)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<struct FFieldPath>                          Properties;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<int>                                        PropertyIndices;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                     // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FString                                     FullDisplayString;                                        // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       PropertySetterName;                                       // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x00D8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasRecordedData;                                         // 0x0128(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UClass* /*UObject*/                          LeafPropertyClass;                                        // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ValueBytes;                                               // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	EPropertyValueCategory                             PropCategory;                                             // 0x0150(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x77];                                      // 0x0151(0x0077) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValue"));
		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueTransform"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueVisibility"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueColor
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueColor : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueColor"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueMaterial"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueOption
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueOption : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueOption"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueSoftObject
// 0x0000 (0x01C8 - 0x01C8)
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueSoftObject"));
		return ptr;
	}

};


// Class VariantManagerContent.SwitchActor
// 0x0028 (0x0278 - 0x0250)
class ASwitchActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0250(0x0018) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x0268(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                LastSelectedOption;                                       // 0x0270(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.SwitchActor"));
		return ptr;
	}


	void SelectOption(int OptionIndex);
	int GetSelectedOption();
	TArray<class AActor*> GetOptions();
};


// Class VariantManagerContent.Variant
// 0x0068 (0x0098 - 0x0030)
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>                  Dependencies;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	struct FText                                       DisplayText;                                              // 0x0040(0x0020) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                           // 0x0080(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	class UTexture2D*                                  Thumbnail;                                                // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.Variant"));
		return ptr;
	}


	void SwitchOn();
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const struct FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float gamma);
	void SetDisplayText(const struct FText& NewDisplayText);
	void SetDependency(int Index, struct FVariantDependency* Dependency);
	bool IsActive();
	class UTexture2D* GetThumbnail();
	class UVariantSet* GetParent();
	int GetNumDependencies();
	int GetNumActors();
	struct FText GetDisplayText();
	TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
	struct FVariantDependency GetDependency(int Index);
	class AActor* GetActor(int ActorIndex);
	void DeleteDependency(int Index);
	int AddDependency(struct FVariantDependency* Dependency);
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0068 (0x0098 - 0x0030)
class UVariantObjectBinding : public UObject
{
public:
	struct FString                                     CachedActorLabel;                                         // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0040(0x0018) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0058(0x001C) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<class UPropertyValue*>                      CapturedProperties;                                       // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                          // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.VariantObjectBinding"));
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0060 (0x0090 - 0x0030)
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0030(0x0020) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	bool                                               bExpanded;                                                // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<class UVariant*>                            Variants;                                                 // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	class UTexture2D*                                  Thumbnail;                                                // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.VariantSet"));
		return ptr;
	}


	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const struct FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float gamma);
	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariantByName(const struct FString& VariantName);
	class UVariant* GetVariant(int VariantIndex);
	class UTexture2D* GetThumbnail();
	class ULevelVariantSets* GetParent();
	int GetNumVariants();
	struct FText GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
