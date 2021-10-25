#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_TabNavigationBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TabNavigationBase.WBP_TabNavigationBase_C
// 0x0028 (0x02F0 - 0x02C8)
class UWBP_TabNavigationBase_C : public UYWidget_Composite
{
public:
	TArray<class UWBP_TabElementBase_TabElem_C*>       TabElements;                                              // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UWBP_TabElementBase_TabElem_C*               LastTabElemClicked;                                       // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTabChanged;                                             // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02E0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_TabNavigationBase.WBP_TabNavigationBase_C");
		return ptr;
	}


	void Select_Tab(int Index);
	void OnTabSelected(class UWBP_TabElementBase_TabElem_C* TabElement);
	void ClearTabs();
	void AddTab(class UWBP_TabElementBase_TabElem_C* TabElement);
	void OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
