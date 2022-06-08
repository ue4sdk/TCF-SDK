// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Tab_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Tab_Btn.WBP_Tab_Btn_C.SequenceEvent__ENTRYPOINTWBP_Tab_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::SequenceEvent__ENTRYPOINTWBP_Tab_Btn_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.SequenceEvent__ENTRYPOINTWBP_Tab_Btn_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Set BI Settings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStucture_TabBIData     BISettingsIn                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Tab_Btn_C::Set_BI_Settings(const struct FStucture_TabBIData& BISettingsIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Set BI Settings"));

	struct
	{
		struct FStucture_TabBIData     BISettingsIn;
	} params = {};

	params.BISettingsIn = BISettingsIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Send BI
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::Send_BI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Send BI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.TryToHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::TryToHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.TryToHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.GetTabName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UWBP_Tab_Btn_C::GetTabName(struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.GetTabName"));

	struct
	{
		struct FText                   Name;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Name != nullptr)
		*Name = params.Name;
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStucture_TabData       Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Tab_Btn_C::Init(const struct FStucture_TabData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Init"));

	struct
	{
		struct FStucture_TabData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.TriggerHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::TriggerHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.TriggerHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Tab_Btn_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.PreConstruct"));

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


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnDeselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::OnDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.OnDeselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.updateData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::updateData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.updateData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Tab_Btn_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tab_Btn.WBP_Tab_Btn_C.ExecuteUbergraph_WBP_Tab_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tab_Btn_C::ExecuteUbergraph_WBP_Tab_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tab_Btn.WBP_Tab_Btn_C.ExecuteUbergraph_WBP_Tab_Btn"));

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
