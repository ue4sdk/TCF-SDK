// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PreviewManagerActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Does Actor Handles Mode
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationMode            CustomizationMode              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AGenericItemPreviewActor_BP_C* PreviewActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           Preview_Actor_Handles_Mode     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APreviewManagerActor_BP_C::Does_Actor_Handles_Mode(EYCustomizationMode CustomizationMode, class AGenericItemPreviewActor_BP_C* PreviewActor, bool* Preview_Actor_Handles_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Does Actor Handles Mode"));

	struct
	{
		EYCustomizationMode            CustomizationMode;
		class AGenericItemPreviewActor_BP_C* PreviewActor;
		bool                           Preview_Actor_Handles_Mode;
	} params = {};

	params.CustomizationMode = CustomizationMode;
	params.PreviewActor = PreviewActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Preview_Actor_Handles_Mode != nullptr)
		*Preview_Actor_Handles_Mode = params.Preview_Actor_Handles_Mode;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.An Actor Override for Custom Mode Exists
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationMode            CustomMode                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool APreviewManagerActor_BP_C::An_Actor_Override_for_Custom_Mode_Exists(EYCustomizationMode CustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.An Actor Override for Custom Mode Exists"));

	struct
	{
		EYCustomizationMode            CustomMode;
		bool                           ReturnValue;
	} params = {};

	params.CustomMode = CustomMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Is This Mode Handled by the New System
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationMode            CustomizationMode              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool APreviewManagerActor_BP_C::Is_This_Mode_Handled_by_the_New_System(EYCustomizationMode CustomizationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Is This Mode Handled by the New System"));

	struct
	{
		EYCustomizationMode            CustomizationMode;
		bool                           ReturnValue;
	} params = {};

	params.CustomizationMode = CustomizationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Find Customization Mode To Look For Actor
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationMode            CustomizationMode              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYCustomizationMode            CustomizationModeWithCorrespondingActor (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Find_Customization_Mode_To_Look_For_Actor(EYCustomizationMode CustomizationMode, EYCustomizationMode* CustomizationModeWithCorrespondingActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Find Customization Mode To Look For Actor"));

	struct
	{
		EYCustomizationMode            CustomizationMode;
		EYCustomizationMode            CustomizationModeWithCorrespondingActor;
	} params = {};

	params.CustomizationMode = CustomizationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CustomizationModeWithCorrespondingActor != nullptr)
		*CustomizationModeWithCorrespondingActor = params.CustomizationModeWithCorrespondingActor;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Get Context String
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 contextString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Get_Context_String(const struct FString& FunctionName, struct FString* contextString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Get Context String"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 contextString;
	} params = {};

	params.FunctionName = FunctionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (contextString != nullptr)
		*contextString = params.contextString;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Log Error
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ErrorMsg                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Log_Error(const struct FString& FunctionName, const struct FString& ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Log Error"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 ErrorMsg;
	} params = {};

	params.FunctionName = FunctionName;
	params.ErrorMsg = ErrorMsg;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Get Camera Item Category
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 suffix                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Get_Camera_Item_Category(const struct FString& ID, struct FString* suffix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Get Camera Item Category"));

	struct
	{
		struct FString                 ID;
		struct FString                 suffix;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (suffix != nullptr)
		*suffix = params.suffix;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.On Request Weapon Vanity Temporary Visualization
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     vanityRowHandle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           shouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           overrideOtherVanity            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APreviewManagerActor_BP_C::On_Request_Weapon_Vanity_Temporary_Visualization(const struct FDataTableRowHandle& vanityRowHandle, bool shouldShow, bool overrideOtherVanity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.On Request Weapon Vanity Temporary Visualization"));

	struct
	{
		struct FDataTableRowHandle     vanityRowHandle;
		bool                           shouldShow;
		bool                           overrideOtherVanity;
	} params = {};

	params.vanityRowHandle = vanityRowHandle;
	params.shouldShow = shouldShow;
	params.overrideOtherVanity = overrideOtherVanity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Try Get Spawned Actor For Mode
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGenericItemPreviewActor_BP_C* GenericItemPreviewActorOut     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Try_Get_Spawned_Actor_For_Mode(class AGenericItemPreviewActor_BP_C** GenericItemPreviewActorOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Try Get Spawned Actor For Mode"));

	struct
	{
		class AGenericItemPreviewActor_BP_C* GenericItemPreviewActorOut;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GenericItemPreviewActorOut != nullptr)
		*GenericItemPreviewActorOut = params.GenericItemPreviewActorOut;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Rotation Reset
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APreviewManagerActor_BP_C::Rotation_Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Rotation Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Rotation Manually Triggered
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Rotation                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Rotation_Manually_Triggered(const struct FVector2D& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Rotation Manually Triggered"));

	struct
	{
		struct FVector2D               Rotation;
	} params = {};

	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Visibility
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APreviewManagerActor_BP_C::Set_Active_Preview_Actor_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Item Custom Id
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CustomId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Set_Active_Preview_Actor_Item_Custom_Id(const struct FString& CustomId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Item Custom Id"));

	struct
	{
		struct FString                 CustomId;
	} params = {};

	params.CustomId = CustomId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Item Id
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Set_Active_Preview_Actor_Item_Id(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Item Id"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Transform
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              worldOffsetLocation            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void APreviewManagerActor_BP_C::Set_Active_Preview_Actor_Transform(const struct FTransform& worldOffsetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Set Active Preview Actor Transform"));

	struct
	{
		struct FTransform              worldOffsetLocation;
	} params = {};

	params.worldOffsetLocation = worldOffsetLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Spawn Preview Actor for Customization Mode
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGenericItemPreviewActor_BP_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AGenericItemPreviewActor_BP_C* APreviewManagerActor_BP_C::Spawn_Preview_Actor_for_Customization_Mode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Spawn Preview Actor for Customization Mode"));

	struct
	{
		class AGenericItemPreviewActor_BP_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Find And Initialize Right Actor for New Customization Mode
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationMode            NewCustomizationMode           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::Find_And_Initialize_Right_Actor_for_New_Customization_Mode(EYCustomizationMode NewCustomizationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.Find And Initialize Right Actor for New Customization Mode"));

	struct
	{
		EYCustomizationMode            NewCustomizationMode;
	} params = {};

	params.NewCustomizationMode = NewCustomizationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APreviewManagerActor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.ExecuteUbergraph_PreviewManagerActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APreviewManagerActor_BP_C::ExecuteUbergraph_PreviewManagerActor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreviewManagerActor_BP.PreviewManagerActor_BP_C.ExecuteUbergraph_PreviewManagerActor_BP"));

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
