#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HoverBike_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass HoverBike_ABP.HoverBike_ABP_C
// 0x0EE8 (0x11A8 - 0x02C0)
class UHoverBike_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x02C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0338(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0388(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x03B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x03D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0400(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0428(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0450(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x0470(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0490(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0598(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x0618(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0648(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0668(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0688(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0790(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x0810(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0840(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x08C0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x08F0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x09D8(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x0A08(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0AD0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x0B50(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0C38(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x0C68(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0D50(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0DF0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0EB8(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x0F38(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1020(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1050(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1100(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x1148(0x0030)
	float                                              Direction;                                                // 0x1178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x117C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DeltaWorldRotation;                                       // 0x1180(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              TurnSpeedYaw;                                             // 0x118C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MoveForwardInputFloat;                                    // 0x1190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TRUE;                                                     // 0x1194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               doBoost;                                                  // 0x1195(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1196(0x0002) MISSED OFFSET
	class AYVehicle*                                   owningVehicle;                                            // 0x1198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYCharacterVehicleComponent*                 OwningCharVehicleComp;                                    // 0x11A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass HoverBike_ABP.HoverBike_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_0AFFBC4347A686C0209186B75FE59398();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_10E2DDEE43AA364060C32D9405C62142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendListByBool_273C94A1490A59A102300483E40ADCC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_E52D468248094ABEBE04F8B749E47A58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_3A1BF109423CAA642A8EACB158970822();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_BlendSpacePlayer_13FE99164D33F5BF1BE42B9E50BA1101();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_158B5EAB48145D19E78EDD9A7587E89E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_ModifyBone_AED9A0544DB6797D402586B05E12CFB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_2134384E4132611EB0C6BD80CE24F394();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_82ABB3CD400CE45BB7018AA8BC7564A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_299CC9B74D69C1A6961BC0AB6532C2DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC191BA84B4AAA6E78DE7A9D2CAC00FE();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HoverBike_ABP_AnimGraphNode_TransitionResult_FC933C954D6F5C715BB164B01ED94C0E();
	void onVehicleSpawn();
	void OnVehicleDespawn(bool interupted);
	void dohardLanding();
	void OnVehicleStateChanged_Event(EYVehicleStateType newVehicleState);
	void OnBoostStateChanged_Event(bool newState);
	void ExecuteUbergraph_HoverBike_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
