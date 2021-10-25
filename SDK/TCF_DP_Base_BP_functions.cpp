// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DP_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DP_Base_BP.DP_Base_BP_C.SetUseCustomFOV
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADP_Base_BP_C::SetUseCustomFOV(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.SetUseCustomFOV");

	struct
	{
		bool                           newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__retroThrusters__EventFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__retroThrusters__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__retroThrusters__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerInitialSupportingEffects__EventFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__TriggerInitialSupportingEffects__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerInitialSupportingEffects__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerLandingEffects__EventFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__TriggerLandingEffects__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__TriggerLandingEffects__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_0__ground dust__EventFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_0__ground_dust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_0__ground dust__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_1__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void ADP_Base_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.Timeline_1__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_78EA5A814B497F0C2C80439B93BD053F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnInterrupted_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_78EA5A814B497F0C2C80439B93BD053F");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_78EA5A814B497F0C2C80439B93BD053F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnBlendOut_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_78EA5A814B497F0C2C80439B93BD053F");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnCompleted_78EA5A814B497F0C2C80439B93BD053F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnCompleted_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnCompleted_78EA5A814B497F0C2C80439B93BD053F");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_E3E1655941965588221796876DC7ADDF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyEnd_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_E3E1655941965588221796876DC7ADDF");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_E3E1655941965588221796876DC7ADDF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyBegin_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_E3E1655941965588221796876DC7ADDF");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_E3E1655941965588221796876DC7ADDF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnInterrupted_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_E3E1655941965588221796876DC7ADDF");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_E3E1655941965588221796876DC7ADDF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnBlendOut_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_E3E1655941965588221796876DC7ADDF");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnCompleted_E3E1655941965588221796876DC7ADDF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnCompleted_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnCompleted_E3E1655941965588221796876DC7ADDF");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnCompleted_C858DD4F4BA062AE666252A04AB0EA85
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnCompleted_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnCompleted_C858DD4F4BA062AE666252A04AB0EA85");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_4743CB0A4F7EF368E043898E87CC5139
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnInterrupted_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnInterrupted_4743CB0A4F7EF368E043898E87CC5139");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_4743CB0A4F7EF368E043898E87CC5139
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnBlendOut_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnBlendOut_4743CB0A4F7EF368E043898E87CC5139");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OnCompleted_4743CB0A4F7EF368E043898E87CC5139
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::OnCompleted_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OnCompleted_4743CB0A4F7EF368E043898E87CC5139");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.OpenPodDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADP_Base_BP_C::OpenPodDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.OpenPodDoor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.StartMovement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADP_Base_BP_C::StartMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.StartMovement");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.BP_SpawnContextAssigned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYPodSpawningTypeContext       spawnContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::BP_SpawnContextAssigned(EYPodSpawningTypeContext spawnContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.BP_SpawnContextAssigned");

	struct
	{
		EYPodSpawningTypeContext       spawnContext;
	} params;

	params.spawnContext = spawnContext;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ADP_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.DebugLights
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADP_Base_BP_C::DebugLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.DebugLights");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.BP_SetContextPlayerActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  playerActorContext             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::BP_SetContextPlayerActor(class AActor* playerActorContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.BP_SetContextPlayerActor");

	struct
	{
		class AActor*                  playerActorContext;
	} params;

	params.playerActorContext = playerActorContext;

	UObject::ProcessEvent(fn, &params);
}


// Function DP_Base_BP.DP_Base_BP_C.ExecuteUbergraph_DP_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADP_Base_BP_C::ExecuteUbergraph_DP_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DP_Base_BP.DP_Base_BP_C.ExecuteUbergraph_DP_Base_BP");

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
