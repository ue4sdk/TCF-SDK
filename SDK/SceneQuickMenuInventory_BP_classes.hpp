#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SceneQuickMenuInventory_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C
// 0x0008 (0x0450 - 0x0448)
class ASceneQuickMenuInventory_BP_C : public ASceneQuickMenuBase_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C"));
		return ptr;
	}


	void BP_OnFinishedLoadingWidget();
	void ExecuteUbergraph_SceneQuickMenuInventory_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
