// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_EvacFailed_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_EvacFailed_Menu_C::SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_1(class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_1"));

	struct
	{
		class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast;
	} params;

	params.WBP_EndOfMatch_Toast = WBP_EndOfMatch_Toast;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.CreateDamgeSourceWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_DamageCauser_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_EndOfMatch_DamageCauser_C* UWBP_EndOfMatch_EvacFailed_Menu_C::CreateDamgeSourceWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.CreateDamgeSourceWidget"));

	struct
	{
		class UWBP_EndOfMatch_DamageCauser_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.TryGetInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::TryGetInventory()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.TryGetInventory"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnStageUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_EvacFailed_Menu_C::OnStageUpdated(int stage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnStageUpdated"));

	struct
	{
		int                            stage;
	} params;

	params.stage = stage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.GetDamageRecapComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYDamageRecapComponent*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYDamageRecapComponent* UWBP_EndOfMatch_EvacFailed_Menu_C::GetDamageRecapComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.GetDamageRecapComponent"));

	struct
	{
		class UYDamageRecapComponent*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_EndOfMatch_EvacFailed_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.WBP_EndOfMatch_Toast_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_EvacFailed_Menu_C::WBP_EndOfMatch_Toast_Event_1(class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.WBP_EndOfMatch_Toast_Event_1"));

	struct
	{
		class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast;
	} params;

	params.WBP_EndOfMatch_Toast = WBP_EndOfMatch_Toast;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.TextAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::TextAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.TextAnimationFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.PlayFailAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::PlayFailAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.PlayFailAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.PlayScreenOutAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::PlayScreenOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.PlayScreenOutAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.RefreshData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.RefreshData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BP_OnCondensedDamageInfoReceived_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCondensedDamageData> Events                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_EndOfMatch_EvacFailed_Menu_C::BP_OnCondensedDamageInfoReceived_Event_1(TArray<struct FYCondensedDamageData> Events)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BP_OnCondensedDamageInfoReceived_Event_1"));

	struct
	{
		TArray<struct FYCondensedDamageData> Events;
	} params;

	params.Events = Events;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.InitializeDamageRecap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::InitializeDamageRecap()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.InitializeDamageRecap"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BndEvt__WBP_Inventory_Loadout_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_EvacFailed_Menu_C::BndEvt__WBP_Inventory_Loadout_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.BndEvt__WBP_Inventory_Loadout_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnScreenOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::OnScreenOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnScreenOut"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnHeadlineScreenOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::OnHeadlineScreenOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.OnHeadlineScreenOut"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_EvacFailed_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_EvacFailed_Menu_C::ExecuteUbergraph_WBP_EndOfMatch_EvacFailed_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_EvacFailed_Menu"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.ExitScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_EvacFailed_Menu_C::ExitScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C.ExitScreen__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
