#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NotificationsManager_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NotificationsManager_WBP.NotificationsManager_WBP_C
// 0x0000 (0x0328 - 0x0328)
class UNotificationsManager_WBP_C : public UYWidget_NotificationsManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass NotificationsManager_WBP.NotificationsManager_WBP_C");
		return ptr;
	}


	class UYWidget_Notification* BP_CreateAndAddNotificationWidget(const struct FYSocialNotification& notificationData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
