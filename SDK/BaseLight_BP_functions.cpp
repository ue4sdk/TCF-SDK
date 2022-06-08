// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseLight_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseLight_BP.BaseLight_BP_C.SetMaterialEmissiveBrightness
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Brightness                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Restore_Original               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseLight_BP_C::SetMaterialEmissiveBrightness(float Brightness, bool Restore_Original)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.SetMaterialEmissiveBrightness"));

	struct
	{
		float                          Brightness;
		bool                           Restore_Original;
	} params = {};

	params.Brightness = Brightness;
	params.Restore_Original = Restore_Original;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.GetMaterialEmissiveBrightness
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseLight_BP_C::GetMaterialEmissiveBrightness()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.GetMaterialEmissiveBrightness"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.SetSpotLightValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseLight_BP_C::SetSpotLightValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.SetSpotLightValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseLight_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.SetIsUnpoweredBy
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  powerProvider                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseLight_BP_C::SetIsUnpoweredBy(class AActor* powerProvider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.SetIsUnpoweredBy"));

	struct
	{
		class AActor*                  powerProvider;
	} params = {};

	params.powerProvider = powerProvider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_0_HasPower__DelegateSignature
// (FUNC_BlueprintEvent)

void ABaseLight_BP_C::BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_0_HasPower__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_0_HasPower__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_1_LostPower__DelegateSignature
// (FUNC_BlueprintEvent)

void ABaseLight_BP_C::BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_1_LostPower__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.BndEvt__BaseLight_BP_PowerRestoredComponent_K2Node_ComponentBoundEvent_1_LostPower__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.SetIsPoweredBy
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  powerProvider                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseLight_BP_C::SetIsPoweredBy(class AActor* powerProvider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.SetIsPoweredBy"));

	struct
	{
		class AActor*                  powerProvider;
	} params = {};

	params.powerProvider = powerProvider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseLight_BP.BaseLight_BP_C.ExecuteUbergraph_BaseLight_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseLight_BP_C::ExecuteUbergraph_BaseLight_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseLight_BP.BaseLight_BP_C.ExecuteUbergraph_BaseLight_BP"));

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
