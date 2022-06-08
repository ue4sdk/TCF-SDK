// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GenericItemPreviewActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.HACK Retrieve Right Mesh For Medkits
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYItemMeshVisualization In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDataTableRowHandle     ItemDTRowHandleIn              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYItemMeshVisualization Out                            (CPF_Parm, CPF_OutParm)

void AGenericItemPreviewActor_BP_C::HACK_Retrieve_Right_Mesh_For_Medkits(const struct FYItemMeshVisualization& In, const struct FDataTableRowHandle& ItemDTRowHandleIn, struct FYItemMeshVisualization* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.HACK Retrieve Right Mesh For Medkits"));

	struct
	{
		struct FYItemMeshVisualization In;
		struct FDataTableRowHandle     ItemDTRowHandleIn;
		struct FYItemMeshVisualization Out;
	} params = {};

	params.In = In;
	params.ItemDTRowHandleIn = ItemDTRowHandleIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Context String
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Function_Name                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AGenericItemPreviewActor_BP_C::Get_Context_String(const struct FString& Function_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Context String"));

	struct
	{
		struct FString                 Function_Name;
		struct FString                 ReturnValue;
	} params = {};

	params.Function_Name = Function_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Debug Tick
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::Debug_Tick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Debug Tick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Mesh Location Info
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FVector                 Mesh_Location                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::Get_Mesh_Location_Info(const struct FString& ItemId, struct FVector* Mesh_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Mesh Location Info"));

	struct
	{
		struct FString                 ItemId;
		struct FVector                 Mesh_Location;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Mesh_Location != nullptr)
		*Mesh_Location = params.Mesh_Location;
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Camera Item Row
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FYCameraItemRow         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYCameraItemRow AGenericItemPreviewActor_BP_C::Get_Camera_Item_Row(const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Get Camera Item Row"));

	struct
	{
		struct FString                 ItemId;
		struct FYCameraItemRow         ReturnValue;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Reset Rotation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericItemPreviewActor_BP_C::Reset_Rotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Reset Rotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Apply Rotation Offset
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                RotationOffset                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericItemPreviewActor_BP_C::Apply_Rotation_Offset(const struct FRotator& RotationOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Apply Rotation Offset"));

	struct
	{
		struct FRotator                RotationOffset;
	} params = {};

	params.RotationOffset = RotationOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Does Preview Actor Handle Mode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationMode            CustomizationMode              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Preview_Actor_Handles_Mode     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericItemPreviewActor_BP_C::Does_Preview_Actor_Handle_Mode(EYCustomizationMode CustomizationMode, bool* Preview_Actor_Handles_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Does Preview Actor Handle Mode"));

	struct
	{
		EYCustomizationMode            CustomizationMode;
		bool                           Preview_Actor_Handles_Mode;
	} params = {};

	params.CustomizationMode = CustomizationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Preview_Actor_Handles_Mode != nullptr)
		*Preview_Actor_Handles_Mode = params.Preview_Actor_Handles_Mode;
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Disable Visualization Actor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericItemPreviewActor_BP_C::Disable_Visualization_Actor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Disable Visualization Actor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericItemPreviewActor_BP_C::Set_Visibility(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Visibility"));

	struct
	{
		bool                           IsVisible;
	} params = {};

	params.IsVisible = IsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_5C68C90449D48C22735C15819A8DA6BC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::OnLoaded_5C68C90449D48C22735C15819A8DA6BC(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_5C68C90449D48C22735C15819A8DA6BC"));

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


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_44C3685441CE9EB9DEC657864128EBB1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::OnLoaded_44C3685441CE9EB9DEC657864128EBB1(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_44C3685441CE9EB9DEC657864128EBB1"));

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


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_6CB044E14EBE606C7F0ADD92FE88AB78
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::OnLoaded_6CB044E14EBE606C7F0ADD92FE88AB78(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.OnLoaded_6CB044E14EBE606C7F0ADD92FE88AB78"));

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


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGenericItemPreviewActor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Preview Item Id
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemIdIn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::Set_Preview_Item_Id(const struct FString& ItemIdIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Preview Item Id"));

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


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AGenericItemPreviewActor_BP_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Preview Item Custom Id
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CustomItemIdIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::Set_Preview_Item_Custom_Id(const struct FString& CustomItemIdIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.Set Preview Item Custom Id"));

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


// Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ExecuteUbergraph_GenericItemPreviewActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericItemPreviewActor_BP_C::ExecuteUbergraph_GenericItemPreviewActor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GenericItemPreviewActor_BP.GenericItemPreviewActor_BP_C.ExecuteUbergraph_GenericItemPreviewActor_BP"));

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
