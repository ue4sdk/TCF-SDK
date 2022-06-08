#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PersistentWeaponDataComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C
// 0x0158 (0x0220 - 0x00C8)
class UPersistentWeaponDataComponent_BP_C : public UYPersistentWeaponDataComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TMap<struct FString, int>                          MessagePostMode;                                          // 0x00D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              AllSpawnedMessagePosts;                                   // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TMap<struct FString, float>                        Overheat;                                                 // 0x0130(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, bool>                         Active;                                                   // 0x0180(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, EYTransponderMode>            TransponderMode;                                          // 0x01D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C"));
		return ptr;
	}


	void DestroyOldestPostActor();
	void AddMessagePostsActor(class AActor* MessagePostActor, int MaxAllowed);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void ExecuteUbergraph_PersistentWeaponDataComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
