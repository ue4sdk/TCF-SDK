#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerEscapeComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C
// 0x0020 (0x00D8 - 0x00B8)
class UYPlayerEscapeComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               CanEscape;                                                // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsOwnerInDBNO;                                            // 0x00C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               WasAbleToEscapePriorToDBNO;                               // 0x00C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasShownNotification;                                     // 0x00C3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         VOHandle_ReadyToEscape;                                   // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C"));
		return ptr;
	}


	bool CanUpdateEscapeProgress();
	void SetCanEscape(bool CanEscape);
	void EscapeStatusChanged();
	void ReceiveBeginPlay();
	void OnEnterDBNOEvent_Event_1(class AController* Controller);
	void OnRecoveredDBNO_Event_1(class AController* Controller);
	void OnRevived_Event_1(class AController* Controller);
	void StoppedDBNO();
	void TryShowingNotification();
	void OnEscapeStateChanged();
	void ExecuteUbergraph_YPlayerEscapeComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
