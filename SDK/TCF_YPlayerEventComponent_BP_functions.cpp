// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerEventComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerEventComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.OnPawnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   oldPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   newPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEventComponent_BP_C::OnPawnChanged(class APawn* oldPawn, class APawn* newPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.OnPawnChanged"));

	struct
	{
		class APawn*                   oldPawn;
		class APawn*                   newPawn;
	} params;

	params.oldPawn = oldPawn;
	params.newPawn = newPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.ExecuteUbergraph_YPlayerEventComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEventComponent_BP_C::ExecuteUbergraph_YPlayerEventComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.ExecuteUbergraph_YPlayerEventComponent_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.OnPlayerReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       YPlayerCharacter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEventComponent_BP_C::OnPlayerReady__DelegateSignature(class AYPlayerCharacter* YPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEventComponent_BP.YPlayerEventComponent_BP_C.OnPlayerReady__DelegateSignature"));

	struct
	{
		class AYPlayerCharacter*       YPlayerCharacter;
	} params;

	params.YPlayerCharacter = YPlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
