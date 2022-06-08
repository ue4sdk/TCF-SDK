#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapAreaLocation_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MapAreaLocation_BP.MapAreaLocation_BP_C
// 0x00C8 (0x0338 - 0x0270)
class AMapAreaLocation_BP_C : public AYConditionLocationActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYMapMarkerComponent*                        YMapMarker;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ATriggerVolume*>                      LinkedTriggers;                                           // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_ExposeOnSpawn)
	bool                                               ShowMapMarker;                                            // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               AnnounceArea;                                             // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	struct FText                                       AreaName;                                                 // 0x02A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AreaNameWithoutDangerLabel;                               // 0x02C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TimeShowAreaAnnouncementOnHud;                            // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAlreadyAnnounced;                                       // 0x02E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EMapAreaDifficulty_ENUM>               AreaDifficulty;                                           // 0x02E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<EMapAreaDifficulty_ENUM>, struct FMapAreaDifficulty_ST> MapAreaDifficultyDefinitions;                             // 0x02E8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MapAreaLocation_BP.MapAreaLocation_BP_C"));
		return ptr;
	}


	struct FString GetDebugInfo();
	void RemoveFromHUD();
	void StartAnnounceArea(class AActor* playerActorContext);
	void RetrieveLocationTag(struct FName* Tag);
	void UpdateCharacterLocationTag(class AActor* playerCharacter, bool IsBeginOverlap);
	void OnOverlapUpdate(class AActor* OverlapActor, bool IsBeginOverlap);
	void SetupAreaName();
	struct FYMapErrorInfo BP_CheckForErrors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	void SetupMapMarker();
	void ExecuteUbergraph_MapAreaLocation_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
