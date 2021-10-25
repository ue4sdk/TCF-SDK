// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Digger_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Digger_BP.Digger_BP_C.Harvester
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADigger_BP_C::Harvester()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.Harvester"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digger_BP.Digger_BP_C.ArmClaw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADigger_BP_C::ArmClaw()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.ArmClaw"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digger_BP.Digger_BP_C.AddMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                DeltaRotation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   SocketName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EAttachmentRule                RotationRule                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMeshComponent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UStaticMeshComponent* ADigger_BP_C::AddMesh(class UStaticMesh* NewMesh, class USceneComponent* Parent, const struct FRotator& DeltaRotation, const struct FName& SocketName, EAttachmentRule RotationRule)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.AddMesh"));

	struct
	{
		class UStaticMesh*             NewMesh;
		class USceneComponent*         Parent;
		struct FRotator                DeltaRotation;
		struct FName                   SocketName;
		EAttachmentRule                RotationRule;
		class UStaticMeshComponent*    ReturnValue;
	} params;

	params.NewMesh = NewMesh;
	params.Parent = Parent;
	params.DeltaRotation = DeltaRotation;
	params.SocketName = SocketName;
	params.RotationRule = RotationRule;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Digger_BP.Digger_BP_C.ArmCutter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADigger_BP_C::ArmCutter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.ArmCutter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digger_BP.Digger_BP_C.Bucket
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADigger_BP_C::Bucket()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.Bucket"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digger_BP.Digger_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADigger_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Digger_BP.Digger_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
