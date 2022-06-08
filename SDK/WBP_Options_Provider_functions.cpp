// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Options_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Options_Provider.WBP_Options_Provider_C.IsCommandAvailableByName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isAvailable                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Options_Provider_C::IsCommandAvailableByName(const struct FName& Name, class AYPlayerController* PlayerController, bool* isAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Options_Provider.WBP_Options_Provider_C.IsCommandAvailableByName"));

	struct
	{
		struct FName                   Name;
		class AYPlayerController*      PlayerController;
		bool                           isAvailable;
	} params = {};

	params.Name = Name;
	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isAvailable != nullptr)
		*isAvailable = params.isAvailable;
}


// Function WBP_Options_Provider.WBP_Options_Provider_C.BP_OnButtonAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Provider_C::BP_OnButtonAction(const struct FName& ActionName, class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Options_Provider.WBP_Options_Provider_C.BP_OnButtonAction"));

	struct
	{
		struct FName                   ActionName;
		class UUserWidget*             Widget;
	} params = {};

	params.ActionName = ActionName;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Options_Provider.WBP_Options_Provider_C.ExecuteUbergraph_WBP_Options_Provider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Provider_C::ExecuteUbergraph_WBP_Options_Provider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Options_Provider.WBP_Options_Provider_C.ExecuteUbergraph_WBP_Options_Provider"));

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
