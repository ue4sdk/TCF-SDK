// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_SeasonProgression_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.NoLevelUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::NoLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.NoLevelUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.LevelUpFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::LevelUpFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.LevelUpFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu"));

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
