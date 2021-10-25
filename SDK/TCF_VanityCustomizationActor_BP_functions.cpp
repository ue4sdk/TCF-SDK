// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_VanityCustomizationActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.BP_OnGenericCustomizationDataVisualization
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkeletalMesh*>   skeletalMeshes                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UStaticMesh*>     staticMeshes                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                RelativeRotation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 RelativeLocation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYVanityType                   vanityType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVanityCustomizationActor_BP_C::BP_OnGenericCustomizationDataVisualization(TArray<class USkeletalMesh*> skeletalMeshes, TArray<class UStaticMesh*> staticMeshes, class UTexture2D* Texture, const struct FRotator& RelativeRotation, const struct FVector& RelativeLocation, const struct FVector& Scale, EYVanityType vanityType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.BP_OnGenericCustomizationDataVisualization"));

	struct
	{
		TArray<class USkeletalMesh*>   skeletalMeshes;
		TArray<class UStaticMesh*>     staticMeshes;
		class UTexture2D*              Texture;
		struct FRotator                RelativeRotation;
		struct FVector                 RelativeLocation;
		struct FVector                 Scale;
		EYVanityType                   vanityType;
	} params;

	params.skeletalMeshes = skeletalMeshes;
	params.staticMeshes = staticMeshes;
	params.Texture = Texture;
	params.RelativeRotation = RelativeRotation;
	params.RelativeLocation = RelativeLocation;
	params.Scale = Scale;
	params.vanityType = vanityType;

	UObject::ProcessEvent(fn, &params);
}


// Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVanityCustomizationActor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.ExecuteUbergraph_VanityCustomizationActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVanityCustomizationActor_BP_C::ExecuteUbergraph_VanityCustomizationActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VanityCustomizationActor_BP.VanityCustomizationActor_BP_C.ExecuteUbergraph_VanityCustomizationActor_BP"));

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
