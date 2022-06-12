#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WP_Guarantee_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass WP_Guarantee_ABP.WP_Guarantee_ABP_C
// 0x0C01 (0x0EC1 - 0x02C0)
class UWP_Guarantee_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x02F8(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0378(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x03C0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x04C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x04E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x0508(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x0610(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x0718(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x0820(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x0928(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x0A30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0B38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0C40(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0D48(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0D68(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0D88(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0E28(0x0080)
	int                                                AmmoCount;                                                // 0x0EA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JingleAlpha;                                              // 0x0EAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isWeaponTargeting;                                        // 0x0EB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EB1(0x0003) MISSED OFFSET
	float                                              DeltaYaw;                                                 // 0x0EB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              deltaPitch;                                               // 0x0EB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                oldAmmo;                                                  // 0x0EBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isInCustomizationMode;                                    // 0x0EC0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass WP_Guarantee_ABP.WP_Guarantee_ABP_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void UpdateRecallmesh(bool RecallState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_83B7A6ED43227AD60FF2D5AE3ABC7504();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_69C69295485617647F19269B71F5764E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_E136D0DD4885D759223EC0B854C73F96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_078687C844E9B451DAD89886376E6196();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_218F1D3943FAC4D3E0360D95015CB8C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_D3BC74524EDFE3E8DD1763B95B2C20E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_FE4833D444CCB122A7652FBAB540ED78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Guarantee_ABP_AnimGraphNode_ModifyBone_C00D850F44F75CFF7398CA9406D159D5();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnAmmoChanged_Event_2(const struct FYAmmoUpdateInfo& ammoUpdateInfo);
	void JumpLand();
	void LightImpact();
	void WalkOut();
	void BlueprintInitializeAnimation();
	void IsTargeting();
	void isNotTargeting(bool interupted);
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void AnimNotify_ShowAmmoInNewMag();
	void ReloadInterupted(bool interupted);
	void SetIsInCustomizationMode(bool isInCustomizationMode);
	void ExecuteUbergraph_WP_Guarantee_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
