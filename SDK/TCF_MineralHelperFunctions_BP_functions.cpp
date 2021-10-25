// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MineralHelperFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MineralHelperFunctions_BP.MineralHelperFunctions_BP_C.TryGetMineralVariationRow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MineralRowHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMineralDefinitionRow  MineralRow                     (CPF_Parm, CPF_OutParm)
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMineralHelperFunctions_BP_C::TryGetMineralVariationRow(const struct FDataTableRowHandle& MineralRowHandle, class UObject* __WorldContext, struct FYMineralDefinitionRow* MineralRow, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MineralHelperFunctions_BP.MineralHelperFunctions_BP_C.TryGetMineralVariationRow"));

	struct
	{
		struct FDataTableRowHandle     MineralRowHandle;
		class UObject*                 __WorldContext;
		struct FYMineralDefinitionRow  MineralRow;
		bool                           Valid;
	} params;

	params.MineralRowHandle = MineralRowHandle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MineralRow != nullptr)
		*MineralRow = params.MineralRow;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
