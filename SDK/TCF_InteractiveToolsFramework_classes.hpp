#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_InteractiveToolsFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (0x0030 - 0x0028)
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0050 (0x0080 - 0x0030)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveGizmoBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (0x0038 - 0x0028)
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (0x00F0 - 0x0038)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     RotationOrigin;                                           // 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotationAxis;                                             // 0x0098(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotationPlaneX;                                           // 0x00A4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotationPlaneY;                                           // 0x00B0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InteractionStartAngle;                                    // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InteractionCurAngle;                                      // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (0x00D8 - 0x0038)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                          // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                           // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxis;                                          // 0x0098(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                    // 0x00A4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                      // 0x00B0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InteractionStartParameter;                                // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InteractionCurParameter;                                  // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ParameterSign;                                            // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// 0x0038 (0x0060 - 0x0028)
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TangentX;                                                 // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TangentY;                                                 // 0x0054(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLocalAxes;                                               // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0038 (0x0060 - 0x0028)
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UInteractiveToolPropertySet*                 CachedProperties;                                         // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsPropertySetEnabled;                                    // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0041(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushBaseProperties
// 0x0018 (0x0078 - 0x0060)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSpecifyRadius;                                           // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              BrushRadius;                                              // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BrushStrength;                                            // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BrushFalloffAmount;                                       // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowStrength;                                            // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowFalloff;                                             // 0x0075(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveTool
// 0x0058 (0x0080 - 0x0028)
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UObject*>                             ToolPropertyObjects;                                      // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (0x0088 - 0x0080)
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0038 (0x00C0 - 0x0088)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0088(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BaseBrushTool
// 0x0100 (0x01C0 - 0x00C0)
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                          // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInBrushStroke;                                           // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              WorldToLocalScale;                                        // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBrushStampData                             LastBrushStamp;                                           // 0x00D0(0x00AC) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x14];                                      // 0x017C(0x0014) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       PropertyClass;                                            // 0x0190(0x0028) (CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBrushStampIndicator*                        BrushStampIndicator;                                      // 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// 0x0000 (0x0028 - 0x0028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicator
// 0x0078 (0x00B0 - 0x0038)
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                              BrushRadius;                                              // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BrushFalloff;                                             // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BrushPosition;                                            // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BrushNormal;                                              // 0x004C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawIndicatorLines;                                      // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawRadiusCircle;                                        // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                SampleStepCount;                                          // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                LineColor;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LineThickness;                                            // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDepthTested;                                             // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawSecondaryLines;                                      // 0x0075(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	float                                              SecondaryLineThickness;                                   // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryLineColor;                                       // 0x007C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         AttachedComponent;                                        // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00C0 (0x0140 - 0x0080)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0080(0x00A0) MISSED OFFSET
	bool                                               bUpdateModifiersDuringDrag;                               // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0121(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// 0x0140 (0x0280 - 0x0140)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0140(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveToolBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (0x0088 - 0x0080)
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (0x0240 - 0x0240)
class AInternalToolFrameworkActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (0x0240 - 0x0240)
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (0x0460 - 0x0440)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                                Color;                                                    // 0x0440(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HoverSizeMultiplier;                                      // 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PixelHitDistanceThreshold;                                // 0x0454(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}


	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0020 (0x0480 - 0x0460)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Direction;                                                // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Gap;                                                      // 0x046C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0474(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBoxComponent
// 0x0040 (0x04A0 - 0x0460)
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Origin;                                                   // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0470(0x0010) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Dimensions;                                               // 0x0480(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LineThickness;                                            // 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRemoveHiddenLines;                                       // 0x0490(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAxisFlip;                                          // 0x0491(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0492(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0020 (0x0480 - 0x0460)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x046C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumSides;                                                 // 0x0474(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bViewAligned;                                             // 0x0478(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOnlyAllowFrontFacingHits;                                // 0x0479(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x047A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoTransformSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}


	void SetTransform(const struct FTransform& NewTransform);
	struct FTransform GetTransform();
};


// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoAxisSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}


	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};


// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoClickTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}


	void UpdateHoverState(bool bHovering);
};


// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoStateTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}


	void EndUpdate();
	void BeginUpdate();
};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoFloatParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}


	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}


	void SetParameter(const struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoLineHandleComponent
// 0x0030 (0x0490 - 0x0460)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HandleSize;                                               // 0x046C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // 0x0474(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0480(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bImageScale;                                              // 0x0484(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0485(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0030 (0x0490 - 0x0460)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     DirectionX;                                               // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionY;                                               // 0x046C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OffsetX;                                                  // 0x0478(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OffsetY;                                                  // 0x047C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LengthX;                                                  // 0x0480(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LengthY;                                                  // 0x0484(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SegmentFlags;                                             // 0x048C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0058 (0x0080 - 0x0028)
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (0x0038 - 0x0028)
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (0x0028 - 0x0028)
class UInputBehaviorSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputRouter
// 0x0088 (0x00B0 - 0x0028)
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                   // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoInvalidateOnCapture;                                 // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractionMechanic
// 0x0008 (0x0030 - 0x0028)
class UInteractionMechanic : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (0x00B8 - 0x0028)
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                            // 0x0058(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (0x0028 - 0x0028)
class UToolContextTransactionProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolManager
// 0x0110 (0x0138 - 0x0028)
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInteractiveTool*                            ActiveLeftTool;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UInteractiveTool*                            ActiveRightTool;                                          // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                             // 0x0090(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00E0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (0x0028 - 0x0028)
class UToolFrameworkComponent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0070 (0x0098 - 0x0028)
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UInputRouter*                                InputRouter;                                              // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UInteractiveToolManager*                     ToolManager;                                              // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       ToolManagerClass;                                         // 0x0070(0x0028) (CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoActor
// 0x0018 (0x0258 - 0x0240)
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                      // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                    // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                 // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmo
// 0x00F8 (0x0130 - 0x0038)
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UTransformProxy*                             TransformProxy;                                           // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0058(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x90];                                      // 0x00A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoFloatParameterSource> FloatParameterSource;                                     // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              MinParameter;                                             // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxParameter;                                             // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00E0 (0x0110 - 0x0030)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (0x0098 - 0x0030)
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B0 (0x0130 - 0x0080)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (0x0090 - 0x0080)
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                    // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x004C(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                    // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0050(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x00C8 (0x0110 - 0x0048)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              Parameter;                                                // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxis;                                       // 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x00E8 (0x0130 - 0x0048)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00B8(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationNormal;                                     // 0x00D4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxisX;                                      // 0x00E0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxisY;                                      // 0x00EC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x00C8 (0x0110 - 0x0048)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              Angle;                                                    // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurRotationAxis;                                          // 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurRotationOrigin;                                        // 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// 0x00A8 (0x00F0 - 0x0048)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                // 0x006C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0074(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleNormal;                                           // 0x0090(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisX;                                            // 0x009C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisY;                                            // 0x00A8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00C0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Parameter;                                                // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x0070(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxis;                                             // 0x0078(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// 0x00E8 (0x0130 - 0x0048)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                          // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                // 0x00B4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00BC(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                           // 0x00CC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleNormal;                                           // 0x00D8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisX;                                            // 0x00E4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisY;                                            // 0x00F0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C8 (0x0100 - 0x0038)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                          // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFlipX;                                                   // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFlipY;                                                   // 0x008A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                           // 0x008B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionNormal;                                        // 0x0098(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxisX;                                         // 0x00A4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxisY;                                         // 0x00B0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionStartParameter;                                // 0x00D4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionCurParameter;                                  // 0x00DC(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   ParameterSigns;                                           // 0x00E4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (0x0040 - 0x0028)
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (0x0080 - 0x0040)
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                 // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Edges;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Faces;                                                    // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Groups;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x00B0 (0x0130 - 0x0080)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET
	bool                                               HitTestOnRelease;                                         // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x00C1(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (0x0028 - 0x0028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (0x0088 - 0x0080)
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (0x0030 - 0x0028)
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (0x0058 - 0x0028)
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00B8 (0x00E0 - 0x0028)
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                       // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0080 (0x02C0 - 0x0240)
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                               // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateY;                                               // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateZ;                                               // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateYZ;                                              // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateXZ;                                              // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateXY;                                              // 0x0268(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateX;                                                  // 0x0270(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateY;                                                  // 0x0278(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateZ;                                                  // 0x0280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         UniformScale;                                             // 0x0288(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleX;                                               // 0x0290(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleY;                                               // 0x0298(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleZ;                                               // 0x02A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleYZ;                                             // 0x02A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleXZ;                                             // 0x02B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleXY;                                             // 0x02B8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmo
// 0x0168 (0x01A0 - 0x0038)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UTransformProxy*                             ActiveTarget;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                         // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGridSizeIsExplicit;                                      // 0x0049(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	struct FVector                                     ExplicitGridSize;                                         // 0x004C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotationGridSizeIsExplicit;                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FRotator                                    ExplicitRotationGridSize;                                 // 0x005C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldRotGrid;                                      // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseContextCoordinateSystem;                              // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                  // 0x006C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x90];                                      // 0x0070(0x0090) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0100(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                // 0x0110(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                         // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisXSource;                                              // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0158(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                          // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                          // 0x0168(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                          // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                    // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformProxy
// 0x00C8 (0x00F0 - 0x0028)
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	bool                                               bRotatePerObject;                                         // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSetPivotMode;                                            // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0072(0x001E) MISSED OFFSET
	struct FTransform                                  SharedTransform;                                          // 0x0090(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  InitialSharedTransform;                                   // 0x00C0(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                // 0x0048(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bModifyComponentOnTransform;                              // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoScaledTransformSource
// 0x0098 (0x00E0 - 0x0048)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource>      ChildTransformSource;                                     // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0058(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (0x0050 - 0x0048)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                    // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
