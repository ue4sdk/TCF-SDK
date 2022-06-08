#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Options_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_Options_Provider.WBP_Options_Provider_C
// 0x0008 (0x00A0 - 0x0098)
class UWBP_Options_Provider_C : public UYWidgetProvider_Options
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_Options_Provider.WBP_Options_Provider_C"));
		return ptr;
	}


	void IsCommandAvailableByName(const struct FName& Name, class AYPlayerController* PlayerController, bool* isAvailable);
	void BP_OnButtonAction(const struct FName& ActionName, class UUserWidget* Widget);
	void ExecuteUbergraph_WBP_Options_Provider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
