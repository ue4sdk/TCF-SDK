#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatchScreen_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C
// 0x003C (0x030C - 0x02D0)
class UWBP_EndOfMatchScreen_Base_C : public UYWidget
{
public:
	TArray<class UUserWidget*>                         AnimationPlayingWidgets;                                  // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UWidgetAnimation*>                    PlayingAnimations;                                        // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                CurrentStage;                                             // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	TArray<struct FString>                             StageNamesForBI;                                          // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ScreenStartTime;                                          // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C"));
		return ptr;
	}


	void SendBIEventForStage(int stage);
	void OnStageUpdated(int stage);
	void SetStage(int stage);
	void Skip();
	void IsAnyAnimPlaying(bool* isAnimPlaying);
	void PlayAnim(class UUserWidget* widgetToPlayOn, class UWidgetAnimation* Animation, bool clearCurrentPlayingAnims);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
