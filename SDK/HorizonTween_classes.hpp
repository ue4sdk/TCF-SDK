#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorizonTween_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HorizonTween.HorizonSpline
// 0x0008 (0x0258 - 0x0250)
class AHorizonSpline : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonSpline"));
		return ptr;
	}

};


// Class HorizonTween.HorizonTweenEvent
// 0x0100 (0x0138 - 0x0038)
class UHorizonTweenEvent : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    OnTweenStart;                                             // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTweenUpdate;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTweenLoop;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTweenFinished;                                          // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0078(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenEvent"));
		return ptr;
	}


	void Stop();
	void SetFreeze(bool B);
	void Resume();
	void Play();
	void Pause();
	bool IsFreeze();
	class AHorizonTweenSystem* GetTweenSystem();
	struct FHorizonTweenEventParameters GetTweenEventParam();
	int GetCurrentNumOfLoop();
	float GetCurrentDuration();
	float GetCurrentAlpha();
	void Finish(bool bTweenToEnd);
};


// Class HorizonTween.HorizonTweenActorEvent
// 0x0000 (0x0138 - 0x0138)
class UHorizonTweenActorEvent : public UHorizonTweenEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorEvent"));
		return ptr;
	}

};


// Class HorizonTween.HorizonTweenActorMoveFromToEvent
// 0x0160 (0x0298 - 0x0138)
class UHorizonTweenActorMoveFromToEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0138(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorMoveFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventActorMoveFromToParameters GetEventParamImpl();
	struct FVector GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenActorRotatorFromToEvent
// 0x0170 (0x02A8 - 0x0138)
class UHorizonTweenActorRotatorFromToEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0138(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorRotatorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventActorRotatorFromToParameters GetEventParamImpl();
	struct FRotator GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenActorScaleFromToEvent
// 0x0160 (0x0298 - 0x0138)
class UHorizonTweenActorScaleFromToEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0138(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorScaleFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventActorScaleFromToParameters GetEventParamImpl();
	struct FVector GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenActorColorFromToEvent
// 0x0258 (0x0390 - 0x0138)
class UHorizonTweenActorColorFromToEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0138(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorColorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventActorColorFromToParameters GetEventParamImpl();
	struct FLinearColor GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenActorMoveSplinePathEvent
// 0x0138 (0x0270 - 0x0138)
class UHorizonTweenActorMoveSplinePathEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0138(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenActorMoveSplinePathEvent"));
		return ptr;
	}


	struct FHorizonTweenEventActorMoveSplinePathParameters GetEventParamImpl();
	float GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenBaseTypeEvent
// 0x0000 (0x0138 - 0x0138)
class UHorizonTweenBaseTypeEvent : public UHorizonTweenEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenBaseTypeEvent"));
		return ptr;
	}

};


// Class HorizonTween.HorizonTweenFloatEvent
// 0x00B8 (0x01F0 - 0x0138)
class UHorizonTweenFloatEvent : public UHorizonTweenBaseTypeEvent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0138(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenFloatEvent"));
		return ptr;
	}


	struct FHorizonTweenEventFloatParameters GetEventParamImpl();
	float GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenVectorEvent
// 0x0158 (0x0290 - 0x0138)
class UHorizonTweenVectorEvent : public UHorizonTweenBaseTypeEvent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0138(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenVectorEvent"));
		return ptr;
	}


	struct FHorizonTweenEventVectorParameters GetEventParamImpl();
	struct FVector GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenVector2DEvent
// 0x00C8 (0x0200 - 0x0138)
class UHorizonTweenVector2DEvent : public UHorizonTweenBaseTypeEvent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0138(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenVector2DEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetVector2DParameters GetEventParamImpl();
	struct FVector2D GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenLinearColorEvent
// 0x0250 (0x0388 - 0x0138)
class UHorizonTweenLinearColorEvent : public UHorizonTweenBaseTypeEvent
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0138(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenLinearColorEvent"));
		return ptr;
	}


	struct FHorizonTweenEventLinearColorParameters GetEventParamImpl();
	struct FLinearColor GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenRotatorEvent
// 0x0160 (0x0298 - 0x0138)
class UHorizonTweenRotatorEvent : public UHorizonTweenBaseTypeEvent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0138(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenRotatorEvent"));
		return ptr;
	}


	struct FHorizonTweenEventRotatorParameters GetEventParamImpl();
	struct FRotator GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSplinePathEvent
// 0x0130 (0x0268 - 0x0138)
class UHorizonTweenSplinePathEvent : public UHorizonTweenActorEvent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0138(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSplinePathEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSplinePathParameters GetEventParamImpl();
	struct FVector GetCurrentScale();
	struct FRotator GetCurrentRotation();
	struct FVector GetCurrentLocation();
	float GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UHorizonTweenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenFunctionLibrary"));
		return ptr;
	}


	static struct FVector VLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FVector& Start, const struct FVector& End, float Alpha, TArray<float> extraParameterList);
	static struct FVector2D V2DLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FVector2D& Start, const struct FVector2D& End, float Alpha, TArray<float> extraParameterList);
	static bool SetTweenWidgetSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static bool SetTweenWidgetSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static bool SetTweenSceneComponentSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static bool SetTweenSceneComponentSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static bool SetTweenActorSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static bool SetTweenActorSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static struct FRotator RLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FRotator& Start, const struct FRotator& End, float Alpha, TArray<float> extraParameterList);
	static bool ProcessCollision(class UHorizonTweenEvent* pTweenEvent, const struct FHorizonTweenEventTransformParam& TransformParam);
	static struct FLinearColor LinearColorLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FLinearColor& Start, const struct FLinearColor& End, float Alpha, TArray<float> extraParameterList);
	static class USceneComponent* GetChildComponentByName(class USceneComponent* pParent, const struct FName& Name, bool bIncludeAllDescendants);
	static float FloatLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, float Start, float End, float Alpha, TArray<float> extraParameterList);
	static void ConstrainsVector2D(TEnumAsByte<EHorizonTweenVector2DConstraints> eType, const struct FVector2D& originVec, struct FVector2D* replacedVec);
	static void ConstrainsVector(TEnumAsByte<EHorizonTweenVectorConstraints> eType, const struct FVector& originVec, struct FVector* replacedVec);
};


