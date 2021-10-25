// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_UplinkConsoleScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.UpdateStateTextByState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> UplinkState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::UpdateStateTextByState(TEnumAsByte<EUplinkState_Enum> UplinkState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.UpdateStateTextByState"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> UplinkState;
	} params;

	params.UplinkState = UplinkState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUplinkStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnUplinkStateChange(TEnumAsByte<EUplinkState_Enum> newState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUplinkStateChange"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnProgressPercentUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnProgressPercentUpdate(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnProgressPercentUpdate"));

	struct
	{
		float                          ProgressPercent;
	} params;

	params.ProgressPercent = ProgressPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDrive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Inserted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UplinkConsoleScreen_C::OnHardDrive(bool Inserted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDrive"));

	struct
	{
		bool                           Inserted;
	} params;

	params.Inserted = Inserted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDriveRarityUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnHardDriveRarityUpdate(int rarity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDriveRarityUpdate"));

	struct
	{
		int                            rarity;
	} params;

	params.rarity = rarity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnUpdateCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateInterupted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnUpdateInterupted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateInterupted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnDriveMaxUpgrade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnDriveMaxUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnDriveMaxUpgrade"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.ExecuteUbergraph_WBP_UplinkConsoleScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::ExecuteUbergraph_WBP_UplinkConsoleScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.ExecuteUbergraph_WBP_UplinkConsoleScreen"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnStateTransition__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnStateTransition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnStateTransition__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
