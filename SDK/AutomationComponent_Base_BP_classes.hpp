#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationComponent_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AutomationComponent_Base_BP.AutomationComponent_Base_BP_C
// 0x0018 (0x00D0 - 0x00B8)
class UAutomationComponent_Base_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnAutomationEndedEvent;                                   // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AutomationComponent_Base_BP.AutomationComponent_Base_BP_C"));
		return ptr;
	}


	void StartAutomation(const struct FAutomationTestStartData& AutomationTestStartData);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AutomationComponent_Base_BP(int EntryPoint);
	void OnAutomationEndedEvent__DelegateSignature(TEnumAsByte<EAutomationResultCode> AutomationResultCode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
