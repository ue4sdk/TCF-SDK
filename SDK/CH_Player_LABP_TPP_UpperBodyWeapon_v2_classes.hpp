#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_Player_LABP_TPP_UpperBodyWeapon_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_Player_LABP_TPP_UpperBodyWeapon_v2.CH_Player_LABP_TPP_UpperBodyWeapon_v2_C
// 0x5A10 (0x5E10 - 0x0400)
class UCH_Player_LABP_TPP_UpperBodyWeapon_v2_C : public UYPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x0408(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x0438(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x0550(0x0158)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                        // 0x06A8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                           // 0x0768(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x0790(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x08E8(0x0158)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_54;                       // 0x0A40(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_53;                       // 0x0A90(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_52;                       // 0x0AE0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_51;                       // 0x0B30(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_50;                       // 0x0B80(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_49;                       // 0x0BD0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_48;                       // 0x0C20(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_47;                       // 0x0C70(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_46;                       // 0x0CC0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_45;                       // 0x0D10(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_44;                       // 0x0D60(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_43;                       // 0x0DB0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_42;                       // 0x0E00(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_41;                       // 0x0E50(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_40;                       // 0x0EA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                           // 0x0EF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                           // 0x0F18(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_39;                       // 0x0F40(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_38;                       // 0x0F90(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_37;                       // 0x0FE0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_36;                       // 0x1030(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_35;                       // 0x1080(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_34;                       // 0x10D0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_33;                       // 0x1120(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_32;                       // 0x1170(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_31;                       // 0x11C0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_30;                       // 0x1210(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_29;                       // 0x1260(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_28;                       // 0x12B0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_27;                       // 0x1300(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_26;                       // 0x1350(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_25;                       // 0x13A0(0x0050)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4;                   // 0x13F0(0x00D0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_3;                   // 0x14C0(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x1590(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x1640(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x16E0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x1790(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x1840(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x18E0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x1990(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_33;                             // 0x1A30(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                            // 0x1A60(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1B10(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                           // 0x1C68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                        // 0x1C90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                        // 0x1CB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                        // 0x1CE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                        // 0x1D08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                        // 0x1D30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                        // 0x1D58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                        // 0x1D80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                        // 0x1DA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                        // 0x1DD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                        // 0x1DF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x1E20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x1E48(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x1E70(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                             // 0x1EF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1F20(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                             // 0x1FA0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1FD0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                             // 0x2050(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x2080(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x20A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x20D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x20F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x2120(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x2148(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x2170(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x2198(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x21C0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                             // 0x21E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x2218(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                             // 0x2298(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x22C8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                             // 0x2348(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x2378(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x23A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                             // 0x2420(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x2450(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                             // 0x24D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x2500(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                             // 0x2580(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                             // 0x25B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x25E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                             // 0x2660(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2690(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                             // 0x2710(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                            // 0x2740(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x27F0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                           // 0x2820(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x2848(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                            // 0x2878(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x2928(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x2A80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x2AA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x2AD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x2AF8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                        // 0x2B20(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                           // 0x2C08(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                        // 0x2C30(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x2CF0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                           // 0x2D20(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                        // 0x2D48(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                         // 0x2E30(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x2EF0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                           // 0x2F20(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x2F48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                             // 0x2F78(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x3028(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x3050(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x3078(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x30A0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                         // 0x30C8(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                           // 0x31B0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                         // 0x31D8(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x3298(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                           // 0x32C8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x32F0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                         // 0x33D8(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x3498(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                           // 0x34C8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x34F0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                             // 0x3520(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x35D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x35F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x3620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x3648(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x3670(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x3758(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                         // 0x3780(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x3840(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x3870(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x3898(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x3980(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x3A40(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x3A70(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x3A98(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                             // 0x3AC8(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x3B78(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x3BA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x3BC8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x3BF0(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x3C18(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x3CC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x3CF0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x3D18(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x3E00(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x3E28(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x3EE8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x3F18(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x3F40(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                             // 0x3F70(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x4020(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x4048(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x4070(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x4158(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x4180(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x4240(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x4270(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x4298(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x42C8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x4378(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x43A0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x43C8(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x44B0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x44D8(0x00C0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x4598(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x45C8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x45F0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x4620(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x46D0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x46F8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x4728(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x47D8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x4808(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x48B8(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_24;                       // 0x4958(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_23;                       // 0x49A8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_22;                       // 0x49F8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_21;                       // 0x4A48(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_20;                       // 0x4A98(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_19;                       // 0x4AE8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_18;                       // 0x4B38(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_17;                       // 0x4B88(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x4BD8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x4CC0(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x4DA8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x4DD0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x4E70(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x4E98(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x4EC0(0x00A0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2;                   // 0x4F60(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_16;                       // 0x5030(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_15;                       // 0x5080(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_14;                       // 0x50D0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_13;                       // 0x5120(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x5170(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x5220(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x52C0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x5380(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_12;                       // 0x5420(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_11;                       // 0x5470(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10;                       // 0x54C0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9;                        // 0x5510(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x5560(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8;                        // 0x5610(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7;                        // 0x5660(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6;                        // 0x56B0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                        // 0x5700(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x5750(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x5800(0x00A0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x58A0(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                        // 0x5970(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                        // 0x59C0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x5A10(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x5A60(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x5AB0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x5B60(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x5B90(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x5C40(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x5C68(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x5C98(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x5DB0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x5DE0(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass CH_Player_LABP_TPP_UpperBodyWeapon_v2.CH_Player_LABP_TPP_UpperBodyWeapon_v2_C"));
		return ptr;
	}


	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& Tags);
	void TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody);
	void TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive);
	void TPP_Loco(struct FPoseLink* TPP_Loco);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_A572DCF645C9F9C4905F3D9849EA37E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_5AE4E7E64C7E173160616B83139C1424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_0085FE9043B07DB8B33374914CF5BEDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_B0A768814DE6DFB9E0FEC1A36B78B7FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_4CC0C22D4D13F500B9D498B058A5A9A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_375216B841FA0DF2C0C431BCEE4723D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_7B124B8B44FF15AC333472A7845276CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_089929474EE04B32CCE73A811EAA2530();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_8305A0D94802682FDB24A5816B3E86DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_6D9203E9440B44960E47A1A9A51485F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_93D378024EBF2506ADAFC28BFB5F8E26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_845F7B684B0F52F62198FAA046E71ED0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_C75326174B2B3098C1E0639A4ACFD26B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_32085B6043354E7DDABA849C8DCC22EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_CA5E23974A29984A6FF946A469D81BDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_F19C4F8A4B04EAB5822EF5BD16671104();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_41982D4D43D9B96C69D9758D341CE71F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_B58EF7754E29661CB2FA439CCD51C9BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_B81C4C294C0D9F7444D69F9413B05679();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_629C49404EC5116DDB4B7D9EFE0D348E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_43357BB74380A4A03D7E6F95B1F3FDBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_1CAC69224F73F3BC139AC591C993EC22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_923DAB4B4E36A5D6D1EBE2B4FD66ABCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_SequenceEvaluator_BCABA427465E40320865EBBBA44E8B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_7329922140437CC2B8A5FEBD477DBF59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_FCB4D9764272BA57B7702E9FBFFF8BD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_7C1BBF374D65D58C8317BA87E9657302();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_6EAFC01D497862A25261A680A57FD523();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_DF3B4E5C4F6670B6D4347AB789E2B80D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_F126E8DD4A1AADDFAE9D59BD99E8ACC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_44B20F594C035F50B90FC8A05118A1AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_BE86126241AFA9C2A44ECDBD2387C9F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_76067EF043EA9BF6C91CC98009C7B305();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_1969BF074A122A1F4630F78E491C8B83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_F2EED06148AF3E29ED96538AD277BBB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_7A1B7C3F416DF9A2B18F5488AC965172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_9420C4244CE846F3A372798903089A7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_4E10C66F4297E2B46B91B7B2771EE78B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_AE1DB9B3407F40968947C2AC98051A3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_951C86464A6482C76AF77F9DE1E57C73();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_95EC02D843E327A1749F84B484CC8A1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_F2B18EE34C131240C61CF8B8FD832D12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2_AnimGraphNode_TransitionResult_337DE4C6449F88ABC4BA6FBE50E09556();
	void UpdateRecallmesh(bool RecallState);
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void WalkOut();
	void LightImpact();
	void JumpLand();
	void BP_SetIsFirstPerson(bool firstPersonState);
	void BP_PlayWeaponState(EYWeaponPlayState State);
	void SetUnarmedMode(bool Unarmed);
	void DisableWeaponSway();
	void ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyWeapon_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
