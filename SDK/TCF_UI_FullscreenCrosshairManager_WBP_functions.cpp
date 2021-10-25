// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_FullscreenCrosshairManager_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.ApplyRecoilToFullscreenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_FullscreenCrosshairManager_WBP_C::ApplyRecoilToFullscreenWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.ApplyRecoilToFullscreenWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_FullscreenCrosshairManager_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.ExecuteUbergraph_UI_FullscreenCrosshairManager_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_FullscreenCrosshairManager_WBP_C::ExecuteUbergraph_UI_FullscreenCrosshairManager_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_FullscreenCrosshairManager_WBP.UI_FullscreenCrosshairManager_WBP_C.ExecuteUbergraph_UI_FullscreenCrosshairManager_WBP"));

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
