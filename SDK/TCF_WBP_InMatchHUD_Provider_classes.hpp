#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_InMatchHUD_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C
// 0x0038 (0x0120 - 0x00E8)
class UWBP_InMatchHUD_Provider_C : public UYWidgetProvider_InMatchHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnActivateContract;                                       // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UYControllerContractsActivesDataComponent*   ActiveContractsDataComponent;                             // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Initialized;                                              // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnContractExists;                                         // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0109(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C"));
		return ptr;
	}


	void OnActiveContractsProgressUpdated(const struct FYContractsProgress& contractsProgress);
	void OnActiveContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData);
	bool ThereIsAtLeastOneActiveContract();
	void InitProviderAfterPlayerInitialization(const struct FYRuntimeInitializationContext& Result);
	void BP_Initialize();
	void ExecuteUbergraph_WBP_InMatchHUD_Provider(int EntryPoint);
	void OnContractExists__DelegateSignature();
	void OnActivateContract__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
