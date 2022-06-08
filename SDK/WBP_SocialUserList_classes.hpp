#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SocialUserList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SocialUserList.WBP_SocialUserList_C
// 0x0020 (0x0310 - 0x02F0)
class UWBP_SocialUserList_C : public UYWidget_SocialUserList
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                entriesVerticalBox;                                       // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Collapsable_C*                          WBP_Collapsable;                                          // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYWidgetPoolManager*                         WidgetPoolManager;                                        // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SocialUserList.WBP_SocialUserList_C"));
		return ptr;
	}


	void ResetEntriesVisibility();
	void SetEntriesVisibilityByUserId(TArray<struct FString>* userIds);
	void SetEntryActionButtons(class UWBP_Social_User_Entry_C** socialUserEntryWBP);
	class UYWidget_SocialUserEntry* BP_CreateAndAddEntry(const struct FYOutpostFriendInfo& friendInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_SetNumberOfVisibleEntries(int numOfVisibleEntries);
	void ExecuteUbergraph_WBP_SocialUserList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
