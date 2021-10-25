// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_VirtualCursor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VirtualCursor.WBP_VirtualCursor_C.IsGamepadActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGamepadActive                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VirtualCursor_C::IsGamepadActive(bool* IsGamepadActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.IsGamepadActive");

	struct
	{
		bool                           IsGamepadActive;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsGamepadActive != nullptr)
		*IsGamepadActive = params.IsGamepadActive;
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.ChangeState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYVirtualCursorState           State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VirtualCursor_C::ChangeState(EYVirtualCursorState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.ChangeState");

	struct
	{
		EYVirtualCursorState           State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawnAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnSpawnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawnAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnKeybindingDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnKeybindingDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnKeybindingDataChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.ExecuteUbergraph_WBP_VirtualCursor
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VirtualCursor_C::ExecuteUbergraph_WBP_VirtualCursor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VirtualCursor.WBP_VirtualCursor_C.ExecuteUbergraph_WBP_VirtualCursor");

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
