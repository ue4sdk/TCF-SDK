// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharExplosionComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.Trigger Explosion Impact
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::Trigger_Explosion_Impact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.Trigger Explosion Impact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.BP_OnDeath_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharExplosionComponent_BP_C::BP_OnDeath_Event_1(class UYCharacterDeathComponent* deathComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.BP_OnDeath_Event_1"));

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params = {};

	params.deathComponent = deathComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.TrySpawnDecal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::TrySpawnDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.TrySpawnDecal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_OnPreExplode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::FromAnimNotifier_OnPreExplode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_OnPreExplode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToTakeDamageEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::AssignToTakeDamageEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToTakeDamageEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnPreTakeDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UAICharExplosionComponent_BP_C::OnPreTakeDamage(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnPreTakeDamage"));

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


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToOnDeathEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::AssignToOnDeathEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.AssignToOnDeathEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_TriggerExplosion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::FromAnimNotifier_TriggerExplosion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.FromAnimNotifier_TriggerExplosion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ExecuteUbergraph_AICharExplosionComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharExplosionComponent_BP_C::ExecuteUbergraph_AICharExplosionComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.ExecuteUbergraph_AICharExplosionComponent_BP"));

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


// Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnAboutToExplode__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharExplosionComponent_BP_C::OnAboutToExplode__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharExplosionComponent_BP.AICharExplosionComponent_BP_C.OnAboutToExplode__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
