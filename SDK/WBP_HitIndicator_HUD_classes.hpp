#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_HitIndicator_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C
// 0x0010 (0x0308 - 0x02F8)
class UWBP_HitIndicator_HUD_C : public UYWidget_HitIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Hit;                                                      // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C"));
		return ptr;
	}


	float BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& damageData);
	void OnInitialized();
	void OnTakeDamage_CallBack(const struct FYDealtDamageData& Data);
	void ExecuteUbergraph_WBP_HitIndicator_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
