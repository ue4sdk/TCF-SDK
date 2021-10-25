// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIChar_Friendly_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.DisplayText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextRenderComponent*    NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIChar_Friendly_Base_BP_C::DisplayText(class UTextRenderComponent* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.DisplayText"));

	struct
	{
		class UTextRenderComponent*    NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIChar_Friendly_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetAlerted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAlerted                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAIChar_Friendly_Base_BP_C::SetAlerted(bool IsAlerted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetAlerted"));

	struct
	{
		bool                           IsAlerted;
	} params;

	params.IsAlerted = IsAlerted;

	UObject::ProcessEvent(fn, &params);
}


// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetHappy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHappy                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAIChar_Friendly_Base_BP_C::SetHappy(bool IsHappy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetHappy"));

	struct
	{
		bool                           IsHappy;
	} params;

	params.IsHappy = IsHappy;

	UObject::ProcessEvent(fn, &params);
}


// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetAfraid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAfraid                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAIChar_Friendly_Base_BP_C::SetAfraid(bool IsAfraid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.SetAfraid"));

	struct
	{
		bool                           IsAfraid;
	} params;

	params.IsAfraid = IsAfraid;

	UObject::ProcessEvent(fn, &params);
}


// Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.ExecuteUbergraph_AIChar_Friendly_Base_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIChar_Friendly_Base_BP_C::ExecuteUbergraph_AIChar_Friendly_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Friendly_Base_BP.AIChar_Friendly_Base_BP_C.ExecuteUbergraph_AIChar_Friendly_Base_BP"));

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
