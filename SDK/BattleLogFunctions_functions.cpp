// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BattleLogFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleLogFunctions.BattleLogFunctions_C.DetermineEncounterText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerEncounter       PlayerEncounter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Title                          (CPF_Parm, CPF_OutParm)

void UBattleLogFunctions_C::DetermineEncounterText(class UObject* __WorldContext, struct FYPlayerEncounter* PlayerEncounter, struct FText* Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BattleLogFunctions.BattleLogFunctions_C.DetermineEncounterText"));

	struct
	{
		struct FYPlayerEncounter       PlayerEncounter;
		class UObject*                 __WorldContext;
		struct FText                   Title;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PlayerEncounter != nullptr)
		*PlayerEncounter = params.PlayerEncounter;
	if (Title != nullptr)
		*Title = params.Title;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
