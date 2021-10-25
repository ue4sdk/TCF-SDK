#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIAttackComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAttackComponent_BP.AIAttackComponent_BP_C
// 0x0018 (0x0138 - 0x0120)
class UAIAttackComponent_BP_C : public UYAIAttackComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UMeshComponent*                              AttachFXComponentOverride;                                // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYAICharacter*                               AICharOwner;                                              // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIAttackComponent_BP.AIAttackComponent_BP_C");
		return ptr;
	}


	void PlayMuzzleFX();
	void BP_OnFireTansport();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AIAttackComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
