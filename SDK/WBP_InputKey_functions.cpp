// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InputKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKey.WBP_InputKey_C.UpdateInput
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKey_C::UpdateInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.UpdateInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.SetInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InputKey_C::SetInput(const struct FDataTableRowHandle& rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.SetInput"));

	struct
	{
		struct FDataTableRowHandle     rowHandle;
	} params = {};

	params.rowHandle = rowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKey_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKey_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKey_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.OnKeybindingDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKey_C::OnKeybindingDataChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.OnKeybindingDataChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKey.WBP_InputKey_C.ExecuteUbergraph_WBP_InputKey
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKey_C::ExecuteUbergraph_WBP_InputKey(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKey.WBP_InputKey_C.ExecuteUbergraph_WBP_InputKey"));

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
