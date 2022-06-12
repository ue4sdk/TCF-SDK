// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_Flora_IvyPlant_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.GetActorClassToSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityLocation*      Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AActor*/       ActivityActorClass             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAAM_Flora_IvyPlant_BP_C::GetActorClassToSpawn(class AYActivityLocation* Location, class UClass* /*AActor*/* ActivityActorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.GetActorClassToSpawn"));

	struct
	{
		class AYActivityLocation*      Location;
		class UClass* /*AActor*/       ActivityActorClass;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActivityActorClass != nullptr)
		*ActivityActorClass = params.ActivityActorClass;
}


// Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_Flora_IvyPlant_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.ExecuteUbergraph_AAM_Flora_IvyPlant_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Flora_IvyPlant_BP_C::ExecuteUbergraph_AAM_Flora_IvyPlant_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Flora_IvyPlant_BP.AAM_Flora_IvyPlant_BP_C.ExecuteUbergraph_AAM_Flora_IvyPlant_BP"));

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
