// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YWidget_ProspectorLevel_Small_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.SetProspectorLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            prospectorLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYWidget_ProspectorLevel_Small_WBP_C::SetProspectorLevel(int prospectorLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.SetProspectorLevel"));

	struct
	{
		int                            prospectorLevel;
	} params = {};

	params.prospectorLevel = prospectorLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYWidget_ProspectorLevel_Small_WBP_C::OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.OnLoaded_C2F19292426D5F0D4FA8C59DAF9E90D8"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYWidget_ProspectorLevel_Small_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.LoadIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYWidget_ProspectorLevel_Small_WBP_C::LoadIcon(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.LoadIcon"));

	struct
	{
		int                            Level;
	} params = {};

	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYWidget_ProspectorLevel_Small_WBP_C::ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YWidget_ProspectorLevel_Small_WBP.YWidget_ProspectorLevel_Small_WBP_C.ExecuteUbergraph_YWidget_ProspectorLevel_Small_WBP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
