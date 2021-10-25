#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_FPS_Counter_HUD_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C
// 0x0010 (0x02E0 - 0x02D0)
class UWBP_FPS_Counter_HUD_Panel_C : public UYWidget_FpsCounter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  fpsTextBlock;                                             // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C");
		return ptr;
	}


	void BP_OnFpsDataUpdated(const struct FYFpsData& fpsData);
	void ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
