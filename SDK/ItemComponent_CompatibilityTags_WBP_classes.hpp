#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_CompatibilityTags_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C
// 0x0018 (0x0328 - 0x0310)
class UItemComponent_CompatibilityTags_WBP_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnItemTagsReceived;                                       // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C"));
		return ptr;
	}


	void BP_HandleSetItem();
	void ExecuteUbergraph_ItemComponent_CompatibilityTags_WBP(int EntryPoint);
	void OnItemTagsReceived__DelegateSignature(TArray<struct FYGameplayTagMappingRow>* ItemTagsData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
