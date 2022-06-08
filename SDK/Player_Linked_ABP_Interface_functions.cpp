// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_Linked_ABP_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_UpperBody
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               UpperBody                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_UpperBody                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPlayer_Linked_ABP_Interface_C::TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_UpperBody"));

	struct
	{
		struct FPoseLink               UpperBody;
		struct FPoseLink               TPP_UpperBody;
	} params = {};

	params.UpperBody = UpperBody;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_UpperBody != nullptr)
		*TPP_UpperBody = params.TPP_UpperBody;
}


// Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_Loco
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               TPP_Loco                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPlayer_Linked_ABP_Interface_C::TPP_Loco(struct FPoseLink* TPP_Loco)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_Loco"));

	struct
	{
		struct FPoseLink               TPP_Loco;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Loco != nullptr)
		*TPP_Loco = params.TPP_Loco;
}


// Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_Additive
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               Additive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_Additive                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPlayer_Linked_ABP_Interface_C::TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C.TPP_Additive"));

	struct
	{
		struct FPoseLink               Additive;
		struct FPoseLink               TPP_Additive;
	} params = {};

	params.Additive = Additive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Additive != nullptr)
		*TPP_Additive = params.TPP_Additive;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
