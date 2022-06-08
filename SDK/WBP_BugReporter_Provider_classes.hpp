#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_BugReporter_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_BugReporter_Provider.WBP_BugReporter_Provider_C
// 0x0018 (0x00B0 - 0x0098)
class UWBP_BugReporter_Provider_C : public UYWidgetProvider_BugReporter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FString                                     AdditionalFilePath;                                       // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_BugReporter_Provider.WBP_BugReporter_Provider_C"));
		return ptr;
	}


	void AttachFile();
	void ReportJiraBug(class AYPlayerController* PlayerController, const struct FText& bugSummary, const struct FText& playerBehaviour, const struct FText& ReproSteps, TArray<struct FString>* BugLabels);
	void OnJiraTicketCreatedEvent(bool bSuccess, const struct FString& JiraKey);
	void ExecuteUbergraph_WBP_BugReporter_Provider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
