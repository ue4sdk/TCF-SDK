#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NotificationsLog_SBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NotificationsLog_SBP.NotificationsLog_SBP_C
// 0x0008 (0x00C0 - 0x00B8)
class UNotificationsLog_SBP_C : public UYScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NotificationsLog_SBP.NotificationsLog_SBP_C"));
		return ptr;
	}


	void OnStateExitedEvent();
	void BP_OnWidgetLoaded();
	void OnStateEnteredEvent();
	void ExecuteUbergraph_NotificationsLog_SBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
