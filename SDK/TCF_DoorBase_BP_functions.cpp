// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DoorBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DoorBase_BP.DoorBase_BP_C.Set Sounds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              SetSoundStart                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USoundBase*              SetSoundEnd                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADoorBase_BP_C::Set_Sounds(class USoundBase* SetSoundStart, class USoundBase* SetSoundEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.Set Sounds"));

	struct
	{
		class USoundBase*              SetSoundStart;
		class USoundBase*              SetSoundEnd;
	} params;

	params.SetSoundStart = SetSoundStart;
	params.SetSoundEnd = SetSoundEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.SetOpenState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsEmergency                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsPowerOff                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADoorBase_BP_C::SetOpenState(bool IsOpen, bool IsEmergency, bool IsPowerOff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.SetOpenState"));

	struct
	{
		bool                           IsOpen;
		bool                           IsEmergency;
		bool                           IsPowerOff;
	} params;

	params.IsOpen = IsOpen;
	params.IsEmergency = IsEmergency;
	params.IsPowerOff = IsPowerOff;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.RefreshState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADoorBase_BP_C::RefreshState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.RefreshState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OnRep_IsOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADoorBase_BP_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OnRep_IsOpen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADoorBase_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_01__FinishedFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL_01__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_01__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_01__UpdateFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL_01__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_01__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_02__FinishedFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL_02__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_02__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_02__UpdateFunc
// (FUNC_BlueprintEvent)

void ADoorBase_BP_C::OpenOrCloseDoor_TL_02__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_TL_02__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_Play
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADoorBase_BP_C::OpenOrCloseDoor_Play(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OpenOrCloseDoor_Play"));

	struct
	{
		bool                           Open;
	} params;

	params.Open = Open;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.TryCloseDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DuePowerOff                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADoorBase_BP_C::TryCloseDoor(bool DuePowerOff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.TryCloseDoor"));

	struct
	{
		bool                           DuePowerOff;
	} params;

	params.DuePowerOff = DuePowerOff;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.TryOpenDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEmergency                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADoorBase_BP_C::TryOpenDoor(bool IsEmergency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.TryOpenDoor"));

	struct
	{
		bool                           IsEmergency;
	} params;

	params.IsEmergency = IsEmergency;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.MulticastPlayClosingSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDuePowerOff                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ADoorBase_BP_C::MulticastPlayClosingSound(bool IsDuePowerOff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.MulticastPlayClosingSound"));

	struct
	{
		bool                           IsDuePowerOff;
	} params;

	params.IsDuePowerOff = IsDuePowerOff;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADoorBase_BP_C::ExecuteUbergraph_DoorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function DoorBase_BP.DoorBase_BP_C.OnDoorIsOpenChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADoorBase_BP_C*          Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADoorBase_BP_C::OnDoorIsOpenChanged__DelegateSignature(class ADoorBase_BP_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DoorBase_BP.DoorBase_BP_C.OnDoorIsOpenChanged__DelegateSignature"));

	struct
	{
		class ADoorBase_BP_C*          Door;
	} params;

	params.Door = Door;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
