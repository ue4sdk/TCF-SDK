#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_CrosshairHitIndicators_Combined_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CrosshairHitIndicators_Combined_HUD.WBP_CrosshairHitIndicators_Combined_HUD_C
// 0x0029 (0x0299 - 0x0270)
class UWBP_CrosshairHitIndicators_Combined_HUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_CrosshairHitIndicator_HUD_Item_C*       WBP_CrosshairHitIndicator_HUD_Item_BL;                    // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CrosshairHitIndicator_HUD_Item_C*       WBP_CrosshairHitIndicator_HUD_Item_BR;                    // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CrosshairHitIndicator_HUD_Item_C*       WBP_CrosshairHitIndicator_HUD_Item_TL;                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CrosshairHitIndicator_HUD_Item_C*       WBP_CrosshairHitIndicator_HUD_Item_TR;                    // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               blockHitAnim;                                             // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_CrosshairHitIndicators_Combined_HUD.WBP_CrosshairHitIndicators_Combined_HUD_C"));
		return ptr;
	}


	void SequenceEvent_1();
	void Play_CritKill();
	void Play_HitKill();
	void Play_Crit();
	void Play_Hit();
	void ExecuteUbergraph_WBP_CrosshairHitIndicators_Combined_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
