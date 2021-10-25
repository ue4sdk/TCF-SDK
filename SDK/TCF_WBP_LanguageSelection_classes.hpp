#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_LanguageSelection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LanguageSelection.WBP_LanguageSelection_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_LanguageSelection_C : public UYWidget_LanguageSelection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_LanguageSelection.WBP_LanguageSelection_C");
		return ptr;
	}


	void BP_ClearCombobox();
	void ExecuteUbergraph_WBP_LanguageSelection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
