// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningComponent_BP.LightningComponent_BP_C.RefreshSpawners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::RefreshSpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.RefreshSpawners"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.TriggerLightning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLightningTuningDataInfo InLightningTuningData          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     LIghtningTuningRowHandle       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningComponent_BP_C::TriggerLightning(const struct FLightningTuningDataInfo& InLightningTuningData, const struct FDataTableRowHandle& LIghtningTuningRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.TriggerLightning"));

	struct
	{
		struct FLightningTuningDataInfo InLightningTuningData;
		struct FDataTableRowHandle     LIghtningTuningRowHandle;
	} params = {};

	params.InLightningTuningData = InLightningTuningData;
	params.LIghtningTuningRowHandle = LIghtningTuningRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnLoaded_F74E9C45453486E2E848238F70929881
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::OnLoaded_F74E9C45453486E2E848238F70929881(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnLoaded_F74E9C45453486E2E848238F70929881"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnMatchPhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningComponent_BP_C::OnMatchPhaseChanged(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnMatchPhaseChanged"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnLightningDebugChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::OnLightningDebugChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnLightningDebugChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnEnterDungeon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::OnEnterDungeon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnEnterDungeon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnLeaveDungeon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningComponent_BP_C::OnLeaveDungeon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnLeaveDungeon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.ClearTimersOnManager
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULightningTypeManager_BP_C* manager                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::ClearTimersOnManager(class ULightningTypeManager_BP_C* manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.ClearTimersOnManager"));

	struct
	{
		class ULightningTypeManager_BP_C* manager;
	} params = {};

	params.manager = manager;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.OnRequestTimerClear
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULightningTypeManager_BP_C* manager                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::OnRequestTimerClear(class ULightningTypeManager_BP_C* manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.OnRequestTimerClear"));

	struct
	{
		class ULightningTypeManager_BP_C* manager;
	} params = {};

	params.manager = manager;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningComponent_BP.LightningComponent_BP_C.ExecuteUbergraph_LightningComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningComponent_BP_C::ExecuteUbergraph_LightningComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningComponent_BP.LightningComponent_BP_C.ExecuteUbergraph_LightningComponent_BP"));

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
