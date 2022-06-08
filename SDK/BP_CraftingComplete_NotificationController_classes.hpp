#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CraftingComplete_NotificationController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CraftingComplete_NotificationController.BP_CraftingComplete_NotificationController_C
// 0x0010 (0x0048 - 0x0038)
class UBP_CraftingComplete_NotificationController_C : public UYNotificationController
{
public:
	struct FDataTableRowHandle                         WorkbenchSceneHandle;                                     // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CraftingComplete_NotificationController.BP_CraftingComplete_NotificationController_C"));
		return ptr;
	}


	struct FYNotificationDescription PreprocessDescription(const struct FYNotificationDescription& Description);
	bool BP_ShouldShowNotification(const struct FYNotificationDescription& Description);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
