// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickUp_Mineral_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.TryPlaySpecialPickUpAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickUp_Mineral_BP_C::TryPlaySpecialPickUpAnimation(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.TryPlaySpecialPickUpAnimation");

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.RetrieveStaticMeshVisualization
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             AsStatic_Mesh                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AYPickUp_Mineral_BP_C::RetrieveStaticMeshVisualization(class UStaticMesh** AsStatic_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.RetrieveStaticMeshVisualization");

	struct
	{
		class UStaticMesh*             AsStatic_Mesh;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsStatic_Mesh != nullptr)
		*AsStatic_Mesh = params.AsStatic_Mesh;
}


// Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.BP_OnCollected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      collectingPlayer               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isItemPlacedInPlayerInventory  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AYPickUp_Mineral_BP_C::BP_OnCollected(class AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.BP_OnCollected");

	struct
	{
		class AYPlayerController*      collectingPlayer;
		bool                           isItemPlacedInPlayerInventory;
	} params;

	params.collectingPlayer = collectingPlayer;
	params.isItemPlacedInPlayerInventory = isItemPlacedInPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.ExecuteUbergraph_YPickUp_Mineral_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickUp_Mineral_BP_C::ExecuteUbergraph_YPickUp_Mineral_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickUp_Mineral_BP.YPickUp_Mineral_BP_C.ExecuteUbergraph_YPickUp_Mineral_BP");

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
