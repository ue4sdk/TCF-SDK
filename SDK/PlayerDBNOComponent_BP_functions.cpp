// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerDBNOComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.GetDeathEmoteRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYDeathEmoteDataTableRow deathEmoteRow                  (CPF_Parm, CPF_OutParm)

void UPlayerDBNOComponent_BP_C::GetDeathEmoteRow(struct FYDeathEmoteDataTableRow* deathEmoteRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.GetDeathEmoteRow"));

	struct
	{
		struct FYDeathEmoteDataTableRow deathEmoteRow;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (deathEmoteRow != nullptr)
		*deathEmoteRow = params.deathEmoteRow;
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.CreateMids
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MeshComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::CreateMids(class UPrimitiveComponent* MeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.CreateMids"));

	struct
	{
		class UPrimitiveComponent*     MeshComponent;
	} params = {};

	params.MeshComponent = MeshComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_CBD006CF4860C797A8D149B6BA851463
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnLoaded_CBD006CF4860C797A8D149B6BA851463(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_CBD006CF4860C797A8D149B6BA851463"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_233255E8404EEFDC580D49BE592B34D1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnLoaded_233255E8404EEFDC580D49BE592B34D1(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_233255E8404EEFDC580D49BE592B34D1"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Deactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerDBNOComponent_BP_C::DBNO_Deactivate(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Deactivate"));

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


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Activate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::DBNO_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Activate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.PlayExecutedFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::PlayExecutedFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.PlayExecutedFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnRevived_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnRevived_Event(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnRevived_Event"));

	struct
	{
		class AController*             Controller;
	} params = {};

	params.Controller = Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.InitializeMidsIfNeeded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::InitializeMidsIfNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.InitializeMidsIfNeeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.setFoamAnimationSlider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::setFoamAnimationSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.setFoamAnimationSlider"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnTeleportedDBNO_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 OldLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NewLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  relevantActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnTeleportedDBNO_Event(const struct FVector& OldLocation, const struct FVector& NewLocation, class AActor* relevantActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnTeleportedDBNO_Event"));

	struct
	{
		struct FVector                 OldLocation;
		struct FVector                 NewLocation;
		class AActor*                  relevantActor;
	} params = {};

	params.OldLocation = OldLocation;
	params.NewLocation = NewLocation;
	params.relevantActor = relevantActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ExecuteUbergraph_PlayerDBNOComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::ExecuteUbergraph_PlayerDBNOComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ExecuteUbergraph_PlayerDBNOComponent_BP"));

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
