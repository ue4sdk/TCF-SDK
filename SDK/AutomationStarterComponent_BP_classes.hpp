#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationStarterComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AutomationStarterComponent_BP.AutomationStarterComponent_BP_C
// 0x0050 (0x0108 - 0x00B8)
class UAutomationStarterComponent_BP_C : public UActorComponent
{
public:
	TMap<struct FString, TSoftClassPtr<class UClass>>  AutomationManagerMapping;                                 // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AutomationStarterComponent_BP.AutomationStarterComponent_BP_C"));
		return ptr;
	}


	void ExtractAutomationTestFromCommandLine(const struct FString& commandLine, struct FString* AutomationTest);
	void Start(const struct FString& commandLine, bool* succeeded);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