// Class HorizonTween.HorizonTweenSceneComponentEvent
// 0x0000 (0x0138 - 0x0138)
class UHorizonTweenSceneComponentEvent : public UHorizonTweenEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentEvent"));
		return ptr;
	}

};


// Class HorizonTween.HorizonTweenSceneComponentMoveFromToEvent
// 0x0160 (0x0298 - 0x0138)
class UHorizonTweenSceneComponentMoveFromToEvent : public UHorizonTweenSceneComponentEvent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0138(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentMoveFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSceneComponentMoveFromToParameters GetEventParamImpl();
	struct FVector GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent
// 0x0170 (0x02A8 - 0x0138)
class UHorizonTweenSceneComponentRotatorFromToEvent : public UHorizonTweenSceneComponentEvent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0138(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSceneComponentRotatorFromToParameters GetEventParamImpl();
	struct FRotator GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSceneComponentScaleFromToEvent
// 0x0160 (0x0298 - 0x0138)
class UHorizonTweenSceneComponentScaleFromToEvent : public UHorizonTweenSceneComponentEvent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0138(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentScaleFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSceneComponentScaleFromToParameters GetEventParamImpl();
	struct FVector GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSceneComponentColorFromToEvent
// 0x0258 (0x0390 - 0x0138)
class UHorizonTweenSceneComponentColorFromToEvent : public UHorizonTweenSceneComponentEvent
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0138(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentColorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSceneComponentColorFromToParameters GetEventParamImpl();
	struct FLinearColor GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent
// 0x0138 (0x0270 - 0x0138)
class UHorizonTweenSceneComponentMoveSplinePathEvent : public UHorizonTweenSceneComponentEvent
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0138(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent"));
		return ptr;
	}


	struct FHorizonTweenEventSceneComponentMoveSplinePathParameters GetEventParamImpl();
	float GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenSystem
// 0x0098 (0x02E8 - 0x0250)
class AHorizonTweenSystem : public AInfo
{
public:
	struct FMulticastScriptDelegate                    OnAddTweenEvent;                                          // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	TMap<struct FName, class UHorizonTweenEvent*>      TweenEventMap;                                            // 0x0278(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TArray<class UHorizonTweenEvent*>                  PendingKillTweenEvenList;                                 // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<class UHorizonTweenEvent*>                  PendingAddTweenEvenList;                                  // 0x02D8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSystem"));
		return ptr;
	}


	void StopTweenEventByObject(class UObject* pTweenTarget);
	void StopTweenEventByName(const struct FName& EventName);
	void StopAllTweenEvent();
	void ResumeTweenEventByObject(class UObject* pTweenTarget);
	void ResumeTweenEventByName(const struct FName& EventName);
	void ResumeAllTweenEvent();
	void RemoveTweenEventByObject(class UObject* pTweenTarget);
	void RemoveTweenEventByName(const struct FName& EventName);
	void RemoveAllTweenEvent();
	void PlayTweenEventByObject(class UObject* pTweenTarget);
	void PlayTweenEventByName(const struct FName& EventName);
	void PlayAllTweenEvent();
	void PauseTweenEventByObject(class UObject* pTweenTarget);
	void PauseTweenEventByName(const struct FName& EventName);
	void PauseAllTweenEvent();
	TMap<struct FName, class UHorizonTweenEvent*> GetTweenEventMap();
	int GetNumTweenEvent();
	void FinishTweenEventByObject(class UObject* pTweenTarget, bool bTweenToEnd);
	void FinishTweenEventByName(const struct FName& EventName, bool bTweenToEnd);
	void FinishAllTweenEvent(bool bTweenToEnd);
	class UHorizonTweenEvent* FindTweenEventByName(const struct FName& EventName);
	class UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	class UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	class UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	class UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	void CreateTweenWidgetEventWithParam(class UWidget* pTarget, struct FHorizonTweenEventWidgetParameters* Params, class UHorizonTweenWidgetMoveFromToEvent** OutMoveEvent, class UHorizonTweenWidgetRotatorFromToEvent** OutRotateEvent, class UHorizonTweenWidgetScaleFromToEvent** OutScaleEvent, class UHorizonTweenWidgetSheerFromToEvent** OutSheerEvent, class UHorizonTweenWidgetColorFromToEvent** OutColorEvent);
	class UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	class UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	class UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	class UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	class UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	class UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	void CreateTweenSceneComponentEventWithParam(class USceneComponent* pTarget, struct FHorizonTweenEventSceneComponentParameters* Params, class UHorizonTweenSceneComponentMoveFromToEvent** OutMoveEvent, class UHorizonTweenSceneComponentRotatorFromToEvent** OutRotateEvent, class UHorizonTweenSceneComponentScaleFromToEvent** OutScaleEvent, class UHorizonTweenSceneComponentColorFromToEvent** OutColorEvent);
	class UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	class UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	class UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	class UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	class UHorizonTweenEvent* CreateTweenEventWithParameter(const struct FHorizonTweenEventParameters& Param);
	class UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	class UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	class UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	void CreateTweenActorEventWithParam(class AActor* pTarget, struct FHorizonTweenEventActorParameters* Params, class UHorizonTweenActorMoveFromToEvent** OutMoveEvent, class UHorizonTweenActorRotatorFromToEvent** OutRotateEvent, class UHorizonTweenActorScaleFromToEvent** OutScaleEvent, class UHorizonTweenActorColorFromToEvent** OutColorEvent);
	class UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
};


// Class HorizonTween.HorizonTweenSystemLibrary
// 0x0000 (0x0030 - 0x0030)
class UHorizonTweenSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSystemLibrary"));
		return ptr;
	}


	static class AHorizonTweenSystem* GetTweenSystemWithName(class UObject* WorldContextObject, const struct FName& SystemName);
	static class AHorizonTweenSystem* GetDefaultTweenSystem(class UObject* WorldContextObject);
	static class UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	static class UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	static class UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	static void CreateTweenWidgetEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, struct FHorizonTweenEventWidgetParameters* Params, class UHorizonTweenWidgetMoveFromToEvent** OutMoveEvent, class UHorizonTweenWidgetRotatorFromToEvent** OutRotateEvent, class UHorizonTweenWidgetScaleFromToEvent** OutScaleEvent, class UHorizonTweenWidgetSheerFromToEvent** OutSheerEvent, class UHorizonTweenWidgetColorFromToEvent** OutColorEvent);
	static class UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	static class UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	static class UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class UObject* WorldContextObject, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	static void CreateTweenSceneComponentEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, struct FHorizonTweenEventSceneComponentParameters* Params, class UHorizonTweenSceneComponentMoveFromToEvent** OutMoveEvent, class UHorizonTweenSceneComponentRotatorFromToEvent** OutRotateEvent, class UHorizonTweenSceneComponentScaleFromToEvent** OutScaleEvent, class UHorizonTweenSceneComponentColorFromToEvent** OutColorEvent);
	static class UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	static class UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	static class UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	static class UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	static class UHorizonTweenEvent* CreateTweenEventWithParameter(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param);
	static class UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	static class UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	static void CreateTweenActorEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, struct FHorizonTweenEventActorParameters* Params, class UHorizonTweenActorMoveFromToEvent** OutMoveEvent, class UHorizonTweenActorRotatorFromToEvent** OutRotateEvent, class UHorizonTweenActorScaleFromToEvent** OutScaleEvent, class UHorizonTweenActorColorFromToEvent** OutColorEvent);
	static class UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
};


