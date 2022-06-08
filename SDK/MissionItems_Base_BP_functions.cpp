// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MissionItems_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionItems_Base_BP.MissionItems_Base_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMissionItems_Base_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMissionItems_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.RespawnItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMissionItems_Base_BP_C::RespawnItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.RespawnItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.BP_OnCollectedByPlayer_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPickupActor*           pickUpActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isCollectedSuccessfully        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMissionItems_Base_BP_C::BP_OnCollectedByPlayer_Event_1(class AYPickupActor* pickUpActor, class AYPlayerController* PlayerController, bool isCollectedSuccessfully)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.BP_OnCollectedByPlayer_Event_1"));

	struct
	{
		class AYPickupActor*           pickUpActor;
		class AYPlayerController*      PlayerController;
		bool                           isCollectedSuccessfully;
	} params = {};

	params.pickUpActor = pickUpActor;
	params.PlayerController = PlayerController;
	params.isCollectedSuccessfully = isCollectedSuccessfully;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.TriggerRespawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMissionItems_Base_BP_C::TriggerRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.TriggerRespawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.BndEvt__MissionItems_Base_BP_SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AMissionItems_Base_BP_C::BndEvt__MissionItems_Base_BP_SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.BndEvt__MissionItems_Base_BP_SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.CreateGlowMID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMissionItems_Base_BP_C::CreateGlowMID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.CreateGlowMID"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MissionItems_Base_BP.MissionItems_Base_BP_C.ExecuteUbergraph_MissionItems_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMissionItems_Base_BP_C::ExecuteUbergraph_MissionItems_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MissionItems_Base_BP.MissionItems_Base_BP_C.ExecuteUbergraph_MissionItems_Base_BP"));

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
