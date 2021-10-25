// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_UplinkHardDriveScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.OnHardDriveRarityUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkHardDriveScreen_C::OnHardDriveRarityUpdate(int rarity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.OnHardDriveRarityUpdate"));

	struct
	{
		int                            rarity;
	} params;

	params.rarity = rarity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.OnUplinkStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkHardDriveScreen_C::OnUplinkStateChange(TEnumAsByte<EUplinkState_Enum> newState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.OnUplinkStateChange"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.ExecuteUbergraph_WBP_UplinkHardDriveScreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkHardDriveScreen_C::ExecuteUbergraph_WBP_UplinkHardDriveScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkHardDriveScreen.WBP_UplinkHardDriveScreen_C.ExecuteUbergraph_WBP_UplinkHardDriveScreen"));

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
