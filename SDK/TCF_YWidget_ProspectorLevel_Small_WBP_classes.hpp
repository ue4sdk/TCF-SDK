#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YWidget_ProspectorLevel_Small_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C
// 0x0018 (0x0278 - 0x0260)
class UYWidget_ProspectorLevel_Small_WBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBorder*                                     Border_1;                                                 // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYTextBlock*                                 prospectorLevelText;                                      // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C");
		return ptr;
	}


	void SetProspectorLevel(int prospectorLevel);
	void OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void LoadIcon(int Level);
	void ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
