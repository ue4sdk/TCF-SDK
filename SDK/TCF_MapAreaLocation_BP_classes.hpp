#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapAreaLocation_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MapAreaLocation_BP.MapAreaLocation_BP_C
// 0x0045 (0x0295 - 0x0250)
class AMapAreaLocation_BP_C : public AYConditionLocationActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<class ATriggerVolume*>                      LinkedTriggers;                                           // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_ExposeOnSpawn)
	bool                                               ShowMapMarker;                                            // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               AnnounceArea;                                             // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	struct FText                                       AreaName;                                                 // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TimeShowAreaAnnouncementOnHud;                            // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAlreadyAnnounced;                                       // 0x0294(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MapAreaLocation_BP.MapAreaLocation_BP_C");
		return ptr;
	}


	void RemoveFromHUD();
	void StartAnnounceArea(class AActor* playerActorContext);
	void RetrieveLocationTag(struct FName* Tag);
	void UpdateCharacterLocationTag(class AActor* playerCharacter, bool IsBeginOverlap);
	void OnOverlapUpdate(class AActor* OverlapActor, bool IsBeginOverlap);
	void SetupAreaName();
	struct FYMapErrorInfo BP_CheckForErrors();
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
