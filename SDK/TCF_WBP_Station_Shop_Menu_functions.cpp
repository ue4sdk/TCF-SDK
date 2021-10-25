// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Shop_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.CollapseAllShops
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Shop_Menu_C::CollapseAllShops()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.CollapseAllShops"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.GetAllShopContainers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_Shop_Container_C*> ShopContainers                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UWBP_Station_Shop_Menu_C::GetAllShopContainers(TArray<class UWBP_Shop_Container_C*>* ShopContainers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.GetAllShopContainers"));

	struct
	{
		TArray<class UWBP_Shop_Container_C*> ShopContainers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShopContainers != nullptr)
		*ShopContainers = params.ShopContainers;
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_Shop_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Shop_Menu_C::BndEvt__LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Shop_Menu_C::BndEvt__LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutC_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Shop_Menu_C::BndEvt__LayoutC_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.BndEvt__LayoutC_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.ExecuteUbergraph_WBP_Station_Shop_Menu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Shop_Menu_C::ExecuteUbergraph_WBP_Station_Shop_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Shop_Menu.WBP_Station_Shop_Menu_C.ExecuteUbergraph_WBP_Station_Shop_Menu"));

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
