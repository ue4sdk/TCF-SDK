#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InMatchHUD_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C
// 0x0038 (0x0128 - 0x00F0)
class UWBP_InMatchHUD_Provider_C : public UYWidgetProvider_InMatchHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnActivateContract;                                       // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UYControllerContractsActivesDataComponent*   ActiveContractsDataComponent;                             // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Initialized;                                              // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnContractExists;                                         // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C"));
		return ptr;
	}


	void OnActiveContractsProgressUpdated(const struct FYContractsProgress& contractsProgress);
	void OnActiveContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData);
	void OnActiveContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData);
	bool ThereIsAtLeastOneActiveContract();
	void InitProviderAfterPlayerInitialization(const struct FYRuntimeInitializationContext& Result);
	void BP_InitializeProvider();
	void ExecuteUbergraph_WBP_InMatchHUD_Provider(int EntryPoint);
	void OnContractExists__DelegateSignature();
	void OnActivateContract__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
