#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InputKeyNavigation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InputKeyNavigation.WBP_InputKeyNavigation_C
// 0x0031 (0x02C1 - 0x0290)
class UWBP_InputKeyNavigation_C : public UWBP_InputKeyNavigationBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Gfx_Backer;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              m_NavigationKeyHolder_HorizontalBox;                      // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKeyNavigation_Btn_C*               WBP_InputKeyNavigationItem;                               // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FStructure_InputKeyNav>              Nav_Items;                                                // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               ShowBacker;                                               // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_InputKeyNavigation.WBP_InputKeyNavigation_C"));
		return ptr;
	}


	void ClearInputKeys();
	void GetWidgetForInputRow(const struct FDataTableRowHandle& row, class UWBP_InputKeyNavigation_Btn_C** Widget);
	void CreateNavKeys(const struct FStructure_InputKeyNav& NavItemSetup);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void AddNavItem(const struct FStructure_InputKeyNav& newItem, bool ClearDefaultNavItems);
	void Refresh();
	void ExecuteUbergraph_WBP_InputKeyNavigation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
