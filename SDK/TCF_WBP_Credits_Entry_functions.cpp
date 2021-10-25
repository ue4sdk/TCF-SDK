// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Credits_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Credits_Entry.WBP_Credits_Entry_C.SetValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Credits_Entry_C::SetValues(const struct FText& Title, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Entry.WBP_Credits_Entry_C.SetValues");

	struct
	{
		struct FText                   Title;
		struct FText                   Name;
	} params;

	params.Title = Title;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Entry.WBP_Credits_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Credits_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Entry.WBP_Credits_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Entry.WBP_Credits_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Credits_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Entry.WBP_Credits_Entry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Entry.WBP_Credits_Entry_C.ExecuteUbergraph_WBP_Credits_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Credits_Entry_C::ExecuteUbergraph_WBP_Credits_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Entry.WBP_Credits_Entry_C.ExecuteUbergraph_WBP_Credits_Entry");

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
