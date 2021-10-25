#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HUD_HitIndicator_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C
// 0x0010 (0x02F8 - 0x02E8)
class UHUD_HitIndicator_WBP_C : public UYWidget_HitIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Hit;                                                      // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C"));
		return ptr;
	}


	float BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& damageData);
	void OnInitialized();
	void OnTakeDamage_CallBack(const struct FYDealtDamageData& Data);
	void ExecuteUbergraph_HUD_HitIndicator_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
