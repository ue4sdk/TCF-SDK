#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControlRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ControlRig.ControlRig
// 0x0628 (0x0658 - 0x0030)
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1D];                                      // 0x0030(0x001D) MISSED OFFSET
	ERigExecutionType                                  ExecutionType;                                            // 0x004D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	class URigVM*                                      VM;                                                       // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FRigHierarchyContainer                      Hierarchy;                                                // 0x0058(0x0368) (CPF_NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRigGizmoLibrary>      GizmoLibrary;                                             // 0x03C0(0x0028) (CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	TMap<struct FName, struct FCachedPropertyPath>     InputProperties;                                          // 0x03F8(0x0050) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FCachedPropertyPath>     OutputProperties;                                         // 0x0448(0x0050) (CPF_Deprecated, CPF_NativeAccessSpecifierPrivate)
	struct FControlRigDrawContainer                    DrawContainer;                                            // 0x0498(0x0018) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                       // 0x04C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FName>                               EventQueue;                                               // 0x04D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x78];                                      // 0x04E0(0x0078) MISSED OFFSET
	struct FRigInfluenceMapPerEvent                    Influences;                                               // 0x0558(0x0060) (CPF_NativeAccessSpecifierPrivate)
	class UControlRig*                                 InteractionRig;                                           // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UControlRig*/                      InteractionRigClass;                                      // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x05C8(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_AdvancedDisplay, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x80];                                      // 0x05D8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRig"));
		return ptr;
	}


	void SetInteractionRigClass(class UClass* /*UControlRig*/ InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	class UClass* /*UControlRig*/ GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
};


// Class ControlRig.AdditiveControlRig
// 0x0010 (0x0668 - 0x0658)
class UAdditiveControlRig : public UControlRig
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0658(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.AdditiveControlRig"));
		return ptr;
	}

};


