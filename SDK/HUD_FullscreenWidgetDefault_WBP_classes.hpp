#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUD_FullscreenWidgetDefault_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C
// 0x0060 (0x0330 - 0x02D0)
class UHUD_FullscreenWidgetDefault_WBP_C : public UYWidget_FullScreenCrosshair
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      FullscreenImage;                                          // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DI_ReticleBrush;                                          // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>           MaterialToApply;                                          // 0x02E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FMargin                                     CanvasSlotOffsets;                                        // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   DefaultOffset;                                            // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   Scale;                                                    // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C"));
		return ptr;
	}


	void Offset(const struct FVector2D& Offset);
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void OnLoaded_87AD17FA4E685BFD0F40F6876AD13AE5(class UObject* Loaded);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
