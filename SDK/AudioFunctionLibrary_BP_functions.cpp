// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C.PlayAudioByTag
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 contextObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FGameplayTag            AudioTag                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAudioFunctionLibrary_BP_C::PlayAudioByTag(class UObject* contextObject, const struct FGameplayTag& AudioTag, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C.PlayAudioByTag"));

	struct
	{
		class UObject*                 contextObject;
		struct FGameplayTag            AudioTag;
		class UObject*                 __WorldContext;
	} params = {};

	params.contextObject = contextObject;
	params.AudioTag = AudioTag;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C.IsHandleForAnnouncementData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAnnouncementPlayEntryData AnnouncementData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAudioFunctionLibrary_BP_C::IsHandleForAnnouncementData(const struct FYAnnouncementPlayEntryData& AnnouncementData, const struct FDataTableRowHandle& rowHandle, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C.IsHandleForAnnouncementData"));

	struct
	{
		struct FYAnnouncementPlayEntryData AnnouncementData;
		struct FDataTableRowHandle     rowHandle;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.AnnouncementData = AnnouncementData;
	params.rowHandle = rowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
