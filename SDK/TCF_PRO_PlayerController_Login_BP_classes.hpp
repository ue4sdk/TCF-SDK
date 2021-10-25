#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerController_Login_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C
// 0x001C (0x076C - 0x0750)
class APRO_PlayerController_Login_BP_C : public AYPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FString                                     commandLine;                                              // 0x0758(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              LoginTravelTimeout;                                       // 0x0768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void sendRequestLoginAutomationStarted();
	void ExecuteUbergraph_PRO_PlayerController_Login_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
