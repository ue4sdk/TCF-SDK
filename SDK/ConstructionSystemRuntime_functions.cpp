// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ConstructionSystemRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrefabricatorAssetInterface* InActivePrefabAsset            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemBuildTool::SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab"));

	struct
	{
		class UPrefabricatorAssetInterface* InActivePrefabAsset;
	} params = {};

	params.InActivePrefabAsset = InActivePrefabAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          NumSteps                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep"));

	struct
	{
		float                          NumSteps;
	} params = {};

	params.NumSteps = NumSteps;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UConstructionSystemBuildTool::HandleInput_CursorMovePrev()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UConstructionSystemBuildTool::HandleInput_CursorMoveNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UConstructionSystemComponent::ToggleConstructionSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UConstructionSystemComponent::ShowBuildMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EConstructionSystemToolType    InToolType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemComponent::SetActiveTool(EConstructionSystemToolType InToolType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool"));

	struct
	{
		EConstructionSystemToolType    InToolType;
	} params = {};

	params.InToolType = InToolType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UConstructionSystemComponent::HideBuildMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EConstructionSystemToolType    InToolType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UConstructionSystemTool* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UConstructionSystemTool* UConstructionSystemComponent::GetTool(EConstructionSystemToolType InToolType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool"));

	struct
	{
		EConstructionSystemToolType    InToolType;
		class UConstructionSystemTool* ReturnValue;
	} params = {};

	params.InToolType = InToolType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EConstructionSystemToolType    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType"));

	struct
	{
		EConstructionSystemToolType    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UConstructionSystemTool* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool"));

	struct
	{
		class UConstructionSystemTool* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EConstructionSystemToolType    InToolType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemComponent::EnableConstructionSystem(EConstructionSystemToolType InToolType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem"));

	struct
	{
		EConstructionSystemToolType    InToolType;
	} params = {};

	params.InToolType = InToolType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UConstructionSystemComponent::DisableConstructionSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UConstructionSystemRemoveTool::HandleInput_RemoveAtCursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SaveSlotName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UserIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSavePlayerState               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::SaveConstructionSystemLevel(class UObject* WorldContextObject, const struct FString& SaveSlotName, int UserIndex, bool bSavePlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 SaveSlotName;
		int                            UserIndex;
		bool                           bSavePlayerState;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SaveSlotName = SaveSlotName;
	params.UserIndex = UserIndex;
	params.bSavePlayerState = bSavePlayerState;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   LevelName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAbsolute                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SaveSlotName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UserIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::LoadConstructionSystemLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& SaveSlotName, int UserIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   LevelName;
		bool                           bAbsolute;
		struct FString                 SaveSlotName;
		int                            UserIndex;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.bAbsolute = bAbsolute;
	params.SaveSlotName = SaveSlotName;
	params.UserIndex = UserIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::HandleConstructionSystemLevelLoad(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UConstructionSystemUIAsset* UIAsset                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemBuildUI::SetUIAsset(class UConstructionSystemUIAsset* UIAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset"));

	struct
	{
		class UConstructionSystemUIAsset* UIAsset;
	} params = {};

	params.UIAsset = UIAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UConstructionSystemComponent* ConstructionSystem             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConstructionSystemBuildUI::SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem"));

	struct
	{
		class UConstructionSystemComponent* ConstructionSystem;
	} params = {};

	params.ConstructionSystem = ConstructionSystem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
