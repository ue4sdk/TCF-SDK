// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_EndOfMatchFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C.HasPlayerDied
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  actorContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

bool UEndOfMatchFunctions_BP_C::HasPlayerDied(class AActor* actorContext, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C.HasPlayerDied");

	struct
	{
		class AActor*                  actorContext;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params;

	params.actorContext = actorContext;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C.TravelBackToStation
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 playerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEndOfMatchFunctions_BP_C::TravelBackToStation(class UObject* playerContext, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C.TravelBackToStation");

	struct
	{
		class UObject*                 playerContext;
		class UObject*                 __WorldContext;
	} params;

	params.playerContext = playerContext;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
