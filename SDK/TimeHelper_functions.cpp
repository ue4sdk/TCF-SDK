// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeHelper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeHelper.TimeHelper_C.Convert Remaining Seconds to Kismet Timestamp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FTimespan UTimeHelper_C::Convert_Remaining_Seconds_to_Kismet_Timestamp(float Seconds, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeHelper.TimeHelper_C.Convert Remaining Seconds to Kismet Timestamp"));

	struct
	{
		float                          Seconds;
		class UObject*                 __WorldContext;
		struct FTimespan               ReturnValue;
	} params = {};

	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeHelper.TimeHelper_C.Convert Remaining Minutes to Kismet Timestamp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Minutes                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FTimespan UTimeHelper_C::Convert_Remaining_Minutes_to_Kismet_Timestamp(float Minutes, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeHelper.TimeHelper_C.Convert Remaining Minutes to Kismet Timestamp"));

	struct
	{
		float                          Minutes;
		class UObject*                 __WorldContext;
		struct FTimespan               ReturnValue;
	} params = {};

	params.Minutes = Minutes;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeHelper.TimeHelper_C.Get Formatted Time Span
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               InTimespan                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UTimeHelper_C::Get_Formatted_Time_Span(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeHelper.TimeHelper_C.Get Formatted Time Span"));

	struct
	{
		struct FTimespan               InTimespan;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params = {};

	params.InTimespan = InTimespan;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TimeHelper.TimeHelper_C.Format Time Span
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               Timespan                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Formatted_Text                 (CPF_Parm, CPF_OutParm)

void UTimeHelper_C::Format_Time_Span(const struct FTimespan& Timespan, class UObject* __WorldContext, struct FText* Formatted_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeHelper.TimeHelper_C.Format Time Span"));

	struct
	{
		struct FTimespan               Timespan;
		class UObject*                 __WorldContext;
		struct FText                   Formatted_Text;
	} params = {};

	params.Timespan = Timespan;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Formatted_Text != nullptr)
		*Formatted_Text = params.Formatted_Text;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
