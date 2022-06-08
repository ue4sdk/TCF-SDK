// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AMB_Spawn_Cues_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.AddAudioComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAMB_Spawn_Cues_Data_Struct AMB_Spawn_Cues_Data_Struct     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isStormSound                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAMB_Spawn_Cues_BP_C::AddAudioComponent(const struct FAMB_Spawn_Cues_Data_Struct& AMB_Spawn_Cues_Data_Struct, bool isStormSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.AddAudioComponent"));

	struct
	{
		struct FAMB_Spawn_Cues_Data_Struct AMB_Spawn_Cues_Data_Struct;
		bool                           isStormSound;
	} params = {};

	params.AMB_Spawn_Cues_Data_Struct = AMB_Spawn_Cues_Data_Struct;
	params.isStormSound = isStormSound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAMB_Spawn_Cues_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_Spawn_Cues_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveActorEndOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_Spawn_Cues_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveActorEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAMB_Spawn_Cues_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.BP_SetIsEnabled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAMB_Spawn_Cues_BP_C::BP_SetIsEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.BP_SetIsEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ExecuteUbergraph_AMB_Spawn_Cues_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_Spawn_Cues_BP_C::ExecuteUbergraph_AMB_Spawn_Cues_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C.ExecuteUbergraph_AMB_Spawn_Cues_BP"));

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
