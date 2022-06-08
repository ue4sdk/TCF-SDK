// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Shop_Tag_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetAlignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Shop_Tag_Item_C::SetAlignment(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetAlignment"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Shop_Tag_Item_C::SetText(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetText"));

	struct
	{
		struct FText                   Text;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetShowTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Shop_Tag_Item_C::SetShowTimer(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetShowTimer"));

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


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDateTime               timeUtc                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Shop_Tag_Item_C::SetTimer(const struct FDateTime& timeUtc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.SetTimer"));

	struct
	{
		struct FDateTime               timeUtc;
	} params = {};

	params.timeUtc = timeUtc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Shop_Tag_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Shop_Tag_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.PreConstruct"));

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


// Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.ExecuteUbergraph_WBP_Shop_Tag_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Shop_Tag_Item_C::ExecuteUbergraph_WBP_Shop_Tag_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Tag_Item.WBP_Shop_Tag_Item_C.ExecuteUbergraph_WBP_Shop_Tag_Item"));

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
