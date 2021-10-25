// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ReportAISenseFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportAISenseFunctions.ReportAISenseFunctions_C.ReportAISense
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     SenseTrigegrRowHandle          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class AActor*                  ActorTriggering                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          LoudnessMultiplier             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportAISenseFunctions_C::ReportAISense(const struct FDataTableRowHandle& SenseTrigegrRowHandle, class AActor* ActorTriggering, float LoudnessMultiplier, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportAISenseFunctions.ReportAISenseFunctions_C.ReportAISense");

	struct
	{
		struct FDataTableRowHandle     SenseTrigegrRowHandle;
		class AActor*                  ActorTriggering;
		float                          LoudnessMultiplier;
		class UObject*                 __WorldContext;
	} params;

	params.SenseTrigegrRowHandle = SenseTrigegrRowHandle;
	params.ActorTriggering = ActorTriggering;
	params.LoudnessMultiplier = LoudnessMultiplier;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
