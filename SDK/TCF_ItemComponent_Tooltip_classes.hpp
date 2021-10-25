#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Tooltip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_Tooltip.ItemComponent_Tooltip_C
// 0x001D (0x031D - 0x0300)
class UItemComponent_Tooltip_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_ItemTooltip_C*                          Tooltip;                                                  // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AddSellInfo;                                              // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AddPriceInfo;                                             // 0x0311(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	struct FName                                       factionId;                                                // 0x0314(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AddAttachmentScreenInfo;                                  // 0x031C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_Tooltip.ItemComponent_Tooltip_C");
		return ptr;
	}


	void SetFactionId(const struct FName& factionId);
	void SetAddPriceInfo(bool Value);
	void GetTooltipWidget(class UWBP_ItemTooltip_C** Tooltip);
	class UWBP_ItemTooltip_C* GetTooltipWidgetFactionShop();
	class UWBP_ItemTooltip_C* GetTooltipWidgetLoadout();
	class UWBP_ItemTooltip_C* GetTooltipWidgetStash();
	void BP_ItemHoveredChanged(bool Hovered);
	void BP_HandleSetItem();
	void AddSellTooltipInfo(bool AddSellInfo);
	void BP_HandleResetItem();
	void ExecuteUbergraph_ItemComponent_Tooltip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
