// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FortunaPass_Actions_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SequenceEvent__ENTRYPOINTWBP_FortunaPass_Actions_Item_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FortunaPass_Actions_Item_C::SequenceEvent__ENTRYPOINTWBP_FortunaPass_Actions_Item_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SequenceEvent__ENTRYPOINTWBP_FortunaPass_Actions_Item_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.ProgressAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FortunaPass_Actions_Item_C::ProgressAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.ProgressAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.PlayProgressAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FortunaPass_Actions_Item_C::PlayProgressAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.PlayProgressAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.Update Progress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SeasonGrantedExp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            DailyCap                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FortunaPass_Actions_Item_C::Update_Progress(int SeasonGrantedExp, int DailyCap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.Update Progress"));

	struct
	{
		int                            SeasonGrantedExp;
		int                            DailyCap;
	} params = {};

	params.SeasonGrantedExp = SeasonGrantedExp;
	params.DailyCap = DailyCap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SetIsCompleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isCompleted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_Actions_Item_C::SetIsCompleted(bool isCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SetIsCompleted"));

	struct
	{
		bool                           isCompleted;
	} params = {};

	params.isCompleted = isCompleted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SetIsLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_Actions_Item_C::SetIsLocked(bool IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SetIsLocked"));

	struct
	{
		bool                           IsLocked;
	} params = {};

	params.IsLocked = IsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Locked                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYUIFortunaPassActionData Action_UI_Data                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 Action_ID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            SeasonGrantedXP                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            DailyCap                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            XpGrantFrequency               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewGrantedXp                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OldXp                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FortunaPass_Actions_Item_C::Init(bool Locked, const struct FYUIFortunaPassActionData& Action_UI_Data, const struct FString& Action_ID, int SeasonGrantedXP, int DailyCap, int XpGrantFrequency, int NewGrantedXp, int OldXp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.Init"));

	struct
	{
		bool                           Locked;
		struct FYUIFortunaPassActionData Action_UI_Data;
		struct FString                 Action_ID;
		int                            SeasonGrantedXP;
		int                            DailyCap;
		int                            XpGrantFrequency;
		int                            NewGrantedXp;
		int                            OldXp;
	} params = {};

	params.Locked = Locked;
	params.Action_UI_Data = Action_UI_Data;
	params.Action_ID = Action_ID;
	params.SeasonGrantedXP = SeasonGrantedXP;
	params.DailyCap = DailyCap;
	params.XpGrantFrequency = XpGrantFrequency;
	params.NewGrantedXp = NewGrantedXp;
	params.OldXp = OldXp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SequenceEvent_Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FortunaPass_Actions_Item_C::SequenceEvent_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.SequenceEvent_Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_Actions_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.PreConstruct"));

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


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.ExecuteUbergraph_WBP_FortunaPass_Actions_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FortunaPass_Actions_Item_C::ExecuteUbergraph_WBP_FortunaPass_Actions_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.ExecuteUbergraph_WBP_FortunaPass_Actions_Item"));

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


// Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.OnProgressAnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FortunaPass_Actions_Item_C::OnProgressAnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Actions_Item.WBP_FortunaPass_Actions_Item_C.OnProgressAnimationFinished__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
