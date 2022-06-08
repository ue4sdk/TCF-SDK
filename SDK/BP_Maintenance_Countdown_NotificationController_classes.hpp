#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Maintenance_Countdown_NotificationController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Maintenance_Countdown_NotificationController.BP_Maintenance_Countdown_NotificationController_C
// 0x0004 (0x003C - 0x0038)
class UBP_Maintenance_Countdown_NotificationController_C : public UYNotificationController
{
public:
	int                                                Time;                                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Maintenance_Countdown_NotificationController.BP_Maintenance_Countdown_NotificationController_C"));
		return ptr;
	}


	struct FYNotificationDescription PreprocessDescription(const struct FYNotificationDescription& Description);
	bool BP_ShouldShowNotification(const struct FYNotificationDescription& Description);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
