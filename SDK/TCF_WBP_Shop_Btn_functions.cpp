// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Shop_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Shop_Btn.WBP_Shop_Btn_C.SequenceEvent__ENTRYPOINTWBP_Shop_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Shop_Btn_C::SequenceEvent__ENTRYPOINTWBP_Shop_Btn_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.SequenceEvent__ENTRYPOINTWBP_Shop_Btn_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.Populate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry storeItemEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Shop_Btn_C::Populate(const struct FYPlayfabStoreItemEntry& storeItemEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.Populate"));

	struct
	{
		struct FYPlayfabStoreItemEntry storeItemEntry;
	} params;

	params.storeItemEntry = storeItemEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.ShopBtn_Highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Shop_Btn_C::ShopBtn_Highlight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.ShopBtn_Highlight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Shop_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Shop_Btn_C::BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Shop_Btn_C::BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Shop_Btn_C::BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.BndEvt__WBP_Shop_Btn_m_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.ExecuteUbergraph_WBP_Shop_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Shop_Btn_C::ExecuteUbergraph_WBP_Shop_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.ExecuteUbergraph_WBP_Shop_Btn"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Btn.WBP_Shop_Btn_C.OnShopItemClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry storeItemEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Shop_Btn_C::OnShopItemClicked__DelegateSignature(const struct FYPlayfabStoreItemEntry& storeItemEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Btn.WBP_Shop_Btn_C.OnShopItemClicked__DelegateSignature"));

	struct
	{
		struct FYPlayfabStoreItemEntry storeItemEntry;
	} params;

	params.storeItemEntry = storeItemEntry;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
