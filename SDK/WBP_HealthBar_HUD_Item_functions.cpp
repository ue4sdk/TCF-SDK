// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_HealthBar_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.HealthDataChangedDelegate
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYHealthDataTableRow    HealthData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_HealthBar_HUD_Item_C::HealthDataChangedDelegate(const struct FYHealthDataTableRow& HealthData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.HealthDataChangedDelegate"));

	struct
	{
		struct FYHealthDataTableRow    HealthData;
	} params = {};

	params.HealthData = HealthData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.InitializeHealthBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorOwner                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::InitializeHealthBar(class AActor* ActorOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.InitializeHealthBar"));

	struct
	{
		class AActor*                  ActorOwner;
	} params = {};

	params.ActorOwner = ActorOwner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.UpdateDeltaBarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::UpdateDeltaBarVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.UpdateDeltaBarVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnTakeDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_HealthBar_HUD_Item_C::OnTakeDamage(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnTakeDamage"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Refresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnCurrentHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::OnCurrentHealthChanged(float CurrentHealth, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnCurrentHealthChanged"));

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params = {};

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.TickDeltaBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::TickDeltaBars(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.TickDeltaBars"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ResetDeltaBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::ResetDeltaBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ResetDeltaBars"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ExecuteUbergraph_WBP_HealthBar_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::ExecuteUbergraph_WBP_HealthBar_HUD_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ExecuteUbergraph_WBP_HealthBar_HUD_Item"));

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
