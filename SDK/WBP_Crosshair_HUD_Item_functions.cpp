// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Crosshair_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.IsTurret
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ActorDamaged                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsTurret                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Crosshair_HUD_Item_C::IsTurret(class AActor* ActorDamaged, bool* IsTurret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.IsTurret"));

	struct
	{
		class AActor*                  ActorDamaged;
		bool                           IsTurret;
	} params = {};

	params.ActorDamaged = ActorDamaged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsTurret != nullptr)
		*IsTurret = params.IsTurret;
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.IsPlayerHitM
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ActorDamaged                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsPlayer                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Crosshair_HUD_Item_C::IsPlayerHitM(class AActor* ActorDamaged, bool* IsPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.IsPlayerHitM"));

	struct
	{
		class AActor*                  ActorDamaged;
		bool                           IsPlayer;
	} params = {};

	params.ActorDamaged = ActorDamaged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlayer != nullptr)
		*IsPlayer = params.IsPlayer;
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ApplyRecoil
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Crosshair_HUD_Item_C::ApplyRecoil()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ApplyRecoil"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.GetShieldColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ActorDamaged                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Crit                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DamageMitigation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasShieldEquipped              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSlateColor             Crosshair_Color                (CPF_Parm, CPF_OutParm)

void UWBP_Crosshair_HUD_Item_C::GetShieldColor(class AActor* ActorDamaged, bool Crit, float DamageMitigation, bool* HasShieldEquipped, struct FSlateColor* Crosshair_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.GetShieldColor"));

	struct
	{
		class AActor*                  ActorDamaged;
		bool                           Crit;
		float                          DamageMitigation;
		bool                           HasShieldEquipped;
		struct FSlateColor             Crosshair_Color;
	} params = {};

	params.ActorDamaged = ActorDamaged;
	params.Crit = Crit;
	params.DamageMitigation = DamageMitigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasShieldEquipped != nullptr)
		*HasShieldEquipped = params.HasShieldEquipped;
	if (Crosshair_Color != nullptr)
		*Crosshair_Color = params.Crosshair_Color;
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayShieldAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DiedOfThisDamage               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  ActorDamaged                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Crit                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DamageMitigation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::TryPlayShieldAnim(bool DiedOfThisDamage, class AActor* ActorDamaged, bool Crit, float DamageMitigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayShieldAnim"));

	struct
	{
		bool                           DiedOfThisDamage;
		class AActor*                  ActorDamaged;
		bool                           Crit;
		float                          DamageMitigation;
	} params = {};

	params.DiedOfThisDamage = DiedOfThisDamage;
	params.ActorDamaged = ActorDamaged;
	params.Crit = Crit;
	params.DamageMitigation = DamageMitigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHitCritical
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DiedOfThisDamage               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Crosshair_HUD_Item_C::CrossHairHitCritical(bool DiedOfThisDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHitCritical"));

	struct
	{
		bool                           DiedOfThisDamage;
	} params = {};

	params.DiedOfThisDamage = DiedOfThisDamage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DiedOfThisDamage               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Crosshair_HUD_Item_C::CrossHairHit(bool DiedOfThisDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHit"));

	struct
	{
		bool                           DiedOfThisDamage;
	} params = {};

	params.DiedOfThisDamage = DiedOfThisDamage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.PlayHitFeedback
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       YDealtDamageData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Crosshair_HUD_Item_C::PlayHitFeedback(const struct FYDealtDamageData& YDealtDamageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.PlayHitFeedback"));

	struct
	{
		struct FYDealtDamageData       YDealtDamageData;
	} params = {};

	params.YDealtDamageData = YDealtDamageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::TryPlayAnimation(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayAnimation"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.BP_OnPlayHitTargetFeedback
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Crosshair_HUD_Item_C::BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.BP_OnPlayHitTargetFeedback"));

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


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Tick"));

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


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Crosshair_HUD_Item_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ExecuteUbergraph_WBP_Crosshair_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::ExecuteUbergraph_WBP_Crosshair_HUD_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ExecuteUbergraph_WBP_Crosshair_HUD_Item"));

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
