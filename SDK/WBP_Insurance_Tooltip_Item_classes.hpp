#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Insurance_Tooltip_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C
// 0x0028 (0x02F8 - 0x02D0)
class UWBP_Insurance_Tooltip_Item_C : public UYWidget
{
public:
	class UWidgetAnimation*                            WidgetIn_Anim;                                            // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_InsuranceIcon;                                        // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    Info;                                                     // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_Description;                                          // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_DividerHorizontal_Panel_C*              WBP_DividerHorizontal_Panel;                              // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C"));
		return ptr;
	}


	void SetInsuranceNotPurchasable();
	void UpdateVisibility(EYInsuranceStatus InsuranceStatus);
	void UpdateDescription(EYInsuranceStatus InsuranceStatus);
	void UpdateIcon(EYInsuranceType insurance, EYInsuranceStatus Status);
	void SetInsurance(EYInsuranceType insurance, EYInsuranceStatus Status);
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
