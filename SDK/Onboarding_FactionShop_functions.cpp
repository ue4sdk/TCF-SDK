// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_FactionShop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_FactionShop.Onboarding_FactionShop_C.SetSellTabHighlightActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_FactionShop_C::SetSellTabHighlightActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.SetSellTabHighlightActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.IsFactionShopNPC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AYNPCObject*             NPCObject                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_FactionShop_C::IsFactionShopNPC(class AYNPCObject* NPCObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.IsFactionShopNPC"));

	struct
	{
		class AYNPCObject*             NPCObject;
		bool                           ReturnValue;
	} params = {};

	params.NPCObject = NPCObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.HighlightClosestFactionShop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::HighlightClosestFactionShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.HighlightClosestFactionShop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.SetFactionShopHighlightingActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_FactionShop_C::SetFactionShopHighlightingActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.SetFactionShopHighlightingActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.UnbindDelegatesForHighlighting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::UnbindDelegatesForHighlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.UnbindDelegatesForHighlighting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.BindDelegatesForHighlighting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::BindDelegatesForHighlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.BindDelegatesForHighlighting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnCustomStep1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnCustomStep1(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnCustomStep1"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnCustomStep2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnCustomStep2(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnCustomStep2"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnInitialStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::OnInitialStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnInitialStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindShopOpenDelegate
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::ClientBindShopOpenDelegate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindShopOpenDelegate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnSceneRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_FactionShop_C::OnSceneRemoved(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnSceneRemoved"));

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


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnShopTabTypeOpened_TabStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYShopTabType                  ShopTabType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnShopTabTypeOpened_TabStep(EYShopTabType ShopTabType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnShopTabTypeOpened_TabStep"));

	struct
	{
		EYShopTabType                  ShopTabType;
	} params = {};

	params.ShopTabType = ShopTabType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnFactionShopOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYFaction                      Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYShopTabType                  ActiveTabType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnFactionShopOpened(EYFaction Faction, EYShopTabType ActiveTabType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnFactionShopOpened"));

	struct
	{
		EYFaction                      Faction;
		EYShopTabType                  ActiveTabType;
	} params = {};

	params.Faction = Faction;
	params.ActiveTabType = ActiveTabType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindTabTypeDelegate
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::ClientBindTabTypeDelegate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindTabTypeDelegate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindSellDelegates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::ClientBindSellDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientBindSellDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ServerTryToCompleteSellStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::ServerTryToCompleteSellStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ServerTryToCompleteSellStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.UnbindSellDelegatesAndComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::UnbindSellDelegatesAndComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.UnbindSellDelegatesAndComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnItemScrapped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnItemScrapped(const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnItemScrapped"));

	struct
	{
		struct FString                 Error;
	} params = {};

	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnLastStepComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::OnLastStepComplete(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.OnLastStepComplete"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientUnbindSellDelegates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_FactionShop_C::ClientUnbindSellDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ClientUnbindSellDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_FactionShop.Onboarding_FactionShop_C.ExecuteUbergraph_Onboarding_FactionShop
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_FactionShop_C::ExecuteUbergraph_Onboarding_FactionShop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_FactionShop.Onboarding_FactionShop_C.ExecuteUbergraph_Onboarding_FactionShop"));

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