// Class HorizonTween.HorizonTweenSystemProxy
// 0x0000 (0x0038 - 0x0038)
class UHorizonTweenSystemProxy : public UBlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenSystemProxy"));
		return ptr;
	}


	static class UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	static class UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	static class UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	static class UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	static class UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	static class UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	static class UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	static class UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	static class UHorizonTweenVectorEvent* CreateTweenVectorEvent(class AHorizonTweenSystem* TweenSystem, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	static class UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	static class UHorizonTweenVector2DEvent* CreateTweenVector2DEvent(class AHorizonTweenSystem* TweenSystem, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	static class UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	static class UHorizonTweenRotatorEvent* CreateTweenRotatorEvent(class AHorizonTweenSystem* TweenSystem, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	static class UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	static class UHorizonTweenLinearColorEvent* CreateTweenLinearColorEvent(class AHorizonTweenSystem* TweenSystem, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	static class UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	static class UHorizonTweenFloatEvent* CreateTweenFloatEvent(class AHorizonTweenSystem* TweenSystem, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	static class UHorizonTweenEvent* CreateTweenEventWithParameter(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param);
	static class UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	static class UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	static class UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	static class UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	static class UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	static class UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
	static class UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetSheerFromToEvent* CreateDefaultTweenWidgetSheerFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	static class UHorizonTweenWidgetSheerFromToEvent* CreateDefaultTweenWidgetSheerFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl);
	static class UHorizonTweenWidgetScaleFromToEvent* CreateDefaultTweenWidgetScaleFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	static class UHorizonTweenWidgetScaleFromToEvent* CreateDefaultTweenWidgetScaleFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl);
	static class UHorizonTweenWidgetRotatorFromToEvent* CreateDefaultTweenWidgetRotatorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetRotatorFromToEvent* CreateDefaultTweenWidgetRotatorFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenWidgetMoveFromToEvent* CreateDefaultTweenWidgetMoveFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	static class UHorizonTweenWidgetMoveFromToEvent* CreateDefaultTweenWidgetMoveFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl);
	static class UHorizonTweenWidgetColorFromToEvent* CreateDefaultTweenWidgetColorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	static class UHorizonTweenWidgetColorFromToEvent* CreateDefaultTweenWidgetColorFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl);
	static class UHorizonTweenVectorEvent* CreateDefaultTweenVectorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	static class UHorizonTweenVectorEvent* CreateDefaultTweenVectorEvent(class UObject* WorldContextObject, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl);
	static class UHorizonTweenVector2DEvent* CreateDefaultTweenVector2DEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	static class UHorizonTweenVector2DEvent* CreateDefaultTweenVector2DEvent(class UObject* WorldContextObject, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParamWithSplineComponentAndParam(class UObject* WorldContextObject, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParamWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentScaleFromToEvent* CreateDefaultTweenSceneComponentScaleFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentScaleFromToEvent* CreateDefaultTweenSceneComponentScaleFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentRotatorFromToEvent* CreateDefaultTweenSceneComponentRotatorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentRotatorFromToEvent* CreateDefaultTweenSceneComponentRotatorFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveFromToEvent* CreateDefaultTweenSceneComponentMoveFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentMoveFromToEvent* CreateDefaultTweenSceneComponentMoveFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentColorFromToEvent* CreateDefaultTweenSceneComponentColorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	static class UHorizonTweenSceneComponentColorFromToEvent* CreateDefaultTweenSceneComponentColorFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl);
	static class UHorizonTweenRotatorEvent* CreateDefaultTweenRotatorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	static class UHorizonTweenRotatorEvent* CreateDefaultTweenRotatorEvent(class UObject* WorldContextObject, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl);
	static class UHorizonTweenLinearColorEvent* CreateDefaultTweenLinearColorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	static class UHorizonTweenLinearColorEvent* CreateDefaultTweenLinearColorEvent(class UObject* WorldContextObject, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl);
	static class UHorizonTweenFloatEvent* CreateDefaultTweenFloatEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	static class UHorizonTweenFloatEvent* CreateDefaultTweenFloatEvent(class UObject* WorldContextObject, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl);
	static class UHorizonTweenEvent* CreateDefaultTweenEventWithParameter(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param);
	static class UHorizonTweenActorScaleFromToEvent* CreateDefaultTweenActorScaleFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	static class UHorizonTweenActorScaleFromToEvent* CreateDefaultTweenActorScaleFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl);
	static class UHorizonTweenActorRotatorFromToEvent* CreateDefaultTweenActorRotatorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	static class UHorizonTweenActorRotatorFromToEvent* CreateDefaultTweenActorRotatorFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl);
	static class UHorizonTweenActorMoveFromToEvent* CreateDefaultTweenActorMoveFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	static class UHorizonTweenActorMoveFromToEvent* CreateDefaultTweenActorMoveFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl);
	static class UHorizonTweenActorColorFromToEvent* CreateDefaultTweenActorColorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
	static class UHorizonTweenActorColorFromToEvent* CreateDefaultTweenActorColorFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl);
};


