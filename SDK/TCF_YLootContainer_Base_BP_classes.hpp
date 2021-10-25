#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YLootContainer_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YLootContainer_Base_BP.YLootContainer_Base_BP_C
// 0x0010 (0x0480 - 0x0470)
class AYLootContainer_Base_BP_C : public AYLootContainer
{
public:
	class UMaterialInstanceDynamic*                    CrateMaterialInstanceDynamic;                             // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYObjectInteractionComponent*                ObjectInteraction;                                        // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YLootContainer_Base_BP.YLootContainer_Base_BP_C");
		return ptr;
	}


	struct FString GetDebugDescription();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
