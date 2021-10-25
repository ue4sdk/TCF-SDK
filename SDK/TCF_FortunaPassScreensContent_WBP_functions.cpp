// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FortunaPassScreensContent_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.UpdateSlide
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortunaPassSlideData   NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UFortunaPassScreensContent_WBP_C::UpdateSlide(const struct FFortunaPassSlideData& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.UpdateSlide"));

	struct
	{
		struct FFortunaPassSlideData   NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassScreensContent_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortunaPassScreensContent_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.SwitchSlide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortunaPassScreensContent_WBP_C::SwitchSlide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.SwitchSlide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.ExecuteUbergraph_FortunaPassScreensContent_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassScreensContent_WBP_C::ExecuteUbergraph_FortunaPassScreensContent_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensContent_WBP.FortunaPassScreensContent_WBP_C.ExecuteUbergraph_FortunaPassScreensContent_WBP"));

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
