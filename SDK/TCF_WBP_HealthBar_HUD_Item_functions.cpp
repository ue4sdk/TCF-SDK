// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_HealthBar_HUD_Item_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.HealthDataChangedDelegate");

	struct
	{
		struct FYHealthDataTableRow    HealthData;
	} params;

	params.HealthData = HealthData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.InitializeHealthBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorOwner                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::InitializeHealthBar(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.InitializeHealthBar");

	struct
	{
		class AActor*                  ActorOwner;
	} params;

	params.ActorOwner = ActorOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.UpdateDeltaBarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::UpdateDeltaBarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.UpdateDeltaBarVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnTakeDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_HealthBar_HUD_Item_C::OnTakeDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnTakeDamage");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnCurrentHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::OnCurrentHealthChanged(float CurrentHealth, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.OnCurrentHealthChanged");

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params;

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.TickDeltaBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::TickDeltaBars(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.TickDeltaBars");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ResetDeltaBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HealthBar_HUD_Item_C::ResetDeltaBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ResetDeltaBars");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ExecuteUbergraph_WBP_HealthBar_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HealthBar_HUD_Item_C::ExecuteUbergraph_WBP_HealthBar_HUD_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HealthBar_HUD_Item.WBP_HealthBar_HUD_Item_C.ExecuteUbergraph_WBP_HealthBar_HUD_Item");

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
