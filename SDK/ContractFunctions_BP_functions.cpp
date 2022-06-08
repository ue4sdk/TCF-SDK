// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ContractFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineOwnNumItemDescription
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     itemRowHandle                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 WorldContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UContractFunctions_BP_C::DetermineOwnNumItemDescription(const struct FDataTableRowHandle& itemRowHandle, class UObject* WorldContext, class UObject* __WorldContext, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineOwnNumItemDescription"));

	struct
	{
		struct FDataTableRowHandle     itemRowHandle;
		class UObject*                 WorldContext;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params = {};

	params.itemRowHandle = itemRowHandle;
	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractShortDescriptionFromRow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractRow           ContractRow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 WorldContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ShortDescription               (CPF_Parm, CPF_OutParm)

void UContractFunctions_BP_C::DetermineContractShortDescriptionFromRow(class UObject* WorldContext, class UObject* __WorldContext, struct FYContractRow* ContractRow, struct FText* ShortDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractShortDescriptionFromRow"));

	struct
	{
		struct FYContractRow           ContractRow;
		class UObject*                 WorldContext;
		class UObject*                 __WorldContext;
		struct FText                   ShortDescription;
	} params = {};

	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ContractRow != nullptr)
		*ContractRow = params.ContractRow;
	if (ShortDescription != nullptr)
		*ShortDescription = params.ShortDescription;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractShortDescription
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     contractRowHandle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 WorldContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ShortDescription               (CPF_Parm, CPF_OutParm)

void UContractFunctions_BP_C::DetermineContractShortDescription(const struct FDataTableRowHandle& contractRowHandle, class UObject* WorldContext, class UObject* __WorldContext, struct FText* ShortDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractShortDescription"));

	struct
	{
		struct FDataTableRowHandle     contractRowHandle;
		class UObject*                 WorldContext;
		class UObject*                 __WorldContext;
		struct FText                   ShortDescription;
	} params = {};

	params.contractRowHandle = contractRowHandle;
	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ShortDescription != nullptr)
		*ShortDescription = params.ShortDescription;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.ToContractRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Row_Name                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     rowHandle                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UContractFunctions_BP_C::ToContractRowHandle(const struct FString& Row_Name, class UObject* __WorldContext, struct FDataTableRowHandle* rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.ToContractRowHandle"));

	struct
	{
		struct FString                 Row_Name;
		class UObject*                 __WorldContext;
		struct FDataTableRowHandle     rowHandle;
	} params = {};

	params.Row_Name = Row_Name;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (rowHandle != nullptr)
		*rowHandle = params.rowHandle;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 objectContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     contractRowHandle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UContractFunctions_BP_C::DetermineContractName(class UObject* objectContext, const struct FDataTableRowHandle& contractRowHandle, class UObject* __WorldContext, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.DetermineContractName"));

	struct
	{
		class UObject*                 objectContext;
		struct FDataTableRowHandle     contractRowHandle;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params = {};

	params.objectContext = objectContext;
	params.contractRowHandle = contractRowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.TryActivateContractDebug
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 playerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     contract                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContractFunctions_BP_C::TryActivateContractDebug(class UObject* playerContext, const struct FDataTableRowHandle& contract, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.TryActivateContractDebug"));

	struct
	{
		class UObject*                 playerContext;
		struct FDataTableRowHandle     contract;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.playerContext = playerContext;
	params.contract = contract;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.GetContractRow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYContractRow           Out_Row                        (CPF_Parm, CPF_OutParm)

void UContractFunctions_BP_C::GetContractRow(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext, struct FYContractRow* Out_Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.GetContractRow"));

	struct
	{
		struct FDataTableRowHandle     DataTableRowHandle;
		class UObject*                 __WorldContext;
		struct FYContractRow           Out_Row;
	} params = {};

	params.DataTableRowHandle = DataTableRowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function ContractFunctions_BP.ContractFunctions_BP_C.GetFactionRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYFaction                      Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FDataTableRowHandle UContractFunctions_BP_C::GetFactionRowHandle(EYFaction Index, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ContractFunctions_BP.ContractFunctions_BP_C.GetFactionRowHandle"));

	struct
	{
		EYFaction                      Index;
		class UObject*                 __WorldContext;
		struct FDataTableRowHandle     ReturnValue;
	} params = {};

	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
