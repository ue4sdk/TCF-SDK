// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YTutorialComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YTutorialComponent_BP.YTutorialComponent_BP_C.WasDamagedByEvac
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYDealtDamageData       YDealtDamageData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           Evac                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialComponent_BP_C::WasDamagedByEvac(const struct FYDealtDamageData& YDealtDamageData, bool* Evac, class AActor** DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.WasDamagedByEvac"));

	struct
	{
		struct FYDealtDamageData       YDealtDamageData;
		bool                           Evac;
		class AActor*                  DamageCauser;
	} params = {};

	params.YDealtDamageData = YDealtDamageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Evac != nullptr)
		*Evac = params.Evac;
	if (DamageCauser != nullptr)
		*DamageCauser = params.DamageCauser;
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowTutorialEvacHint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialComponent_BP_C::ShowTutorialEvacHint(const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowTutorialEvacHint"));

	struct
	{
		struct FTransform              Transform;
	} params = {};

	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnShowEndOfMatch
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BP_OnShowEndOfMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnShowEndOfMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowFTUE_GetIntoShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ShowFTUE_GetIntoShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowFTUE_GetIntoShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::SetupTutorialWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnReadyToStartTutorialIntro_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BP_OnReadyToStartTutorialIntro_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnReadyToStartTutorialIntro_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BindToIntroTutorialStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BindToIntroTutorialStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BindToIntroTutorialStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ContinueWithIntro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ContinueWithIntro()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ContinueWithIntro"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialStepComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::SetupTutorialStepComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialStepComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.HookUpPlayerPreventDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::HookUpPlayerPreventDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.HookUpPlayerPreventDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.OnFakeTutorialDeath_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialComponent_BP_C::OnFakeTutorialDeath_Event_1(class UYHealthComponent* healthComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.OnFakeTutorialDeath_Event_1"));

	struct
	{
		class UYHealthComponent*       healthComponent;
	} params = {};

	params.healthComponent = healthComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.OnInitialized
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYTutorialComponent_BP_C::OnInitialized(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.OnInitialized"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.Continue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.Continue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.HandleDamageTaken
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialComponent_BP_C::HandleDamageTaken(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.HandleDamageTaken"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.HandleEvacQueryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialComponent_BP_C::HandleEvacQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.HandleEvacQueryFinished"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params = {};

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ExecuteUbergraph_YTutorialComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialComponent_BP_C::ExecuteUbergraph_YTutorialComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ExecuteUbergraph_YTutorialComponent_BP"));

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
