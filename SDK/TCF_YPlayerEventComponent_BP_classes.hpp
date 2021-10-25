#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerEventComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerEventComponent_BP.YPlayerEventComponent_BP_C
// 0x0018 (0x00C8 - 0x00B0)
class UYPlayerEventComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnPlayerReady;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00B8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerEventComponent_BP.YPlayerEventComponent_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnPawnChanged(class APawn* oldPawn, class APawn* newPawn);
	void ExecuteUbergraph_YPlayerEventComponent_BP(int EntryPoint);
	void OnPlayerReady__DelegateSignature(class AYPlayerCharacter* YPlayerCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
