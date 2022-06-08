#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UI_FullscreenCrosshairManager_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C
// 0x0038 (0x0320 - 0x02E8)
class UUI_FullscreenCrosshairManager_WBP_C : public UYWidget_FullScreenCrosshairManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FString                                     SkeletalMeshNameCached;                                   // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UYSkeletalMeshComponentFOV*                  WeaponMeshComponentCached;                                // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               WeaponSkeletalMeshCached;                                 // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYFullscreenScopeData                       ScopeDataCached;                                          // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector2D                                   TargetOffset;                                             // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C"));
		return ptr;
	}


	void GetReticleOffset(struct FVector2D* ReticleOffset);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ApplyRecoilToFullscreenWidget();
	void ExecuteUbergraph_UI_FullscreenCrosshairManager_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
