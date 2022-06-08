// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControllerWeaponInspectionComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.Get Context String
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UControllerWeaponInspectionComponent_BP_C::Get_Context_String(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.Get Context String"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 ReturnValue;
	} params = {};

	params.FunctionName = FunctionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.Handle Set Inspected Inventory Item
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControllerWeaponInspectionComponent_BP_C::Handle_Set_Inspected_Inventory_Item()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.Handle Set Inspected Inventory Item"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.RequestScene
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControllerWeaponInspectionComponent_BP_C::RequestScene()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.RequestScene"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.SetInspectedInventoryItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            inventoryId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControllerWeaponInspectionComponent_BP_C::SetInspectedInventoryItem(const struct FYInventoryItem& inventoryItem, int inventoryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.SetInspectedInventoryItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		int                            inventoryId;
	} params = {};

	params.inventoryItem = inventoryItem;
	params.inventoryId = inventoryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.ExecuteUbergraph_ControllerWeaponInspectionComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControllerWeaponInspectionComponent_BP_C::ExecuteUbergraph_ControllerWeaponInspectionComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C.ExecuteUbergraph_ControllerWeaponInspectionComponent_BP"));

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
