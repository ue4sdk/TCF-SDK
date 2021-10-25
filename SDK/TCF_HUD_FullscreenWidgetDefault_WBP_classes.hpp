#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HUD_FullscreenWidgetDefault_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C
// 0x0010 (0x02D0 - 0x02C0)
class UHUD_FullscreenWidgetDefault_WBP_C : public UYWidget_FullScreenCrosshair
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      FullscreenImage;                                          // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C"));
		return ptr;
	}


	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void BP_SetData(const struct FYFullscreenScopeData& newData);
	void ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
