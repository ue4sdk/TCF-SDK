#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Station_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_Station_Provider.WBP_Station_Provider_C
// 0x0020 (0x0090 - 0x0070)
class UWBP_Station_Provider_C : public UYWidgetProvider_Station
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                ShopReturnTabIndex;                                       // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSelectTabIndex;                                         // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_Station_Provider.WBP_Station_Provider_C"));
		return ptr;
	}


	void Update_Customization_State(class APlayerController* PlayerController, EYQuickMenuSubScreen QuickMenuSubScreen);
	void ConsumeShopReturnTabIndex();
	void SelectTabIndex(int Index);
	void GetShopReturnTabIndex(int* Index);
	void SetShopReturnTabIndex(int Index);
	void BP_ToggleInventoryMenu();
	void BP_ToggleObjectiveList();
	void BP_ToggleAurumShop();
	void BP_ToggleFortunaPass();
	void BP_ToggleShop();
	void ExecuteUbergraph_WBP_Station_Provider(int EntryPoint);
	void OnSelectTabIndex__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
