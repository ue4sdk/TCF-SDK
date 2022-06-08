// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YNpcVoiceOverComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnItemPurchased
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYNpcVoiceOverComponent_BP_C::OnItemPurchased(EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnItemPurchased"));

	struct
	{
		EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus;
	} params = {};

	params.purchaseWeaponShopItemStatus = purchaseWeaponShopItemStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.UnbindOnFactionLevelUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYNpcVoiceOverComponent_BP_C::UnbindOnFactionLevelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.UnbindOnFactionLevelUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.FactionLevelUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerFactionLevelUpData playerFactionLevelUpData       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYNpcVoiceOverComponent_BP_C::FactionLevelUp(const struct FYPlayerFactionLevelUpData& playerFactionLevelUpData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.FactionLevelUp"));

	struct
	{
		struct FYPlayerFactionLevelUpData playerFactionLevelUpData;
	} params = {};

	params.playerFactionLevelUpData = playerFactionLevelUpData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ShouldBlockVoForOnboarding
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYNpcVoiceOverComponent_BP_C::ShouldBlockVoForOnboarding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ShouldBlockVoForOnboarding"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.UnbindOnContractStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYNpcVoiceOverComponent_BP_C::UnbindOnContractStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.UnbindOnContractStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.BindOnContractStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYNpcVoiceOverComponent_BP_C::BindOnContractStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.BindOnContractStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.Get VOBy Contract Data
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  ContractData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           FoundVO                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     voRowHandle                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UYNpcVoiceOverComponent_BP_C::Get_VOBy_Contract_Data(const struct FYActiveContractUIData& ContractData, bool* FoundVO, struct FDataTableRowHandle* voRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.Get VOBy Contract Data"));

	struct
	{
		struct FYActiveContractUIData  ContractData;
		bool                           FoundVO;
		struct FDataTableRowHandle     voRowHandle;
	} params = {};

	params.ContractData = ContractData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundVO != nullptr)
		*FoundVO = params.FoundVO;
	if (voRowHandle != nullptr)
		*voRowHandle = params.voRowHandle;
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ContractStatusChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYNpcVoiceOverComponent_BP_C::ContractStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ContractStatusChanged"));

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params = {};

	params.activeContractsUIData = activeContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnInteractionEnded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UYNpcVoiceOverComponent_BP_C::OnInteractionEnded(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnInteractionEnded"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnInteractionStarted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYNpcVoiceOverComponent_BP_C::OnInteractionStarted(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.OnInteractionStarted"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYNpcVoiceOverComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYNpcVoiceOverComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.BP_BindOnEvents
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYNpcVoiceOverComponent_BP_C::BP_BindOnEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.BP_BindOnEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.InitializationComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYNpcVoiceOverComponent_BP_C::InitializationComplete(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.InitializationComplete"));

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


// Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ExecuteUbergraph_YNpcVoiceOverComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYNpcVoiceOverComponent_BP_C::ExecuteUbergraph_YNpcVoiceOverComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C.ExecuteUbergraph_YNpcVoiceOverComponent_BP"));

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
