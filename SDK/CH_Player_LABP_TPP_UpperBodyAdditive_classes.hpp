#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_Player_LABP_TPP_UpperBodyAdditive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C
// 0x02FC (0x06FC - 0x0400)
class UCH_Player_LABP_TPP_UpperBodyAdditive_C : public UYPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x0408(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x0520(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x0550(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x0580(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x0698(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x06C8(0x0030)
	float                                              LeanCounterRotateAngleThirdPerson;                        // 0x06F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C"));
		return ptr;
	}


	void TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody);
	void TPP_Loco(struct FPoseLink* TPP_Loco);
	void TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyAdditive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
