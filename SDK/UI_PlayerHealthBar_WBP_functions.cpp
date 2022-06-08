// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UI_PlayerHealthBar_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateShowDeltaHealthDueNewDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeLeftUntilProgressDeltaStarts_REEFERENCE (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar_Delta              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DelayDeltaProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_PlayerHealthBar_WBP_C::UpdateShowDeltaHealthDueNewDamage(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float DelayDeltaProgress, float* TimeLeftUntilProgressDeltaStarts_REEFERENCE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateShowDeltaHealthDueNewDamage"));

	struct
	{
		float                          TimeLeftUntilProgressDeltaStarts_REEFERENCE;
		class UProgressBar*            ProgressBar_Delta;
		class UProgressBar*            ProgressBar;
		float                          DelayDeltaProgress;
	} params = {};

	params.ProgressBar_Delta = ProgressBar_Delta;
	params.ProgressBar = ProgressBar;
	params.DelayDeltaProgress = DelayDeltaProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeLeftUntilProgressDeltaStarts_REEFERENCE != nullptr)
		*TimeLeftUntilProgressDeltaStarts_REEFERENCE = params.TimeLeftUntilProgressDeltaStarts_REEFERENCE;
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateDeltaProgress
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar_Delta              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeLeftUntilProgressDeltaStarts_REFERENCE (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AdjustmentSpeed                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_PlayerHealthBar_WBP_C::UpdateDeltaProgress(float DeltaTime, class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float AdjustmentSpeed, float* TimeLeftUntilProgressDeltaStarts_REFERENCE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.UpdateDeltaProgress"));

	struct
	{
		float                          DeltaTime;
		class UProgressBar*            ProgressBar_Delta;
		class UProgressBar*            ProgressBar;
		float                          TimeLeftUntilProgressDeltaStarts_REFERENCE;
		float                          AdjustmentSpeed;
	} params = {};

	params.DeltaTime = DeltaTime;
	params.ProgressBar_Delta = ProgressBar_Delta;
	params.ProgressBar = ProgressBar;
	params.AdjustmentSpeed = AdjustmentSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeLeftUntilProgressDeltaStarts_REFERENCE != nullptr)
		*TimeLeftUntilProgressDeltaStarts_REFERENCE = params.TimeLeftUntilProgressDeltaStarts_REFERENCE;
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.InitializePlayerHealthBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_PlayerHealthBar_WBP_C::InitializePlayerHealthBar(class AYPlayerCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.InitializePlayerHealthBar"));

	struct
	{
		class AYPlayerCharacter*       Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.StartDBNO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_PlayerHealthBar_WBP_C::StartDBNO()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.StartDBNO"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.EndDBNO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_PlayerHealthBar_WBP_C::EndDBNO(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.EndDBNO"));

	struct
	{
		bool                           interupted;
	} params = {};

	params.interupted = interupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.CurrentDBNOShieldHealthChangedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_PlayerHealthBar_WBP_C::CurrentDBNOShieldHealthChangedDelegate(float CurrentHealth, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.CurrentDBNOShieldHealthChangedDelegate"));

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params = {};

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_PlayerHealthBar_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_PlayerHealthBar_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.ExecuteUbergraph_UI_PlayerHealthBar_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_PlayerHealthBar_WBP_C::ExecuteUbergraph_UI_PlayerHealthBar_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C.ExecuteUbergraph_UI_PlayerHealthBar_WBP"));

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
