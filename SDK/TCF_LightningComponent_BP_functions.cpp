// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LightningComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningComponent_BP.LightningComponent_BP_C.RefreshSpawners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::RefreshSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.RefreshSpawners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.TriggerLightning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLightningTuningDataInfo InLightningTuningData          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     LIghtningTuningRowHandle       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningComponent_BP_C::TriggerLightning(const struct FLightningTuningDataInfo& InLightningTuningData, const struct FDataTableRowHandle& LIghtningTuningRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.TriggerLightning");

	struct
	{
		struct FLightningTuningDataInfo InLightningTuningData;
		struct FDataTableRowHandle     LIghtningTuningRowHandle;
	} params;

	params.InLightningTuningData = InLightningTuningData;
	params.LIghtningTuningRowHandle = LIghtningTuningRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnLoaded_F74E9C45453486E2E848238F70929881
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::OnLoaded_F74E9C45453486E2E848238F70929881(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.OnLoaded_F74E9C45453486E2E848238F70929881");

	struct
	{
		class UClass*                  Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnMatchPhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningComponent_BP_C::OnMatchPhaseChanged(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.OnMatchPhaseChanged");

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnLightningDebugChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::OnLightningDebugChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.OnLightningDebugChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningComponent_BP.LightningComponent_BP_C.ExecuteUbergraph_LightningComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::ExecuteUbergraph_LightningComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningComponent_BP.LightningComponent_BP_C.ExecuteUbergraph_LightningComponent_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
