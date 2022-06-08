// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_UplinkConsoleScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent__ENTRYPOINTWBP_UplinkConsoleScreen_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.UpdateStateTextByState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> UplinkState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::UpdateStateTextByState(TEnumAsByte<EUplinkState_Enum> UplinkState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.UpdateStateTextByState"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> UplinkState;
	} params = {};

	params.UplinkState = UplinkState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::SequenceEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.SequenceEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUplinkStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnUplinkStateChange(TEnumAsByte<EUplinkState_Enum> newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUplinkStateChange"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> newState;
	} params = {};

	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnProgressPercentUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnProgressPercentUpdate(float ProgressPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnProgressPercentUpdate"));

	struct
	{
		float                          ProgressPercent;
	} params = {};

	params.ProgressPercent = ProgressPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDrive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Inserted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UplinkConsoleScreen_C::OnHardDrive(bool Inserted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDrive"));

	struct
	{
		bool                           Inserted;
	} params = {};

	params.Inserted = Inserted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDriveRarityUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::OnHardDriveRarityUpdate(int rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnHardDriveRarityUpdate"));

	struct
	{
		int                            rarity;
	} params = {};

	params.rarity = rarity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnUpdateCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateInterupted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnUpdateInterupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnUpdateInterupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnDriveMaxUpgrade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnDriveMaxUpgrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnDriveMaxUpgrade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.ExecuteUbergraph_WBP_UplinkConsoleScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UplinkConsoleScreen_C::ExecuteUbergraph_WBP_UplinkConsoleScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.ExecuteUbergraph_WBP_UplinkConsoleScreen"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnStateTransition__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UplinkConsoleScreen_C::OnStateTransition__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UplinkConsoleScreen.WBP_UplinkConsoleScreen_C.OnStateTransition__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
