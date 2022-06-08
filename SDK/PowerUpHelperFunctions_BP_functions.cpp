// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PowerUpHelperFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.PowerupRelevantUpdate
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRelevant                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<class UActorComponent*> SM_Components                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpHelperFunctions_BP_C::PowerupRelevantUpdate(bool IsRelevant, class UObject* __WorldContext, TArray<class UActorComponent*>* SM_Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.PowerupRelevantUpdate"));

	struct
	{
		bool                           IsRelevant;
		TArray<class UActorComponent*> SM_Components;
		class UObject*                 __WorldContext;
	} params = {};

	params.IsRelevant = IsRelevant;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SM_Components != nullptr)
		*SM_Components = params.SM_Components;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.FindConfigurator
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PowerUpActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAA_Powerup_Configurator_BP_C* ConfiguratorActor              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 errorMessage                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPowerUpHelperFunctions_BP_C::FindConfigurator(class AActor* PowerUpActor, class UObject* __WorldContext, class AAA_Powerup_Configurator_BP_C** ConfiguratorActor, bool* success, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.FindConfigurator"));

	struct
	{
		class AActor*                  PowerUpActor;
		class UObject*                 __WorldContext;
		class AAA_Powerup_Configurator_BP_C* ConfiguratorActor;
		bool                           success;
		struct FString                 errorMessage;
	} params = {};

	params.PowerUpActor = PowerUpActor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ConfiguratorActor != nullptr)
		*ConfiguratorActor = params.ConfiguratorActor;
	if (success != nullptr)
		*success = params.success;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.HasRecentlyAttackedHostilePlayer
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          timeLimit                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPowerUpHelperFunctions_BP_C::HasRecentlyAttackedHostilePlayer(class APlayerController* Player, float timeLimit, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.HasRecentlyAttackedHostilePlayer"));

	struct
	{
		class APlayerController*       Player;
		float                          timeLimit;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.Player = Player;
	params.timeLimit = timeLimit;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.GetPowerUpActivity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAAM_PowerUp_BP_C*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AAAM_PowerUp_BP_C* UPowerUpHelperFunctions_BP_C::GetPowerUpActivity(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.GetPowerUpActivity"));

	struct
	{
		class UObject*                 __WorldContext;
		class AAAM_PowerUp_BP_C*       ReturnValue;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.DeterminePowerUpID
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PowerUpActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 PowerUpID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPowerUpHelperFunctions_BP_C::DeterminePowerUpID(class AActor* PowerUpActor, class UObject* __WorldContext, struct FString* PowerUpID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.DeterminePowerUpID"));

	struct
	{
		class AActor*                  PowerUpActor;
		class UObject*                 __WorldContext;
		struct FString                 PowerUpID;
	} params = {};

	params.PowerUpActor = PowerUpActor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (PowerUpID != nullptr)
		*PowerUpID = params.PowerUpID;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.HasBeenRecentlyAttackedByHostilePlayer
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          timeLimit                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPowerUpHelperFunctions_BP_C::HasBeenRecentlyAttackedByHostilePlayer(class APlayerController* Player, float timeLimit, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.HasBeenRecentlyAttackedByHostilePlayer"));

	struct
	{
		class APlayerController*       Player;
		float                          timeLimit;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.Player = Player;
	params.timeLimit = timeLimit;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.SendPowerUpBiData
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PowerUpActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EYBIHookPowerUpStep> PowerUpStep                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpHelperFunctions_BP_C::SendPowerUpBiData(class AActor* PowerUpActor, class APlayerController* PlayerController, TEnumAsByte<EYBIHookPowerUpStep> PowerUpStep, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.SendPowerUpBiData"));

	struct
	{
		class AActor*                  PowerUpActor;
		class APlayerController*       PlayerController;
		TEnumAsByte<EYBIHookPowerUpStep> PowerUpStep;
		class UObject*                 __WorldContext;
	} params = {};

	params.PowerUpActor = PowerUpActor;
	params.PlayerController = PlayerController;
	params.PowerUpStep = PowerUpStep;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.PropagatePowerStatus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  powerProvider                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpHelperFunctions_BP_C::PropagatePowerStatus(bool IsPowered, class AActor* powerProvider, class UObject* __WorldContext, TArray<class AActor*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C.PropagatePowerStatus"));

	struct
	{
		TArray<class AActor*>          Array;
		bool                           IsPowered;
		class AActor*                  powerProvider;
		class UObject*                 __WorldContext;
	} params = {};

	params.IsPowered = IsPowered;
	params.powerProvider = powerProvider;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
