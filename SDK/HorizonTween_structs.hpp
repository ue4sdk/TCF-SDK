#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "HorizonTween_enums.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HorizonTween.HorizonTweenEventParameters
// 0x0038
struct FHorizonTweenEventParameters
{
	struct FName                                       TweenEventName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenLerpMode>                 LerpMode;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<float>                                      LerpModeExtraParameterList;                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenPlayMode>                 PlayMode;                                                 // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                NumOfLoop;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DelayInit;                                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DelayLoop;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPauseOnTweenLoop;                                        // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventImplementParameters
// 0x0001
struct FHorizonTweenEventImplementParameters
{
	bool                                               bUseCustomCurve;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventTweenListImplementParameters
// 0x0001 (0x0002 - 0x0001)
struct FHorizonTweenEventTweenListImplementParameters : public FHorizonTweenEventImplementParameters
{
	bool                                               bLoopTweenList;                                           // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventTransformParam
// 0x0090
struct FHorizonTweenEventTransformParam
{
	bool                                               bSweep;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTeleport;                                                // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCollideAndFinishEvent;                                   // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCollideAndFinishEventTweenToEnd;                         // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenCoordinateSpace>          CoordinateSpaceType;                                      // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FHitResult                                  SweepHitResult;                                           // 0x0008(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventCustomCurve
// 0x0088
struct FHorizonTweenEventCustomCurve
{
	struct FRuntimeFloatCurve                          CustomTweenCurve;                                         // 0x0000(0x0088) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventVectorParameters
// 0x0146 (0x0148 - 0x0002)
struct FHorizonTweenEventVectorParameters : public FHorizonTweenEventTweenListImplementParameters
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FVector>                             TweenStartList;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             TweenEndList;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenVectorConstraints>        ConstraintType;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FHorizonTweenEventTransformParam            TransformParam;                                           // 0x002C(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FHorizonTweenEventCustomCurve               CustomTweenCurve;                                         // 0x00C0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorMoveFromToParameters
// 0x0008 (0x0150 - 0x0148)
struct FHorizonTweenEventActorMoveFromToParameters : public FHorizonTweenEventVectorParameters
{
	TWeakObjectPtr<class AActor>                       TweenTargetWeakPtr;                                       // 0x0148(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventRotatorParameters
// 0x014E (0x0150 - 0x0002)
struct FHorizonTweenEventRotatorParameters : public FHorizonTweenEventTweenListImplementParameters
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FRotator>                            TweenStartList;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FRotator>                            TweenEndList;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenRotatorConstraints>       ConstraintType;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FHorizonTweenEventTransformParam            TransformParam;                                           // 0x002C(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FHorizonTweenEventCustomCurve               CustomTweenCurve;                                         // 0x00C0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseShortestPath;                                         // 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventActorRotatorFromToParameters
// 0x0010 (0x0160 - 0x0150)
struct FHorizonTweenEventActorRotatorFromToParameters : public FHorizonTweenEventRotatorParameters
{
	TWeakObjectPtr<class AActor>                       TweenTargetWeakPtr;                                       // 0x0150(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShortestPath;                                            // 0x0158(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventActorScaleFromToParameters
// 0x0008 (0x0150 - 0x0148)
struct FHorizonTweenEventActorScaleFromToParameters : public FHorizonTweenEventVectorParameters
{
	TWeakObjectPtr<class AActor>                       TweenTargetWeakPtr;                                       // 0x0148(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventCustomColorCurve
// 0x0208
struct FHorizonTweenEventCustomColorCurve
{
	struct FRuntimeCurveLinearColor                    CustomTweenCurve;                                         // 0x0000(0x0208) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventLinearColorParameters
// 0x0236 (0x0238 - 0x0002)
struct FHorizonTweenEventLinearColorParameters : public FHorizonTweenEventTweenListImplementParameters
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FLinearColor>                        TweenStartList;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        TweenEndList;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bSRGB;                                                    // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FHorizonTweenEventCustomColorCurve          CustomTweenCurve;                                         // 0x0030(0x0208) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorColorFromToParameters
// 0x0008 (0x0240 - 0x0238)
struct FHorizonTweenEventActorColorFromToParameters : public FHorizonTweenEventLinearColorParameters
{
	TWeakObjectPtr<class AActor>                       TweenTargetWeakPtr;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventSplinePathParameters
// 0x012F (0x0130 - 0x0001)
struct FHorizonTweenEventSplinePathParameters : public FHorizonTweenEventImplementParameters
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USplineComponent*                            SplineComponent;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseConstantVelocity;                                     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTweenLocation;                                           // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTweenRotation;                                           // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTweenScale;                                              // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenVectorConstraints>        LocationConstraintType;                                   // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenRotatorConstraints>       RotatorConstraintType;                                    // 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenVectorConstraints>        ScaleConstraintType;                                      // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	struct FHorizonTweenEventTransformParam            TransformParam;                                           // 0x0018(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventCustomCurve               CustomTweenCurve;                                         // 0x00A8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventActorMoveSplinePathParameters
// 0x0008 (0x0138 - 0x0130)
struct FHorizonTweenEventActorMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters
{
	TWeakObjectPtr<class AActor>                       TweenTargetWeakPtr;                                       // 0x0130(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventFloatParameters
// 0x00AE (0x00B0 - 0x0002)
struct FHorizonTweenEventFloatParameters : public FHorizonTweenEventTweenListImplementParameters
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<float>                                      TweenStartList;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      TweenEndList;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventCustomCurve               CustomTweenCurve;                                         // 0x0028(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetVector2DParameters
// 0x00B6 (0x00B8 - 0x0002)
struct FHorizonTweenEventWidgetVector2DParameters : public FHorizonTweenEventTweenListImplementParameters
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FVector2D>                           TweenStartList;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           TweenEndList;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenVector2DConstraints>      ConstraintType;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizonTweenCoordinateSpace>          CoordinateSpaceType;                                      // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FHorizonTweenEventCustomCurve               CustomTweenCurve;                                         // 0x0030(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetMoveSplinePathParameters
// 0x0010 (0x0140 - 0x0130)
struct FHorizonTweenEventWidgetMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x0130(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTweenSheer;                                              // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentMoveSplinePathParameters
// 0x0008 (0x0138 - 0x0130)
struct FHorizonTweenEventSceneComponentMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters
{
	TWeakObjectPtr<class USceneComponent>              TweenTargetWeakPtr;                                       // 0x0130(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentMoveFromToParameters
// 0x0008 (0x0150 - 0x0148)
struct FHorizonTweenEventSceneComponentMoveFromToParameters : public FHorizonTweenEventVectorParameters
{
	TWeakObjectPtr<class USceneComponent>              TweenTargetWeakPtr;                                       // 0x0148(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentRotatorFromToParameters
// 0x0010 (0x0160 - 0x0150)
struct FHorizonTweenEventSceneComponentRotatorFromToParameters : public FHorizonTweenEventRotatorParameters
{
	TWeakObjectPtr<class USceneComponent>              TweenTargetWeakPtr;                                       // 0x0150(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShortestPath;                                            // 0x0158(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentScaleFromToParameters
// 0x0008 (0x0150 - 0x0148)
struct FHorizonTweenEventSceneComponentScaleFromToParameters : public FHorizonTweenEventVectorParameters
{
	TWeakObjectPtr<class USceneComponent>              TweenTargetWeakPtr;                                       // 0x0148(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentColorFromToParameters
// 0x0008 (0x0240 - 0x0238)
struct FHorizonTweenEventSceneComponentColorFromToParameters : public FHorizonTweenEventLinearColorParameters
{
	TWeakObjectPtr<class USceneComponent>              TweenTargetWeakPtr;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetSheerFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventWidgetSheerFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x00B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetScaleFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventWidgetScaleFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x00B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetRotatorFromToParameters
// 0x0010 (0x00C0 - 0x00B0)
struct FHorizonTweenEventWidgetRotatorFromToParameters : public FHorizonTweenEventFloatParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x00B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShortestPath;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetMoveFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventWidgetMoveFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x00B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetColorFromToParameters
// 0x0008 (0x0240 - 0x0238)
struct FHorizonTweenEventWidgetColorFromToParameters : public FHorizonTweenEventLinearColorParameters
{
	TWeakObjectPtr<class UWidget>                      TweenTargetWeakPtr;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct HorizonTween.HorizonTweenEventWidgetParameters
// 0x0680
struct FHorizonTweenEventWidgetParameters
{
	struct FHorizonTweenEventParameters                MoveFromToParam;                                          // 0x0000(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventWidgetMoveFromToParameters MoveFromToParamImpl;                                      // 0x0038(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bMoveFromTo;                                              // 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                RotatorFromToParam;                                       // 0x0100(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventWidgetRotatorFromToParameters RotatorFromToParamImpl;                                   // 0x0138(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateFromTo;                                            // 0x01F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ScaleFromToParam;                                         // 0x0200(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventWidgetScaleFromToParameters ScaleFromToParamImpl;                                     // 0x0238(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bScaleFromTo;                                             // 0x02F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                SheerFromToParam;                                         // 0x0300(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventWidgetSheerFromToParameters SheerFromToParamImpl;                                     // 0x0338(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bSheerFromTo;                                             // 0x03F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ColorFromToParam;                                         // 0x0400(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventWidgetColorFromToParameters ColorFromToParamImpl;                                     // 0x0438(0x0240) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bColorFromTo;                                             // 0x0678(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSceneComponentParameters
// 0x0740
struct FHorizonTweenEventSceneComponentParameters
{
	struct FHorizonTweenEventParameters                MoveFromToParam;                                          // 0x0000(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventSceneComponentMoveFromToParameters MoveFromToParamImpl;                                      // 0x0038(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bMoveFromTo;                                              // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                RotatorFromToParam;                                       // 0x0190(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventSceneComponentRotatorFromToParameters RotatorFromToParamImpl;                                   // 0x01C8(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateFromTo;                                            // 0x0328(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ScaleFromToParam;                                         // 0x0330(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventSceneComponentScaleFromToParameters ScaleFromToParamImpl;                                     // 0x0368(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bScaleFromTo;                                             // 0x04B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ColorFromToParam;                                         // 0x04C0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventSceneComponentColorFromToParameters ColorFromToParamImpl;                                     // 0x04F8(0x0240) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bColorFromTo;                                             // 0x0738(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventActorParameters
// 0x0740
struct FHorizonTweenEventActorParameters
{
	struct FHorizonTweenEventParameters                MoveFromToParam;                                          // 0x0000(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventActorMoveFromToParameters MoveFromToParamImpl;                                      // 0x0038(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bMoveFromTo;                                              // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                RotatorFromToParam;                                       // 0x0190(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventActorRotatorFromToParameters RotatorFromToParamImpl;                                   // 0x01C8(0x0160) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateFromTo;                                            // 0x0328(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ScaleFromToParam;                                         // 0x0330(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventActorScaleFromToParameters ScaleFromToParamImpl;                                     // 0x0368(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bScaleFromTo;                                             // 0x04B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FHorizonTweenEventParameters                ColorFromToParam;                                         // 0x04C0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FHorizonTweenEventActorColorFromToParameters ColorFromToParamImpl;                                     // 0x04F8(0x0240) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	bool                                               bColorFromTo;                                             // 0x0738(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetMoveSplinePathParameters
// 0x0010 (0x0140 - 0x0130)
struct FHorizonTweenEventSlateWidgetMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	bool                                               bTweenSheer;                                              // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetColorFromToParameters
// 0x0008 (0x0240 - 0x0238)
struct FHorizonTweenEventSlateWidgetColorFromToParameters : public FHorizonTweenEventLinearColorParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetSheerFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventSlateWidgetSheerFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetScaleFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventSlateWidgetScaleFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetRotatorFromToParameters
// 0x0010 (0x00C0 - 0x00B0)
struct FHorizonTweenEventSlateWidgetRotatorFromToParameters : public FHorizonTweenEventFloatParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               bShortestPath;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct HorizonTween.HorizonTweenEventSlateWidgetMoveFromToParameters
// 0x0008 (0x00C0 - 0x00B8)
struct FHorizonTweenEventSlateWidgetMoveFromToParameters : public FHorizonTweenEventWidgetVector2DParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
