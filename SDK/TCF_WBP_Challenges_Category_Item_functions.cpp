// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Challenges_Category_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenges_Category_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenges_Category_Item_C::BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenges_Category_Item_C::BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenges_Category_Item_C::BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.BndEvt__WBP_Challenges_Category_Item_WBP_Dummy_Btn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.ExecuteUbergraph_WBP_Challenges_Category_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenges_Category_Item_C::ExecuteUbergraph_WBP_Challenges_Category_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenges_Category_Item.WBP_Challenges_Category_Item_C.ExecuteUbergraph_WBP_Challenges_Category_Item"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
