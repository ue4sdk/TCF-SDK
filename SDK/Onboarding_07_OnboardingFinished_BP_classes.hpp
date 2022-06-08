#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_07_OnboardingFinished_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C
// 0x0008 (0x01E8 - 0x01E0)
class UOnboarding_07_OnboardingFinished_BP_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C"));
		return ptr;
	}


	void BP_StartMetaQuest();
	void NotUsedStep(EYMissionResultType Result);
	void ExecuteUbergraph_Onboarding_07_OnboardingFinished_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
