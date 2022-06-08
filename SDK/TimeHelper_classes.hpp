#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeHelper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TimeHelper.TimeHelper_C
// 0x0000 (0x0030 - 0x0030)
class UTimeHelper_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TimeHelper.TimeHelper_C"));
		return ptr;
	}


	static struct FTimespan Convert_Remaining_Seconds_to_Kismet_Timestamp(float Seconds, class UObject* __WorldContext);
	static struct FTimespan Convert_Remaining_Minutes_to_Kismet_Timestamp(float Minutes, class UObject* __WorldContext);
	static void Get_Formatted_Time_Span(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Result);
	static void Format_Time_Span(const struct FTimespan& Timespan, class UObject* __WorldContext, struct FText* Formatted_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
