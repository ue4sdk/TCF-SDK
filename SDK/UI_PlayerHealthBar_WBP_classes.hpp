#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UI_PlayerHealthBar_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C
// 0x0038 (0x02A8 - 0x0270)
class UUI_PlayerHealthBar_WBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USizeBox*                                    BarContainerSizeBox;                                      // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UProgressBar*                                DBNOProgressBar;                                          // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYTextBlock*                                 TextBlock_DBNO;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_HealthBar_HUD_Item_C*                   UI_HealthBarWithDelta_WBP;                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYCharacterDBNOComponent*                    dbnoComp;                                                 // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerCharacter*                           playerCharacter;                                          // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PlayerHealthBar_WBP.UI_PlayerHealthBar_WBP_C"));
		return ptr;
	}


	void UpdateShowDeltaHealthDueNewDamage(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float DelayDeltaProgress, float* TimeLeftUntilProgressDeltaStarts_REEFERENCE);
	void UpdateDeltaProgress(float DeltaTime, class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float AdjustmentSpeed, float* TimeLeftUntilProgressDeltaStarts_REFERENCE);
	void InitializePlayerHealthBar(class AYPlayerCharacter* Character);
	void StartDBNO();
	void EndDBNO(bool interupted);
	void CurrentDBNOShieldHealthChangedDelegate(float CurrentHealth, class AActor* Instigator);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_PlayerHealthBar_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
