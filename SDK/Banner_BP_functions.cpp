// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Banner_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Banner_BP.Banner_BP_C.Get Delay Before Actor Destruction
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::Get_Delay_Before_Actor_Destruction(float* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.Get Delay Before Actor Destruction"));

	struct
	{
		float                          Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function Banner_BP.Banner_BP_C.Convert Minutes to Seconds
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Minutes                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::Convert_Minutes_to_Seconds(int Minutes, float* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.Convert Minutes to Seconds"));

	struct
	{
		int                            Minutes;
		float                          Seconds;
	} params = {};

	params.Minutes = Minutes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function Banner_BP.Banner_BP_C.Get Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   returnResult                   (CPF_Parm, CPF_OutParm)

void ABanner_BP_C::Get_Name(struct FText* returnResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.Get Name"));

	struct
	{
		struct FText                   returnResult;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (returnResult != nullptr)
		*returnResult = params.returnResult;
}


// Function Banner_BP.Banner_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_4A0385474C8EACF19812D19508361D30
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_4A0385474C8EACF19812D19508361D30(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_4A0385474C8EACF19812D19508361D30"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_E3ED64D64653F1E69C56DF89C98F009D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_E3ED64D64653F1E69C56DF89C98F009D(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_E3ED64D64653F1E69C56DF89C98F009D"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_0074BA974BE052B7FF9369A7D5DDF321
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_0074BA974BE052B7FF9369A7D5DDF321(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_0074BA974BE052B7FF9369A7D5DDF321"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_994CAFF44D2DD18F243915A76E8BB079
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_994CAFF44D2DD18F243915A76E8BB079(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_994CAFF44D2DD18F243915A76E8BB079"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     oldRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FDataTableRowHandle     newRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABanner_BP_C::BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature"));

	struct
	{
		struct FDataTableRowHandle     oldRowHandle;
		struct FDataTableRowHandle     newRowHandle;
	} params = {};

	params.oldRowHandle = oldRowHandle;
	params.newRowHandle = newRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.BP_SetIsAttached
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           attachedStatus                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABanner_BP_C::BP_SetIsAttached(bool attachedStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.BP_SetIsAttached"));

	struct
	{
		bool                           attachedStatus;
	} params = {};

	params.attachedStatus = attachedStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.SetUpBannerPreviewInEditor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::SetUpBannerPreviewInEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.SetUpBannerPreviewInEditor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.LoadSounds
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::LoadSounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.LoadSounds"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.LoadParticle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::LoadParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.LoadParticle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.LoadMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::LoadMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.LoadMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.PlaySound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::PlaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.PlaySound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.lineTraceCeilingHeightForParticles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::lineTraceCeilingHeightForParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.lineTraceCeilingHeightForParticles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.SetupTextPlates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::SetupTextPlates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.SetupTextPlates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABanner_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.BP_OnOwnerChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABanner_BP_C::BP_OnOwnerChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.BP_OnOwnerChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.SetupLIghtAndFlareColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABanner_BP_C::SetupLIghtAndFlareColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.SetupLIghtAndFlareColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Banner_BP.Banner_BP_C.ExecuteUbergraph_Banner_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABanner_BP_C::ExecuteUbergraph_Banner_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Banner_BP.Banner_BP_C.ExecuteUbergraph_Banner_BP"));

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
