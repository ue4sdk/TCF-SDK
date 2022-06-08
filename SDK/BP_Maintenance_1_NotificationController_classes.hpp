#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Maintenance_1_NotificationController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Maintenance_1_NotificationController.BP_Maintenance_1_NotificationController_C
// 0x0000 (0x0038 - 0x0038)
class UBP_Maintenance_1_NotificationController_C : public UYNotificationController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Maintenance_1_NotificationController.BP_Maintenance_1_NotificationController_C"));
		return ptr;
	}


	struct FYNotificationDescription PreprocessDescription(const struct FYNotificationDescription& Description);
	bool BP_ShouldShowNotification(const struct FYNotificationDescription& Description);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
