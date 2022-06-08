// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioBlockingWall_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioBlockingWall_BP.AudioBlockingWall_BP_C.BuildWall
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAudioBlockingWall_BP_C::BuildWall(const struct FVector& Start, const struct FVector& End, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioBlockingWall_BP.AudioBlockingWall_BP_C.BuildWall"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
		float                          Height;
	} params = {};

	params.Start = Start;
	params.End = End;
	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioBlockingWall_BP.AudioBlockingWall_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAudioBlockingWall_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioBlockingWall_BP.AudioBlockingWall_BP_C.UserConstructionScript"));

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
