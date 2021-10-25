// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTService_Dodge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_Dodge.BTService_Dodge_C.EvaluateDodgeAnim
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TryOtherDirectionAsFallback    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            DodgeMontage                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Dodge_C::EvaluateDodgeAnim(bool TryOtherDirectionAsFallback, class UAnimMontage** DodgeMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Dodge.BTService_Dodge_C.EvaluateDodgeAnim");

	struct
	{
		bool                           TryOtherDirectionAsFallback;
		class UAnimMontage*            DodgeMontage;
	} params;

	params.TryOtherDirectionAsFallback = TryOtherDirectionAsFallback;

	UObject::ProcessEvent(fn, &params);

	if (DodgeMontage != nullptr)
		*DodgeMontage = params.DodgeMontage;
}


// Function BTService_Dodge.BTService_Dodge_C.ReceiveActivationAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Dodge_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Dodge.BTService_Dodge_C.ReceiveActivationAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_Dodge.BTService_Dodge_C.OnTakeDamage_Event
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UBTService_Dodge_C::OnTakeDamage_Event(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Dodge.BTService_Dodge_C.OnTakeDamage_Event");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_Dodge.BTService_Dodge_C.ExecuteUbergraph_BTService_Dodge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Dodge_C::ExecuteUbergraph_BTService_Dodge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Dodge.BTService_Dodge_C.ExecuteUbergraph_BTService_Dodge");

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
