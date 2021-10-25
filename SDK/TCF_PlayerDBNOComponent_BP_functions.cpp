// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerDBNOComponent_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.GetDeathEmoteRow");

	struct
	{
		struct FYDeathEmoteDataTableRow deathEmoteRow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (deathEmoteRow != nullptr)
		*deathEmoteRow = params.deathEmoteRow;
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.CreateMids
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MeshComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::CreateMids(class UPrimitiveComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.CreateMids");

	struct
	{
		class UPrimitiveComponent*     MeshComponent;
	} params;

	params.MeshComponent = MeshComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_CBD006CF4860C797A8D149B6BA851463
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnLoaded_CBD006CF4860C797A8D149B6BA851463(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_CBD006CF4860C797A8D149B6BA851463");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_233255E8404EEFDC580D49BE592B34D1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnLoaded_233255E8404EEFDC580D49BE592B34D1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnLoaded_233255E8404EEFDC580D49BE592B34D1");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Deactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerDBNOComponent_BP_C::DBNO_Deactivate(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Deactivate");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Activate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::DBNO_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.DBNO_Activate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.PlayExecutedFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::PlayExecutedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.PlayExecutedFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnRevived_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnRevived_Event(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnRevived_Event");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.InitializeMidsIfNeeded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::InitializeMidsIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.InitializeMidsIfNeeded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.setFoamAnimationSlider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerDBNOComponent_BP_C::setFoamAnimationSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.setFoamAnimationSlider");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnTeleportedDBNO_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 OldLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NewLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  relevantActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::OnTeleportedDBNO_Event(const struct FVector& OldLocation, const struct FVector& NewLocation, class AActor* relevantActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.OnTeleportedDBNO_Event");

	struct
	{
		struct FVector                 OldLocation;
		struct FVector                 NewLocation;
		class AActor*                  relevantActor;
	} params;

	params.OldLocation = OldLocation;
	params.NewLocation = NewLocation;
	params.relevantActor = relevantActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ExecuteUbergraph_PlayerDBNOComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerDBNOComponent_BP_C::ExecuteUbergraph_PlayerDBNOComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C.ExecuteUbergraph_PlayerDBNOComponent_BP");

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
