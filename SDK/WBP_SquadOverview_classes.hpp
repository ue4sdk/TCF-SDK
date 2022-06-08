#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SquadOverview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SquadOverview.WBP_SquadOverview_C
// 0x0010 (0x0308 - 0x02F8)
class UWBP_SquadOverview_C : public UYWidget_OutpostSquadToggle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UButton*                                     Btn_LeaveSquad;                                           // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SquadOverview.WBP_SquadOverview_C"));
		return ptr;
	}


	class UWidget* Get_LeaveSquadButton_ToolTipWidget();
	void BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BP_SquadUpdate(bool IsInSquad);
	void ExecuteUbergraph_WBP_SquadOverview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