// Class ControlRig.ControlRigAnimInstance
// 0x0000 (0x02C0 - 0x02C0)
class UControlRigAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigAnimInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (0x0338 - 0x0338)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigComponent
// 0x00E0 (0x0540 - 0x0460)
class UControlRigComponent : public UPrimitiveComponent
{
public:
	class UClass* /*UControlRig*/                      ControlRigClass;                                          // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPostInitializeDelegate;                                 // 0x0468(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPreSetupDelegate;                                       // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPostSetupDelegate;                                      // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPreUpdateDelegate;                                      // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPostUpdateDelegate;                                     // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement>   MappedElements;                                           // 0x04B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bResetTransformBeforeTick;                                // 0x04C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bResetInitialsBeforeSetup;                                // 0x04C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateRigOnTick;                                         // 0x04CA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateInEditor;                                          // 0x04CB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawBones;                                               // 0x04CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDebugDrawing;                                        // 0x04CD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04CE(0x0002) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x68];                                      // 0x04D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigComponent"));
		return ptr;
	}


	void Update(float DeltaTime);
	void SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
	void SetInitialSpaceTransform(const struct FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space);
	void SetInitialBoneTransform(const struct FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(const struct FName& ControlName, const struct FVector2D& Value);
	void SetControlTransform(const struct FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space);
	void SetControlScale(const struct FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
	void SetControlRotator(const struct FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space);
	void SetControlPosition(const struct FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
	void SetControlOffset(const struct FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space);
	void SetControlInt(const struct FName& ControlName, int Value);
	void SetControlFloat(const struct FName& ControlName, float Value);
	void SetControlBool(const struct FName& ControlName, bool Value);
	void SetBoneTransform(const struct FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreUpdate(class UControlRigComponent* Component);
	void OnPreSetup(class UControlRigComponent* Component);
	void OnPostUpdate(class UControlRigComponent* Component);
	void OnPostSetup(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void Initialize();
	struct FTransform GetSpaceTransform(const struct FName& SpaceName, EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(const struct FName& SpaceName, EControlRigComponentSpace Space);
	struct FTransform GetInitialBoneTransform(const struct FName& BoneName, EControlRigComponentSpace Space);
	TArray<struct FName> GetElementNames(ERigElementType ElementType);
	struct FVector2D GetControlVector2D(const struct FName& ControlName);
	struct FTransform GetControlTransform(const struct FName& ControlName, EControlRigComponentSpace Space);
	struct FVector GetControlScale(const struct FName& ControlName, EControlRigComponentSpace Space);
	struct FRotator GetControlRotator(const struct FName& ControlName, EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(const struct FName& ControlName, EControlRigComponentSpace Space);
	struct FTransform GetControlOffset(const struct FName& ControlName, EControlRigComponentSpace Space);
	int GetControlInt(const struct FName& ControlName);
	float GetControlFloat(const struct FName& ControlName);
	bool GetControlBool(const struct FName& ControlName);
	struct FTransform GetBoneTransform(const struct FName& BoneName, EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(const struct FName& Name, ERigElementType ElementType);
	void ClearMappedElements();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves);
	void AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
	void AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};


// Class ControlRig.ControlRigControlActor
// 0x0098 (0x02E8 - 0x0250)
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                      ActorToTrack;                                             // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UControlRig*/                      ControlRigClass;                                          // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRefreshOnTick;                                           // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsSelectable;                                            // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ColorParameter;                                           // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCastShadows;                                             // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class USceneComponent*                             ActorRootComponent;                                       // 0x0288(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UControlRig*                                 ControlRig;                                               // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FName>                               ControlNames;                                             // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                          GizmoTransforms;                                          // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x02B8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       ColorParameterName;                                       // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigControlActor"));
		return ptr;
	}


	void Refresh();
	void Clear();
};


// Class ControlRig.ControlRigGizmoActor
// 0x0028 (0x0278 - 0x0250)
class AControlRigGizmoActor : public AActor
{
public:
	class USceneComponent*                             ActorRootComponent;                                       // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ControlRigIndex;                                          // 0x0260(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ControlName;                                              // 0x0264(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ColorParameterName;                                       // 0x026C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                             // 0x0274(0x0001) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bSelected : 1;                                            // 0x0274(0x0001) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bSelectable : 1;                                          // 0x0274(0x0001) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bHovered : 1;                                             // 0x0274(0x0001) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0275(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigGizmoActor"));
		return ptr;
	}


	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(const struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(const struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};


// Class ControlRig.ControlRigGizmoLibrary
// 0x00B0 (0x00E0 - 0x0030)
class UControlRigGizmoLibrary : public UObject
{
public:
	struct FControlRigGizmoDefinition                  DefaultGizmo;                                             // 0x0030(0x0060) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>                    DefaultMaterial;                                          // 0x0090(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MaterialColorParameter;                                   // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FControlRigGizmoDefinition>          Gizmos;                                                   // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigGizmoLibrary"));
		return ptr;
	}

};


// Class ControlRig.ControlRigLayerInstance
// 0x0000 (0x02C0 - 0x02C0)
class UControlRigLayerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigLayerInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigValidationPass
// 0x0000 (0x0030 - 0x0030)
class UControlRigValidationPass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigValidationPass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigNumericalValidationPass
// 0x0038 (0x0068 - 0x0030)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                               bCheckControls;                                           // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCheckBones;                                              // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCheckCurves;                                             // 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	float                                              TranslationPrecision;                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationPrecision;                                        // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ScalePrecision;                                           // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurvePrecision;                                           // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       EventNameA;                                               // 0x0044(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       EventNameB;                                               // 0x004C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FRigPose                                    pose;                                                     // 0x0058(0x0010) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigNumericalValidationPass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0040 - 0x0030)
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigObjectHolder"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSequence
// 0x0058 (0x0228 - 0x01D0)
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>                LastExportedToAnimationSequence;                          // 0x01D0(0x0028) (CPF_AssetRegistrySearchable, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                LastExportedUsingSkeletalMesh;                            // 0x01F8(0x0028) (CPF_AssetRegistrySearchable, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastExportedFrameRate;                                    // 0x0220(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSequence"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0010 (0x02D0 - 0x02C0)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSequencerAnimInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSettings
// 0x0000 (0x0040 - 0x0040)
class UControlRigSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigValidator
// 0x0040 (0x0070 - 0x0030)
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.ControlRigValidator"));
		return ptr;
	}

};


// Class ControlRig.FKControlRig
// 0x0018 (0x0670 - 0x0658)
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                       IsControlActive;                                          // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	EControlRigFKRigExecuteMode                        ApplyMode;                                                // 0x0668(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0669(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.FKControlRig"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterSection
// 0x01A0 (0x02F0 - 0x0150)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                                 ControlRig;                                               // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UControlRig*/                      ControlRigClass;                                          // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       ControlsMask;                                             // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x0170(0x0004) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     weight;                                                   // 0x0178(0x00A0) (CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, struct FChannelMapInfo>         ControlChannelMap;                                        // 0x0218(0x0050) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FEnumParameterNameAndCurve>          EnumParameterNamesAndCurves;                              // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve>       IntegerParameterNamesAndCurves;                           // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0288(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigParameterSection"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterTrack
// 0x0038 (0x00D0 - 0x0098)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                          SectionToKey;                                             // 0x00B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00B8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ControlRig.MovieSceneControlRigParameterTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
