// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MineralBIHookComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnDamageTaken
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UMineralBIHookComponent_BP_C::OnDamageTaken(const struct FYDealtDamageData& damageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnDamageTaken"));

	struct
	{
		struct FYDealtDamageData       damageData;
	} params = {};

	params.damageData = damageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMineralBIHookComponent_BP_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.TrySendBiDataAndReset
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMineralBIHookComponent_BP_C::TrySendBiDataAndReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.TrySendBiDataAndReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.InitializeForPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMineralBIHookComponent_BP_C::InitializeForPlayer(const struct FYDealtDamageData& damageData, class AYPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.InitializeForPlayer"));

	struct
	{
		struct FYDealtDamageData       damageData;
		class AYPlayerController*      PlayerController;
	} params = {};

	params.damageData = damageData;
	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnTakeDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UMineralBIHookComponent_BP_C::OnTakeDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnTakeDamage_Event_1"));

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


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnInactivityTimerElapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMineralBIHookComponent_BP_C::OnInactivityTimerElapsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnInactivityTimerElapsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnChunkDestroyed_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            chunkID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkLocation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkExtends                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMineralBIHookComponent_BP_C::OnChunkDestroyed_Event_1(int chunkID, const struct FVector& chunkLocation, const struct FVector& chunkExtends)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.OnChunkDestroyed_Event_1"));

	struct
	{
		int                            chunkID;
		struct FVector                 chunkLocation;
		struct FVector                 chunkExtends;
	} params = {};

	params.chunkID = chunkID;
	params.chunkLocation = chunkLocation;
	params.chunkExtends = chunkExtends;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.InitializeMineralBIHook
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 MineralType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UMineralBIHookComponent_BP_C::InitializeMineralBIHook(const struct FString& MineralType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.InitializeMineralBIHook"));

	struct
	{
		struct FString                 MineralType;
	} params = {};

	params.MineralType = MineralType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.NotifyActorIsDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMineralBIHookComponent_BP_C::NotifyActorIsDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.NotifyActorIsDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.ExecuteUbergraph_MineralBIHookComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMineralBIHookComponent_BP_C::ExecuteUbergraph_MineralBIHookComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MineralBIHookComponent_BP.MineralBIHookComponent_BP_C.ExecuteUbergraph_MineralBIHookComponent_BP"));

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
