// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ScreenSystem_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YWidget.YAnimateVisibilityFinishedSignature__DelegateSignature");

	struct
	{
		class UYWidget*                Widget;
		ESlateVisibility               newVisibility;
	} params;

	params.Widget = Widget;
	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction ScreenSystem.YWidget.WidgetStatusChangeSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget::WidgetStatusChangeSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YWidget.WidgetStatusChangeSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.TriggerEscMenu
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           forceEscapeMenu                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::TriggerEscMenu(bool forceEscapeMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.TriggerEscMenu");

	struct
	{
		bool                           forceEscapeMenu;
		bool                           ReturnValue;
	} params;

	params.forceEscapeMenu = forceEscapeMenu;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.ToggleVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UYWidget::ToggleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.ToggleVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.SetPendingVisibility
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           atConstruct                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.SetPendingVisibility");

	struct
	{
		ESlateVisibility               newPendingVisibility;
		bool                           atConstruct;
	} params;

	params.newPendingVisibility = newPendingVisibility;
	params.atConstruct = atConstruct;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.SetController
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UYWidgetController*      newController                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget::SetController(class UYWidgetController* newController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.SetController");

	struct
	{
		class UYWidgetController*      newController;
	} params;

	params.newController = newController;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.RefreshConstructData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYWidget::RefreshConstructData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.RefreshConstructData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.OnAnimateVisibilityFinished
// (FUNC_Native, FUNC_Public)

void UYWidget::OnAnimateVisibilityFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.OnAnimateVisibilityFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.HandleBackKey
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void UYWidget::HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.HandleBackKey");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.GetPendingVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ESlateVisibility UYWidget::GetPendingVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.GetPendingVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.GetController
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYWidgetController*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYWidgetController* UYWidget::GetController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.GetController");

	struct
	{
		class UYWidgetController*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidget::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidget::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.BP_HandleTabKey
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleTabKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_HandleTabKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_HandleConfirmInput
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleConfirmInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_HandleConfirmInput");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_HandleBackKey
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYWidget::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_HandleBackKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.BP_ExecuteBackButtonLogic
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYWidget::BP_ExecuteBackButtonLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_ExecuteBackButtonLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidgetAnimation* UYWidget::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YWidget.AnimateVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidgetAnimation* UYWidget::AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget.ActivateInputForUmg");

	struct
	{
		bool                           isActivate;
		class UYWidget*                focusedWidget;
		bool                           isUIOnly;
	} params;

	params.isActivate = isActivate;
	params.focusedWidget = focusedWidget;
	params.isUIOnly = isUIOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenBase.RequestScreenPop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UYScreenBase::RequestScreenPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenBase.RequestScreenPop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenBase.RequestScreenChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  nextScreen                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           emptyScreenStack               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenBase::RequestScreenChange(class UClass* nextScreen, bool emptyScreenStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenBase.RequestScreenChange");

	struct
	{
		class UClass*                  nextScreen;
		bool                           emptyScreenStack;
	} params;

	params.nextScreen = nextScreen;
	params.emptyScreenStack = emptyScreenStack;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenBase.GetHUD
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AHUD*                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AHUD* UYScreenBase::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenBase.GetHUD");

	struct
	{
		class AHUD*                    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenBase.BP_OnWidgetLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYScreenBase::BP_OnWidgetLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenBase.BP_OnWidgetLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenCommand.Execute
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UYScreenBase*            consumingScreen                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenCommand::Execute(class UYScreenBase* consumingScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenCommand.Execute");

	struct
	{
		class UYScreenBase*            consumingScreen;
	} params;

	params.consumingScreen = consumingScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenExternalFunctions.IsEnableAlternativeUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYScreenExternalFunctions::IsEnableAlternativeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenExternalFunctions.IsEnableAlternativeUI");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenManager.RequestScreen
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  screenClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           clearRemainingScreen           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYScreenBase*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYScreenBase* UYScreenManager::RequestScreen(class UClass* screenClass, bool clearRemainingScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenManager.RequestScreen");

	struct
	{
		class UClass*                  screenClass;
		bool                           clearRemainingScreen;
		class UYScreenBase*            ReturnValue;
	} params;

	params.screenClass = screenClass;
	params.clearRemainingScreen = clearRemainingScreen;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.YOnLevelActorContainerSet__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYLevelActorContainer*   LevelActorContainer            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::YOnLevelActorContainerSet__DelegateSignature(class UYLevelActorContainer* LevelActorContainer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YScreenSystemRoot.YOnLevelActorContainerSet__DelegateSignature");

	struct
	{
		class UYLevelActorContainer*   LevelActorContainer;
	} params;

	params.LevelActorContainer = LevelActorContainer;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleEscMenuSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           forced                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::ToggleEscMenuSignature__DelegateSignature(bool forced)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleEscMenuSignature__DelegateSignature");

	struct
	{
		bool                           forced;
	} params;

	params.forced = forced;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleChatInputSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYScreenSystemRoot::ToggleChatInputSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YScreenSystemRoot.ToggleChatInputSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YScreenSystemRoot.OnRequestInputForUmgSignature__DelegateSignature");

	struct
	{
		class UYWidget*                focusedWidget;
		struct FString                 contextString;
		bool                           isUmgHasInput;
		bool                           uiOnly;
	} params;

	params.focusedWidget = focusedWidget;
	params.contextString = contextString;
	params.isUmgHasInput = isUmgHasInput;
	params.uiOnly = uiOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YScreenSystemRoot.GetWidgetContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYWidgetRootContainer*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYWidgetRootContainer* UYScreenSystemRoot::GetWidgetContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenSystemRoot.GetWidgetContainer");

	struct
	{
		class UYWidgetRootContainer*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.GetStateMachine
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYHierarchicalStateMachine* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYHierarchicalStateMachine* UYScreenSystemRoot::GetStateMachine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenSystemRoot.GetStateMachine");

	struct
	{
		class UYHierarchicalStateMachine* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.GetLevelActorContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYLevelActorContainer*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYLevelActorContainer* UYScreenSystemRoot::GetLevelActorContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenSystemRoot.GetLevelActorContainer");

	struct
	{
		class UYLevelActorContainer*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScreenSystem.YScreenSystemRoot.DispatchScreenCommand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UYScreenCommand*         screenCommand                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYScreenSystemRoot::DispatchScreenCommand(class UYScreenCommand* screenCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YScreenSystemRoot.DispatchScreenCommand");

	struct
	{
		class UYScreenCommand*         screenCommand;
	} params;

	params.screenCommand = screenCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.OnOKButtonClicked
// (FUNC_Native, FUNC_Public)

void UYWidget_ModalDialogOkCancel::OnOKButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget_ModalDialogOkCancel.OnOKButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnDeclined__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget_ModalDialogOkCancel::OnDeclined__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnDeclined__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.OnCancelButtonClicked
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UYWidget_ModalDialogOkCancel::OnCancelButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget_ModalDialogOkCancel.OnCancelButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnAccepted__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYWidget_ModalDialogOkCancel::OnAccepted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ScreenSystem.YWidget_ModalDialogOkCancel.OnAccepted__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetCurrencyType
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            buttonCurrencyType             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget_ModalDialogOkCancel::BP_SetCurrencyType(int buttonCurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetCurrencyType");

	struct
	{
		int                            buttonCurrencyType;
	} params;

	params.buttonCurrencyType = buttonCurrencyType;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetButtonsLayout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYButtonsLayout                layout                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidget_ModalDialogOkCancel::BP_SetButtonsLayout(EYButtonsLayout layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidget_ModalDialogOkCancel.BP_SetButtonsLayout");

	struct
	{
		EYButtonsLayout                layout;
	} params;

	params.layout = layout;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.OnWidgetShown
// (FUNC_Native, FUNC_Protected)

void UYWidgetController::OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.OnWidgetHidden
// (FUNC_Native, FUNC_Protected)

void UYWidgetController::OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetInit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.BP_OnWidgetInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetController.BP_OnWidgetClear
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYWidgetController::BP_OnWidgetClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetController.BP_OnWidgetClear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetRootContainer.SetSubScreenPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCanvasPanel*            CanvasPanel                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYWidgetRootContainer::SetSubScreenPanel(class UCanvasPanel* CanvasPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetRootContainer.SetSubScreenPanel");

	struct
	{
		class UCanvasPanel*            CanvasPanel;
	} params;

	params.CanvasPanel = CanvasPanel;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenSystem.YWidgetRootContainer.GetSubScreenPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCanvasPanel* UYWidgetRootContainer::GetSubScreenPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSystem.YWidgetRootContainer.GetSubScreenPanel");

	struct
	{
		class UCanvasPanel*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
