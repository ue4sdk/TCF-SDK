// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LootHelperFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.IsLootActorVisible
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPickupActor*           pickUpActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULootHelperFunctions_BP_C::IsLootActorVisible(class AYPickupActor* pickUpActor, class APlayerController* PlayerController, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.IsLootActorVisible"));

	struct
	{
		class AYPickupActor*           pickUpActor;
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.pickUpActor = pickUpActor;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.GetNameSafe
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ULootHelperFunctions_BP_C::GetNameSafe(class UObject* Object, class UObject* __WorldContext, struct FString* String)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.GetNameSafe"));

	struct
	{
		class UObject*                 Object;
		class UObject*                 __WorldContext;
		struct FString                 String;
	} params = {};

	params.Object = Object;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (String != nullptr)
		*String = params.String;
}


// Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.IsValidLootListEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULootHelperFunctions_BP_C::IsValidLootListEntry(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LootHelperFunctions_BP.LootHelperFunctions_BP_C.IsValidLootListEntry"));

	struct
	{
		struct FDataTableRowHandle     DataTableRowHandle;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.DataTableRowHandle = DataTableRowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
