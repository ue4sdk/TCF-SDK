// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ScannerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScannerInterface.WBP_ScannerInterface_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ScannerInterface_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetRefireProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScannerInterface_C::SetRefireProgress(float percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetRefireProgress"));

	struct
	{
		float                          percentage;
	} params = {};

	params.percentage = percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.InitializeDynamicMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ScannerInterface_C::InitializeDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.InitializeDynamicMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.PlayScanFeedback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isSuccess                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ScannerInterface_C::PlayScanFeedback(bool isSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.PlayScanFeedback"));

	struct
	{
		bool                           isSuccess;
	} params = {};

	params.isSuccess = isSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetToReadyState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ScannerInterface_C::SetToReadyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetToReadyState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.ShowScanLInes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ScannerInterface_C::ShowScanLInes(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.ShowScanLInes"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetScannerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EScannerInterfaceStates> IsShowingScanResults           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScannerInterface_C::SetScannerState(TEnumAsByte<EScannerInterfaceStates> IsShowingScanResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.SetScannerState"));

	struct
	{
		TEnumAsByte<EScannerInterfaceStates> IsShowingScanResults;
	} params = {};

	params.IsShowingScanResults = IsShowingScanResults;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ScannerInterface.WBP_ScannerInterface_C.ExecuteUbergraph_WBP_ScannerInterface
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScannerInterface_C::ExecuteUbergraph_WBP_ScannerInterface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ScannerInterface.WBP_ScannerInterface_C.ExecuteUbergraph_WBP_ScannerInterface"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
