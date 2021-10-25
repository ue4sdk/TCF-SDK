#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PowerCableSpline_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerCableSpline_BP.PowerCableSpline_BP_C
// 0x0079 (0x0471 - 0x03F8)
class APowerCableSpline_BP_C : public ABaseSpline_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPowerUpComponent_C*                         PowerUpComponent;                                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SplinePowered_TL_SplineDistanceLerp_B98177BB49593ED1C63B289F31D7FCEE;// 0x0408(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    SplinePowered_TL__Direction_B98177BB49593ED1C63B289F31D7FCEE;// 0x040C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SplinePowered_TL;                                         // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicCableMaterial;                                     // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0420(0x0050) UNKNOWN PROPERTY: SplineMeshComponents
	bool                                               IsConnectedToConfigurator;                                // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerCableSpline_BP.PowerCableSpline_BP_C"));
		return ptr;
	}


	void CreateAndAssign_Material_to_Spline_Meshes();
	void UserConstructionScript();
	void SplinePowered_TL__FinishedFunc();
	void SplinePowered_TL__UpdateFunc();
	void ResetPowerUpActor();
	void OnPoweredProgressionLootRoom(int PoweredConnectionsInt);
	void OnLootRoomPowered();
	void OnSplineMeshesCached();
	void BndEvt__PowerCableSpline_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnPowerStatusChanged__DelegateSignature(bool IsPowered);
	void FX_SplinePowered();
	void BndEvt__PowerCableSpline_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnConfiguratorInitiated__DelegateSignature();
	void ReceiveBeginPlay();
	void OnRelevantToPowerup(bool TRUE);
	void ExecuteUbergraph_PowerCableSpline_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
