#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SocialUserList_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SocialUserList_WBP.SocialUserList_WBP_C
// 0x0038 (0x0318 - 0x02E0)
class USocialUserList_WBP_C : public UYWidget_SocialUserList
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                entriesVerticalBox;                                       // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Collapsable_C*                          WBP_Collapsable;                                          // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYWidgetPoolManager*                         WidgetPoolManager;                                        // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UFriendUserEntry_WBP_C*                      cachedSelectedEntryWBP;                                   // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ContextMenuOpened;                                        // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0308(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass SocialUserList_WBP.SocialUserList_WBP_C");
		return ptr;
	}


	void ResetEntriesVisibility();
	void SetEntriesVisibilityByUserId(TArray<struct FString>* userIds);
	void SetEntryActionButtons(class UWBP_Social_User_Entry_C** socialUserEntryWBP);
	class UYWidget_SocialUserEntry* BP_CreateAndAddEntry(const struct FYOutpostFriendInfo& friendInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_SetNumberOfVisibleEntries(int numOfVisibleEntries);
	void ExecuteUbergraph_SocialUserList_WBP(int EntryPoint);
	void ContextMenuOpened__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