// Class HorizonTween.HorizonTweenWidgetEvent
// 0x0000 (0x0138 - 0x0138)
class UHorizonTweenWidgetEvent : public UHorizonTweenEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetEvent"));
		return ptr;
	}

};


// Class HorizonTween.HorizonTweenWidgetMoveFromToEvent
// 0x00D0 (0x0208 - 0x0138)
class UHorizonTweenWidgetMoveFromToEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0138(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetMoveFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetMoveFromToParameters GetEventParamImpl();
	struct FVector2D GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenWidgetRotatorFromToEvent
// 0x00C8 (0x0200 - 0x0138)
class UHorizonTweenWidgetRotatorFromToEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0138(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetRotatorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetRotatorFromToParameters GetEventParamImpl();
	float GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenWidgetScaleFromToEvent
// 0x00D0 (0x0208 - 0x0138)
class UHorizonTweenWidgetScaleFromToEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0138(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetScaleFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetScaleFromToParameters GetEventParamImpl();
	struct FVector2D GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenWidgetSheerFromToEvent
// 0x00D0 (0x0208 - 0x0138)
class UHorizonTweenWidgetSheerFromToEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0138(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetSheerFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetSheerFromToParameters GetEventParamImpl();
	struct FVector2D GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenWidgetColorFromToEvent
// 0x0258 (0x0390 - 0x0138)
class UHorizonTweenWidgetColorFromToEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0138(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetColorFromToEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetColorFromToParameters GetEventParamImpl();
	struct FLinearColor GetCurrentLerp();
};


// Class HorizonTween.HorizonTweenWidgetMoveSplinePathEvent
// 0x0140 (0x0278 - 0x0138)
class UHorizonTweenWidgetMoveSplinePathEvent : public UHorizonTweenWidgetEvent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0138(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HorizonTween.HorizonTweenWidgetMoveSplinePathEvent"));
		return ptr;
	}


	struct FHorizonTweenEventWidgetMoveSplinePathParameters GetEventParamImpl();
	float GetCurrentLerp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
