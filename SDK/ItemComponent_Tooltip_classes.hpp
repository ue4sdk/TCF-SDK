#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_Tooltip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_Tooltip.ItemComponent_Tooltip_C
// 0x0030 (0x0340 - 0x0310)
class UItemComponent_Tooltip_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_ItemTooltip_C*                          Tooltip;                                                  // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AddSellInfo;                                              // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AddPriceInfo;                                             // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	struct FName                                       factionId;                                                // 0x0324(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AddAttachmentScreenInfo;                                  // 0x032C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowInsuranceNotPurchasable;                              // 0x032D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShouldShowTooltip;                                        // 0x032E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x032F(0x0001) MISSED OFFSET
	float                                              TimeToShowTooltip;                                        // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_Tooltip.ItemComponent_Tooltip_C"));
		return ptr;
	}


	void StopTooltipTimer();
	void InitTooltipTimer();
	void OnShowTooltipTimer();
	void ShowTooltip();
	void SetFactionId(const struct FName& factionId);
	void SetAddPriceInfo(bool Value);
	void GetToolTipWidget(class UWBP_ItemTooltip_C** Tooltip);
	class UWBP_ItemTooltip_C* GetTooltipWidgetFactionShop();
	class UWBP_ItemTooltip_C* GetTooltipWidgetLoadout();
	class UWBP_ItemTooltip_C* GetTooltipWidgetStash();
	void OnLoaded_169DE2A542E1656616E06FB7CE27F426(class UObject* Loaded);
	void BP_ItemHoveredChanged(bool Hovered);
	void BP_HandleSetItem();
	void AddSellTooltipInfo(bool AddSellInfo);
	void BP_HandleResetItem();
	void SetFactionIcon(TSoftObjectPtr<class UTexture2D> SoftTexture, class UWBP_ItemTooltip_C* Target);
	void ExecuteUbergraph_ItemComponent_Tooltip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
