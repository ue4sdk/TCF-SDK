#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SceneQuickMenuBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C
// 0x0010 (0x0440 - 0x0430)
class ASceneQuickMenuBase_BP_C : public ASceneBase_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWBP_Transition_C*                           TransitionWidget;                                         // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SceneQuickMenuBase_BP.SceneQuickMenuBase_BP_C");
		return ptr;
	}


	void GetPlayerControllerAndCharacter(class AYPlayerController** Controller, class AYPlayerCharacter** Character);
	void BP_Initialize(const struct FYSceneRuntimeInitializationData& sceneRuntimeInitializationData);
	void BP_UnInitialize();
	void ExecuteUbergraph_SceneQuickMenuBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
