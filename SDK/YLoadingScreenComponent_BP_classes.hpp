#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YLoadingScreenComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C
// 0x0014 (0x00CC - 0x00B8)
class UYLoadingScreenComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UUserWidget*                                 LoadingScreenWidget;                                      // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                LoadingScreenZOrder;                                      // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnIntroStart();
	void RemoveLoadScreenWidget();
	void OnMeshInitialized();
	void OnPawnStateChangedCallback(class APawn* oldPawn, class APawn* newPawn);
	void ExecuteUbergraph_YLoadingScreenComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
