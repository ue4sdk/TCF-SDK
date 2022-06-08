// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Item_Preview_Fortuna_Pass_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.InitTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Preview_Fortuna_Pass_Btn_C::InitTooltip(const struct FText& Name, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.InitTooltip"));

	struct
	{
		struct FText                   Name;
		struct FText                   Description;
	} params = {};

	params.Name = Name;
	params.Description = Description;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.SetImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Fortuna_Pass_Btn_C::SetImage(TSoftObjectPtr<class UTexture2D> Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.SetImage"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> Image;
	} params = {};

	params.Image = Image;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Fortuna_Pass_Btn_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Fortuna_Pass_Btn_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Fortuna_Pass_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Fortuna_Pass_Btn_C::ExecuteUbergraph_WBP_Item_Preview_Fortuna_Pass_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Preview_Fortuna_Pass_Btn.WBP_Item_Preview_Fortuna_Pass_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Fortuna_Pass_Btn"));

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
