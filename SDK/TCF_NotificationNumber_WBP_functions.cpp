// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NotificationNumber_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotificationNumber_WBP.NotificationNumber_WBP_C.SetValueAsText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNotificationNumber_WBP_C::SetValueAsText(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationNumber_WBP.NotificationNumber_WBP_C.SetValueAsText");

	struct
	{
		int                            NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetToDefault
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNotificationNumber_WBP_C::BP_SetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetValue
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNotificationNumber_WBP_C::BP_SetValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationNumber_WBP.NotificationNumber_WBP_C.BP_SetValue");

	struct
	{
		int                            NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function NotificationNumber_WBP.NotificationNumber_WBP_C.ExecuteUbergraph_NotificationNumber_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNotificationNumber_WBP_C::ExecuteUbergraph_NotificationNumber_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationNumber_WBP.NotificationNumber_WBP_C.ExecuteUbergraph_NotificationNumber_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
