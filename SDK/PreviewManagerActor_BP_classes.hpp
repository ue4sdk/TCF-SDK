#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PreviewManagerActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PreviewManagerActor_BP.PreviewManagerActor_BP_C
// 0x008C (0x02DC - 0x0250)
class APreviewManagerActor_BP_C : public AYPreviewManagerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EYCustomizationMode, class UClass* /*AGenericItemPreviewActor_BP_C*/> OverloadAssociationData;                                  // 0x0260(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AGenericItemPreviewActor_BP_C*>       SpawnedActors;                                            // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	EYCustomizationMode                                CurrentCustomizationMode;                                 // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	class UYControllerCustomizationPreviewComponent*   YControllerCustomizationPreviewComponent;                 // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerCustomizationRotationComponent*  YControllerCustomizationRotationComponent;                // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ActorInitialYaw;                                          // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PreviewManagerActor_BP.PreviewManagerActor_BP_C"));
		return ptr;
	}


	void Does_Actor_Handles_Mode(EYCustomizationMode CustomizationMode, class AGenericItemPreviewActor_BP_C* PreviewActor, bool* Preview_Actor_Handles_Mode);
	bool An_Actor_Override_for_Custom_Mode_Exists(EYCustomizationMode CustomMode);
	bool Is_This_Mode_Handled_by_the_New_System(EYCustomizationMode CustomizationMode);
	void Find_Customization_Mode_To_Look_For_Actor(EYCustomizationMode CustomizationMode, EYCustomizationMode* CustomizationModeWithCorrespondingActor);
	void Get_Context_String(const struct FString& FunctionName, struct FString* contextString);
	void Log_Error(const struct FString& FunctionName, const struct FString& ErrorMsg);
	void Get_Camera_Item_Category(const struct FString& ID, struct FString* suffix);
	void On_Request_Weapon_Vanity_Temporary_Visualization(const struct FDataTableRowHandle& vanityRowHandle, bool shouldShow, bool overrideOtherVanity);
	void Try_Get_Spawned_Actor_For_Mode(class AGenericItemPreviewActor_BP_C** GenericItemPreviewActorOut);
	void Rotation_Reset();
	void Rotation_Manually_Triggered(const struct FVector2D& Rotation);
	void Set_Active_Preview_Actor_Visibility();
	void Set_Active_Preview_Actor_Item_Custom_Id(const struct FString& CustomId);
	void Set_Active_Preview_Actor_Item_Id(const struct FString& ID);
	void Set_Active_Preview_Actor_Transform(const struct FTransform& worldOffsetLocation);
	class AGenericItemPreviewActor_BP_C* Spawn_Preview_Actor_for_Customization_Mode();
	void Find_And_Initialize_Right_Actor_for_New_Customization_Mode(EYCustomizationMode NewCustomizationMode);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PreviewManagerActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
