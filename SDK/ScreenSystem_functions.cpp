// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScreenSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction ScreenSystem.YWidget.YAnimateVisibilityFinishedSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYWidget*                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESlateVisibility               newVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::YAnimateVisibilityFinishedSignature__DelegateSignature(class UYWidget* Widget, ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YWidget.YAnimateVisibilityFinishedSignature__DelegateSignature"));

	struct
	{
		class UYWidget*                Widget;
		ESlateVisibility               newVisibility;
	} params = {};

	params.Widget = Widget;
	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YWidget.WidgetStatusChangeSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget::WidgetStatusChangeSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YWidget.WidgetStatusChangeSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.TriggerEscMenu
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           forceEscapeMenu                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::TriggerEscMenu(bool forceEscapeMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.TriggerEscMenu"));

	struct
	{
		bool                           forceEscapeMenu;
		bool                           ReturnValue;
	} params = {};

	params.forceEscapeMenu = forceEscapeMenu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.ToggleVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UYWidget::ToggleVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.ToggleVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.SetPendingVisibility
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           atConstruct                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.SetPendingVisibility"));

	struct
	{
		ESlateVisibility               newPendingVisibility;
		bool                           atConstruct;
	} params = {};

	params.newPendingVisibility = newPendingVisibility;
	params.atConstruct = atConstruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.SetController
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UYWidgetController*      newController                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::SetController(class UYWidgetController* newController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.SetController"));

	struct
	{
		class UYWidgetController*      newController;
	} params = {};

	params.newController = newController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.RefreshConstructData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYWidget::RefreshConstructData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.RefreshConstructData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.OnAnimateVisibilityFinished
// (FUNC_Native, FUNC_Public)

void UYWidget::OnAnimateVisibilityFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.OnAnimateVisibilityFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.HandleBackKey
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void UYWidget::HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.HandleBackKey"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.GetPendingVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ESlateVisibility UYWidget::GetPendingVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.GetPendingVisibility"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.GetController
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYWidgetController*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYWidgetController* UYWidget::GetController()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.GetController"));

	struct
	{
		class UYWidgetController*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidget::BP_OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidget::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.BP_HandleTabKey
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleTabKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_HandleTabKey"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_HandleConfirmInput
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleConfirmInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_HandleConfirmInput"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_HandleBackKey
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_HandleBackKey"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_ExecuteBackButtonLogic
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYWidget::BP_ExecuteBackButtonLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_ExecuteBackButtonLogic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidgetAnimation* UYWidget::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.AnimateVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidgetAnimation* UYWidget::AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.ActivateInputForUmg
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           isActivate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYWidget*                focusedWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           isUIOnly                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::ActivateInputForUmg(bool isActivate, class UYWidget* focusedWidget, bool isUIOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget.ActivateInputForUmg"));

	struct
	{
		bool                           isActivate;
		class UYWidget*                focusedWidget;
		bool                           isUIOnly;
	} params = {};

	params.isActivate = isActivate;
	params.focusedWidget = focusedWidget;
	params.isUIOnly = isUIOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenBase.RequestScreenPop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UYScreenBase::RequestScreenPop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenBase.RequestScreenPop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenBase.RequestScreenChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UYScreenBase*/ nextScreen                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           emptyScreenStack               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenBase::RequestScreenChange(class UClass* /*UYScreenBase*/ nextScreen, bool emptyScreenStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenBase.RequestScreenChange"));

	struct
	{
		class UClass* /*UYScreenBase*/ nextScreen;
		bool                           emptyScreenStack;
	} params = {};

	params.nextScreen = nextScreen;
	params.emptyScreenStack = emptyScreenStack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenBase.GetHUD
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AHUD*                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AHUD* UYScreenBase::GetHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenBase.GetHUD"));

	struct
	{
		class AHUD*                    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenBase.BP_OnWidgetLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYScreenBase::BP_OnWidgetLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenBase.BP_OnWidgetLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenCommand.Execute
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UYScreenBase*            consumingScreen                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenCommand::Execute(class UYScreenBase* consumingScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenCommand.Execute"));

	struct
	{
		class UYScreenBase*            consumingScreen;
	} params = {};

	params.consumingScreen = consumingScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenExternalFunctions.IsEnableAlternativeUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYScreenExternalFunctions::IsEnableAlternativeUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenExternalFunctions.IsEnableAlternativeUI"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenManager.RequestScreen
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UYScreenBase*/ screenClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           clearRemainingScreen           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYScreenBase*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYScreenBase* UYScreenManager::RequestScreen(class UClass* /*UYScreenBase*/ screenClass, bool clearRemainingScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenManager.RequestScreen"));

	struct
	{
		class UClass* /*UYScreenBase*/ screenClass;
		bool                           clearRemainingScreen;
		class UYScreenBase*            ReturnValue;
	} params = {};

	params.screenClass = screenClass;
	params.clearRemainingScreen = clearRemainingScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.YOnLevelActorContainerSet__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYLevelActorContainer*   LevelActorContainer            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::YOnLevelActorContainerSet__DelegateSignature(class UYLevelActorContainer* LevelActorContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YScreenSystemRoot.YOnLevelActorContainerSet__DelegateSignature"));

	struct
	{
		class UYLevelActorContainer*   LevelActorContainer;
	} params = {};

	params.LevelActorContainer = LevelActorContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleEscMenuSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           forced                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::ToggleEscMenuSignature__DelegateSignature(bool forced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleEscMenuSignature__DelegateSignature"));

	struct
	{
		bool                           forced;
	} params = {};

	params.forced = forced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleChatInputSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYScreenSystemRoot::ToggleChatInputSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleChatInputSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.OnRequestInputForUmgSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYWidget*                focusedWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 contextString                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           isUmgHasInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           uiOnly                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::OnRequestInputForUmgSignature__DelegateSignature(class UYWidget* focusedWidget, const struct FString& contextString, bool isUmgHasInput, bool uiOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YScreenSystemRoot.OnRequestInputForUmgSignature__DelegateSignature"));

	struct
	{
		class UYWidget*                focusedWidget;
		struct FString                 contextString;
		bool                           isUmgHasInput;
		bool                           uiOnly;
	} params = {};

	params.focusedWidget = focusedWidget;
	params.contextString = contextString;
	params.isUmgHasInput = isUmgHasInput;
	params.uiOnly = uiOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YScreenSystemRoot.GetWidgetContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYWidgetRootContainer*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYWidgetRootContainer* UYScreenSystemRoot::GetWidgetContainer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenSystemRoot.GetWidgetContainer"));

	struct
	{
		class UYWidgetRootContainer*   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.GetStateMachine
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYHierarchicalStateMachine* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYHierarchicalStateMachine* UYScreenSystemRoot::GetStateMachine()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenSystemRoot.GetStateMachine"));

	struct
	{
		class UYHierarchicalStateMachine* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.GetLevelActorContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYLevelActorContainer*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYLevelActorContainer* UYScreenSystemRoot::GetLevelActorContainer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenSystemRoot.GetLevelActorContainer"));

	struct
	{
		class UYLevelActorContainer*   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.DispatchScreenCommand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UYScreenCommand*         screenCommand                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::DispatchScreenCommand(class UYScreenCommand* screenCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YScreenSystemRoot.DispatchScreenCommand"));

	struct
	{
		class UYScreenCommand*         screenCommand;
	} params = {};

	params.screenCommand = screenCommand;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.OnOKButtonClicked
// (FUNC_Native, FUNC_Public)

void UYWidget_ModalDialogOkCancel::OnOKButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget_ModalDialogOkCancel.OnOKButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnDeclined__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget_ModalDialogOkCancel::OnDeclined__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnDeclined__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.OnCancelButtonClicked
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UYWidget_ModalDialogOkCancel::OnCancelButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget_ModalDialogOkCancel.OnCancelButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnAccepted__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget_ModalDialogOkCancel::OnAccepted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnAccepted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetCurrencyType
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            buttonCurrencyType             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget_ModalDialogOkCancel::BP_SetCurrencyType(int buttonCurrencyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetCurrencyType"));

	struct
	{
		int                            buttonCurrencyType;
	} params = {};

	params.buttonCurrencyType = buttonCurrencyType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetButtonsLayout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYButtonsLayout                layout                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget_ModalDialogOkCancel::BP_SetButtonsLayout(EYButtonsLayout layout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetButtonsLayout"));

	struct
	{
		EYButtonsLayout                layout;
	} params = {};

	params.layout = layout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.OnWidgetShown
// (FUNC_Native, FUNC_Protected)

void UYWidgetController::OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.OnWidgetHidden
// (FUNC_Native, FUNC_Protected)

void UYWidgetController::OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.BP_OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetInit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.BP_OnWidgetInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetClear
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetController.BP_OnWidgetClear"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetRootContainer.SetSubScreenPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCanvasPanel*            CanvasPanel                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidgetRootContainer::SetSubScreenPanel(class UCanvasPanel* CanvasPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetRootContainer.SetSubScreenPanel"));

	struct
	{
		class UCanvasPanel*            CanvasPanel;
	} params = {};

	params.CanvasPanel = CanvasPanel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScreenSystem.YWidgetRootContainer.GetSubScreenPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCanvasPanel* UYWidgetRootContainer::GetSubScreenPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScreenSystem.YWidgetRootContainer.GetSubScreenPanel"));

	struct
	{
		class UCanvasPanel*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
