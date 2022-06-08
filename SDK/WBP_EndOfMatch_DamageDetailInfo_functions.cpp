// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_DamageDetailInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.GetDamageApplyInfoRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDamageInfoApplyRow    Out_Row                        (CPF_Parm, CPF_OutParm)

void UWBP_EndOfMatch_DamageDetailInfo_C::GetDamageApplyInfoRow(struct FYDamageInfoApplyRow* Out_Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.GetDamageApplyInfoRow"));

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


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.GetDamageItemId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Row_Name                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageDetailInfo_C::GetDamageItemId(struct FName* Row_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.GetDamageItemId"));

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


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.OnLoaded_705BACF749A38B5BCD51009EAF85A069
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageDetailInfo_C::OnLoaded_705BACF749A38B5BCD51009EAF85A069(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.OnLoaded_705BACF749A38B5BCD51009EAF85A069"));

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


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupIconTexture
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>  iconTexture                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageDetailInfo_C::SetupIconTexture(TSoftObjectPtr<class UObject> iconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupIconTexture"));

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


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupDamageInfoDetail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDamageInfoDetail      DamageInfoDetail               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_EndOfMatch_DamageDetailInfo_C::SetupDamageInfoDetail(const struct FYDamageInfoDetail& DamageInfoDetail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupDamageInfoDetail"));

	struct
	{
		struct FYDamageInfoDetail      DamageInfoDetail;
	} params = {};

	params.DamageInfoDetail = DamageInfoDetail;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.CollapseAllDynamicElements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_DamageDetailInfo_C::CollapseAllDynamicElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.CollapseAllDynamicElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupDamageSourceName
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   IdentifierFallback             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageDetailInfo_C::SetupDamageSourceName(const struct FText& InText, const struct FName& IdentifierFallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.SetupDamageSourceName"));

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


// Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.ExecuteUbergraph_WBP_EndOfMatch_DamageDetailInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_DamageDetailInfo_C::ExecuteUbergraph_WBP_EndOfMatch_DamageDetailInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_DamageDetailInfo.WBP_EndOfMatch_DamageDetailInfo_C.ExecuteUbergraph_WBP_EndOfMatch_DamageDetailInfo"));

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
