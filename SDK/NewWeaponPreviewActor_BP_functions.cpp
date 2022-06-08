// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NewWeaponPreviewActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Set Preview Item Custom Id
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CustomItemIdIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ANewWeaponPreviewActor_BP_C::Set_Preview_Item_Custom_Id(const struct FString& CustomItemIdIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Set Preview Item Custom Id"));

	struct
	{
		struct FString                 CustomItemIdIn;
	} params = {};

	params.CustomItemIdIn = CustomItemIdIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Replace Vanity Entry Of Same Type
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     vanityRowHandle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYActiveWeaponCharacterInitializationData UpdatedVisualizationState      (CPF_Parm, CPF_OutParm)
// bool                           VanityRowIsCharm               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANewWeaponPreviewActor_BP_C::Replace_Vanity_Entry_Of_Same_Type(const struct FDataTableRowHandle& vanityRowHandle, struct FYActiveWeaponCharacterInitializationData* UpdatedVisualizationState, bool* VanityRowIsCharm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Replace Vanity Entry Of Same Type"));

	struct
	{
		struct FDataTableRowHandle     vanityRowHandle;
		struct FYActiveWeaponCharacterInitializationData UpdatedVisualizationState;
		bool                           VanityRowIsCharm;
	} params = {};

	params.vanityRowHandle = vanityRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UpdatedVisualizationState != nullptr)
		*UpdatedVisualizationState = params.UpdatedVisualizationState;
	if (VanityRowIsCharm != nullptr)
		*VanityRowIsCharm = params.VanityRowIsCharm;
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Update Vanity Data
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     vanityRowHandle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           shouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           overrideOtherVanity            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYActiveWeaponCharacterInitializationData UpdatedVisualizationState      (CPF_Parm, CPF_OutParm)

void ANewWeaponPreviewActor_BP_C::Update_Vanity_Data(const struct FDataTableRowHandle& vanityRowHandle, bool shouldShow, bool overrideOtherVanity, struct FYActiveWeaponCharacterInitializationData* UpdatedVisualizationState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Update Vanity Data"));

	struct
	{
		struct FDataTableRowHandle     vanityRowHandle;
		bool                           shouldShow;
		bool                           overrideOtherVanity;
		struct FYActiveWeaponCharacterInitializationData UpdatedVisualizationState;
	} params = {};

	params.vanityRowHandle = vanityRowHandle;
	params.shouldShow = shouldShow;
	params.overrideOtherVanity = overrideOtherVanity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UpdatedVisualizationState != nullptr)
		*UpdatedVisualizationState = params.UpdatedVisualizationState;
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Get Context String 0
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString ANewWeaponPreviewActor_BP_C::Get_Context_String_0(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Get Context String 0"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 ReturnValue;
	} params = {};

	params.FunctionName = FunctionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Log Error
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contextString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 errorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ANewWeaponPreviewActor_BP_C::Log_Error(const struct FString& contextString, const struct FString& errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Log Error"));

	struct
	{
		struct FString                 contextString;
		struct FString                 errorMessage;
	} params = {};

	params.contextString = contextString;
	params.errorMessage = errorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.On Request Temporary Visualization Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     vanityRowHandle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           shouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           overrideOtherVanity            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANewWeaponPreviewActor_BP_C::On_Request_Temporary_Visualization_Update(const struct FDataTableRowHandle& vanityRowHandle, bool shouldShow, bool overrideOtherVanity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.On Request Temporary Visualization Update"));

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


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Set Preview Item Id
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemIdIn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ANewWeaponPreviewActor_BP_C::Set_Preview_Item_Id(const struct FString& ItemIdIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Set Preview Item Id"));

	struct
	{
		struct FString                 ItemIdIn;
	} params = {};

	params.ItemIdIn = ItemIdIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Get if Vanity Is Charm
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   rowId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsCharm                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANewWeaponPreviewActor_BP_C::Get_if_Vanity_Is_Charm(const struct FName& rowId, bool* IsCharm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Get if Vanity Is Charm"));

	struct
	{
		struct FName                   rowId;
		bool                           IsCharm;
	} params = {};

	params.rowId = rowId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsCharm != nullptr)
		*IsCharm = params.IsCharm;
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Weapon Assets Loaded
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANewWeaponPreviewActor_BP_C::Weapon_Assets_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.Weapon Assets Loaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.BP_AssetsLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANewWeaponPreviewActor_BP_C::BP_AssetsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.BP_AssetsLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.CreateWeaponVisualization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 customItemID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     weaponRowHandle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYStoredModData         Mods                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FDataTableRowHandle> vanity                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ANewWeaponPreviewActor_BP_C::CreateWeaponVisualization(const struct FString& customItemID, const struct FDataTableRowHandle& weaponRowHandle, const struct FYStoredModData& Mods, TArray<struct FDataTableRowHandle> vanity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.CreateWeaponVisualization"));

	struct
	{
		struct FString                 customItemID;
		struct FDataTableRowHandle     weaponRowHandle;
		struct FYStoredModData         Mods;
		TArray<struct FDataTableRowHandle> vanity;
	} params = {};

	params.customItemID = customItemID;
	params.weaponRowHandle = weaponRowHandle;
	params.Mods = Mods;
	params.vanity = vanity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANewWeaponPreviewActor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.ExecuteUbergraph_NewWeaponPreviewActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANewWeaponPreviewActor_BP_C::ExecuteUbergraph_NewWeaponPreviewActor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponPreviewActor_BP.NewWeaponPreviewActor_BP_C.ExecuteUbergraph_NewWeaponPreviewActor_BP"));

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
