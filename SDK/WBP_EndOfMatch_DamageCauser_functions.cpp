// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_DamageCauser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupArmor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_DamageCauser_C::SetupArmor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupArmor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.CreateDamgeSourceWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_DamageCauser_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_EndOfMatch_DamageCauser_C* UWBP_EndOfMatch_DamageCauser_C::CreateDamgeSourceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.CreateDamgeSourceWidget"));

	struct
	{
		class UWBP_EndOfMatch_DamageCauser_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageApplyInfoRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDamageInfoApplyRow    Out_Row                        (CPF_Parm, CPF_OutParm)

void UWBP_EndOfMatch_DamageCauser_C::GetDamageApplyInfoRow(struct FYDamageInfoApplyRow* Out_Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageApplyInfoRow"));

	struct
	{
		struct FYDamageInfoApplyRow    Out_Row;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageCauerInfoRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDamageInfoCauserRow   Out_Row                        (CPF_Parm, CPF_OutParm)

void UWBP_EndOfMatch_DamageCauser_C::GetDamageCauerInfoRow(struct FYDamageInfoCauserRow* Out_Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageCauerInfoRow"));

	struct
	{
		struct FYDamageInfoCauserRow   Out_Row;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageItemId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Row_Name                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageCauser_C::GetDamageItemId(struct FName* Row_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.GetDamageItemId"));

	struct
	{
		struct FName                   Row_Name;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Row_Name != nullptr)
		*Row_Name = params.Row_Name;
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.OnLoaded_3A4395644A59B708232AAAA6F6E1EA98
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageCauser_C::OnLoaded_3A4395644A59B708232AAAA6F6E1EA98(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.OnLoaded_3A4395644A59B708232AAAA6F6E1EA98"));

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


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupIconTexture
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>  iconTexture                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageCauser_C::SetupIconTexture(TSoftObjectPtr<class UObject> iconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupIconTexture"));

	struct
	{
		TSoftObjectPtr<class UObject>  iconTexture;
	} params = {};

	params.iconTexture = iconTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupDamageCauser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDamageCauserInfo      DamageCauserInfo               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_EndOfMatch_DamageCauser_C::SetupDamageCauser(const struct FYDamageCauserInfo& DamageCauserInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupDamageCauser"));

	struct
	{
		struct FYDamageCauserInfo      DamageCauserInfo;
	} params = {};

	params.DamageCauserInfo = DamageCauserInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.CollapseAllDynamicElements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_DamageCauser_C::CollapseAllDynamicElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.CollapseAllDynamicElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupDamageSourceName
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   IdentifierFallback             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageCauser_C::SetupDamageSourceName(const struct FText& InText, const struct FName& IdentifierFallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupDamageSourceName"));

	struct
	{
		struct FText                   InText;
		struct FName                   IdentifierFallback;
	} params = {};

	params.InText = InText;
	params.IdentifierFallback = IdentifierFallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupAsCondensedDamageEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYCondensedDamageData   YCondensedDamageData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_EndOfMatch_DamageCauser_C::SetupAsCondensedDamageEvent(const struct FYCondensedDamageData& YCondensedDamageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.SetupAsCondensedDamageEvent"));

	struct
	{
		struct FYCondensedDamageData   YCondensedDamageData;
	} params = {};

	params.YCondensedDamageData = YCondensedDamageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.ExecuteUbergraph_WBP_EndOfMatch_DamageCauser
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageCauser_C::ExecuteUbergraph_WBP_EndOfMatch_DamageCauser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C.ExecuteUbergraph_WBP_EndOfMatch_DamageCauser"));

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
