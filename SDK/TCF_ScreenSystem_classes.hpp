#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ScreenSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScreenSystem.YWidget
// 0x0060 (0x02C0 - 0x0260)
class UYWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0260(0x0030) MISSED OFFSET
	class UClass*                                      m_controllerClass;                                        // 0x0290(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESlateVisibility                                   m_shownVisibility;                                        // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESlateVisibility                                   m_hiddenVisibility;                                       // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_shouldOverrideRootZLayer;                               // 0x029A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYRootZLayer                                       m_rootZLayerOverride;                                     // 0x029B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UYWidgetController*                          m_controller;                                             // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	class UYScreenSystemRoot*                          m_screenSystemRoot;                                       // 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               m_shouldHandleInput;                                      // 0x02B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YWidget");
		return ptr;
	}


	void YAnimateVisibilityFinishedSignature__DelegateSignature(class UYWidget* Widget, ESlateVisibility newVisibility);
	void WidgetStatusChangeSignature__DelegateSignature();
	bool TriggerEscMenu(bool forceEscapeMenu);
	void ToggleVisibility();
	void SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct);
	void SetController(class UYWidgetController* newController);
	void RefreshConstructData();
	void OnAnimateVisibilityFinished();
	void HandleBackKey();
	ESlateVisibility GetPendingVisibility();
	class UYWidgetController* GetController();
	void BP_OnWidgetShown();
	void BP_OnWidgetHidden();
	bool BP_HandleTabKey();
	bool BP_HandleConfirmInput();
	bool BP_HandleBackKey();
	void BP_ExecuteBackButtonLogic();
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	class UWidgetAnimation* AnimateVisibility(ESlateVisibility newVisibility);
	void ActivateInputForUmg(bool isActivate, class UYWidget* focusedWidget, bool isUIOnly);
};


// Class ScreenSystem.YDialogContainerBase
// 0x0008 (0x02C8 - 0x02C0)
class UYDialogContainerBase : public UYWidget
{
public:
	class UYWidget_ModalDialogOkCancel*                m_modalDialogOkCancel;                                    // 0x02C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YDialogContainerBase");
		return ptr;
	}

};


// Class ScreenSystem.YLevelActorContainer
// 0x0000 (0x0028 - 0x0028)
class UYLevelActorContainer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YLevelActorContainer");
		return ptr;
	}

};


// Class ScreenSystem.YScreenBase
// 0x0040 (0x00B0 - 0x0070)
class UYScreenBase : public UYHierarchicalStateBase
{
public:
	class UClass*                                      m_screenWidgetClass;                                      // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      m_alternativeWidgetClass;                                 // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UYWidget*                                    m_screenWidgetInstance;                                   // 0x0080(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UYScreenSystemRoot*                          m_screenSystemRoot;                                       // 0x0088(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_isSubScreen;                                            // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_clearWidgetOnExit;                                      // 0x0091(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EYScreenType                                       m_screenType;                                             // 0x0092(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1D];                                      // 0x0093(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YScreenBase");
		return ptr;
	}


	void RequestScreenPop();
	void RequestScreenChange(class UClass* nextScreen, bool emptyScreenStack);
	class AHUD* GetHUD();
	void BP_OnWidgetLoaded();
};


// Class ScreenSystem.YScreenCommand
// 0x0000 (0x0028 - 0x0028)
class UYScreenCommand : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YScreenCommand");
		return ptr;
	}


	void Execute(class UYScreenBase* consumingScreen);
};


// Class ScreenSystem.YScreenExternalFunctions
// 0x0000 (0x0028 - 0x0028)
class UYScreenExternalFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YScreenExternalFunctions");
		return ptr;
	}


	static bool IsEnableAlternativeUI();
};


// Class ScreenSystem.YScreenManager
// 0x0050 (0x0078 - 0x0028)
class UYScreenManager : public UObject
{
public:
	TMap<class UClass*, class UYScreenBase*>           m_activeScreens;                                          // 0x0028(0x0050) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YScreenManager");
		return ptr;
	}


	class UYScreenBase* RequestScreen(class UClass* screenClass, bool clearRemainingScreen);
};


// Class ScreenSystem.YScreenSystemRoot
// 0x0070 (0x0098 - 0x0028)
class UYScreenSystemRoot : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLevelActorContainerSet;                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
	class UYWidgetManager*                             m_widgetManager;                                          // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UYScreenManager*                             m_screenManager;                                          // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UYHierarchicalStateMachine*                  m_stateMachine;                                           // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UYWidgetRootContainer*                       m_widgetRootContainer;                                    // 0x0080(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UYDialogContainerBase*                       m_dialogContainer;                                        // 0x0088(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UYLevelActorContainer*                       m_levelActorContainer;                                    // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YScreenSystemRoot");
		return ptr;
	}


	void YOnLevelActorContainerSet__DelegateSignature(class UYLevelActorContainer* LevelActorContainer);
	void ToggleEscMenuSignature__DelegateSignature(bool forced);
	void ToggleChatInputSignature__DelegateSignature();
	void OnRequestInputForUmgSignature__DelegateSignature(class UYWidget* focusedWidget, const struct FString& contextString, bool isUmgHasInput, bool uiOnly);
	class UYWidgetRootContainer* GetWidgetContainer();
	class UYHierarchicalStateMachine* GetStateMachine();
	class UYLevelActorContainer* GetLevelActorContainer();
	void DispatchScreenCommand(class UYScreenCommand* screenCommand);
};


// Class ScreenSystem.YWidget_ModalDialogOkCancel
// 0x0078 (0x0338 - 0x02C0)
class UYWidget_ModalDialogOkCancel : public UYWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET
	class UTextBlock*                                  m_msgHeadline;                                            // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class URichTextBlock*                              m_msgRichText;                                            // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTextBlock*                                  m_okButtonText;                                           // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTextBlock*                                  m_cancelButtonText;                                       // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UButton*                                     m_okButton;                                               // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UButton*                                     m_cancelButton;                                           // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         m_audioAnimateIn;                                         // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         m_audioAnimateOut;                                        // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YWidget_ModalDialogOkCancel");
		return ptr;
	}


	void OnOKButtonClicked();
	void OnDeclined__DelegateSignature();
	void OnCancelButtonClicked();
	void OnAccepted__DelegateSignature();
	void BP_SetCurrencyType(int buttonCurrencyType);
	void BP_SetButtonsLayout(EYButtonsLayout layout);
};


// Class ScreenSystem.YWidgetController
// 0x0008 (0x0030 - 0x0028)
class UYWidgetController : public UObject
{
public:
	class UYWidget*                                    m_ownerWidget;                                            // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YWidgetController");
		return ptr;
	}


	void OnWidgetShown();
	void OnWidgetHidden();
	void BP_OnWidgetShown();
	void BP_OnWidgetInit();
	void BP_OnWidgetHidden();
	void BP_OnWidgetClear();
};


// Class ScreenSystem.YWidgetManager
// 0x0000 (0x0028 - 0x0028)
class UYWidgetManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YWidgetManager");
		return ptr;
	}

};


// Class ScreenSystem.YWidgetRootContainer
// 0x0018 (0x02D8 - 0x02C0)
class UYWidgetRootContainer : public UYWidget
{
public:
	class UCanvasPanel*                                m_rootPanel;                                              // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCanvasPanel*                                m_backgroundPanel;                                        // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UCanvasPanel>                 m_subScreenPanel;                                         // 0x02D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ScreenSystem.YWidgetRootContainer");
		return ptr;
	}


	void SetSubScreenPanel(class UCanvasPanel* CanvasPanel);
	class UCanvasPanel* GetSubScreenPanel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
