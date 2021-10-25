// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickup_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AYPickup_Base_BP_C::GetDrawDebugLineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineColor");

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AYPickup_Base_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.GetDrawDebugLineTo");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AYPickup_Base_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.GetDebugDescription");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.OffsetMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::OffsetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.OffsetMesh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.SetupLight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::SetupLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.SetupLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.GetPlayerForwardViewTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

struct FTransform AYPickup_Base_BP_C::GetPlayerForwardViewTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.GetPlayerForwardViewTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.SetTrailRarityColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYItemRarityType               rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::SetTrailRarityColor(EYItemRarityType rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.SetTrailRarityColor");

	struct
	{
		EYItemRarityType               rarity;
	} params;

	params.rarity = rarity;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::MeshScaleTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::MeshScaleTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.MeshScaleTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.OnPlayLootSpawnEffects
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYItemRarityType               rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::OnPlayLootSpawnEffects(EYItemRarityType rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.OnPlayLootSpawnEffects");

	struct
	{
		EYItemRarityType               rarity;
	} params;

	params.rarity = rarity;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params;

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.PlaySpawnSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYItemRarityType               Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::PlaySpawnSound(EYItemRarityType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.PlaySpawnSound");

	struct
	{
		EYItemRarityType               Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnMeshComponentAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::BP_OnMeshComponentAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnMeshComponentAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnCollected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      collectingPlayer               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isItemPlacedInPlayerInventory  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AYPickup_Base_BP_C::BP_OnCollected(class AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnCollected");

	struct
	{
		class AYPlayerController*      collectingPlayer;
		bool                           isItemPlacedInPlayerInventory;
	} params;

	params.collectingPlayer = collectingPlayer;
	params.isItemPlacedInPlayerInventory = isItemPlacedInPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnItemSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::BP_OnItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnItemSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.AnimateMeshScale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::AnimateMeshScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.AnimateMeshScale");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.ExecuteUbergraph_YPickup_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::ExecuteUbergraph_YPickup_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Base_BP.YPickup_Base_BP_C.ExecuteUbergraph_YPickup_Base_BP");

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
