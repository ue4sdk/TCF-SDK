// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_UpgradeNode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_UpgradeNode.WBP_UpgradeNode_C.IsOnOnboarding
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_UpgradeNode_C::IsOnOnboarding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.IsOnOnboarding"));

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


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.TryToHighlightTechTree
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::TryToHighlightTechTree()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.TryToHighlightTechTree"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.MaxLevelState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::MaxLevelState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.MaxLevelState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetFormattedTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimespan               InTimespan                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UWBP_UpgradeNode_C::GetFormattedTime(const struct FTimespan& InTimespan, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetFormattedTime"));

	struct
	{
		struct FTimespan               InTimespan;
		struct FText                   Result;
	} params = {};

	params.InTimespan = InTimespan;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_UpgradeNode_C::GetToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.GetToolTipWidget_1"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.RefreshProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::RefreshProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.RefreshProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.SelectedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYTechTreeNodeType      nodeData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_UpgradeNode_C::SelectedState(bool Condition, const struct FYTechTreeNodeType& nodeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.SelectedState"));

	struct
	{
		bool                           Condition;
		struct FYTechTreeNodeType      nodeData;
	} params = {};

	params.Condition = Condition;
	params.nodeData = nodeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.Refresh Tech Tree Node
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::Refresh_Tech_Tree_Node()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.Refresh Tech Tree Node"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.ShowTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::ShowTier(bool shouldBeVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.ShowTier"));

	struct
	{
		bool                           shouldBeVisible;
	} params = {};

	params.shouldBeVisible = shouldBeVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetupPreviewNode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYTechTreeNodeType      nodeData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ShowNodeName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_UpgradeNode_C::SetupPreviewNode(const struct FYTechTreeNodeType& nodeData, bool ShowNodeName, const struct FDataTableRowHandle& rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetupPreviewNode"));

	struct
	{
		struct FYTechTreeNodeType      nodeData;
		bool                           ShowNodeName;
		struct FDataTableRowHandle     rowHandle;
	} params = {};

	params.nodeData = nodeData;
	params.ShowNodeName = ShowNodeName;
	params.rowHandle = rowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.Setup Tech Tree Node
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYTechTreeNodeType      nodeData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_UpgradeNode_C::Setup_Tech_Tree_Node(const struct FYTechTreeNodeType& nodeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.Setup Tech Tree Node"));

	struct
	{
		struct FYTechTreeNodeType      nodeData;
	} params = {};

	params.nodeData = nodeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.Can be Constructed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::Can_be_Constructed(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.Can be Constructed"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_UpgradeNode_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.BP_AnimateVisibility"));

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


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.inProgressState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::inProgressState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.inProgressState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.DisabledState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::DisabledState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.DisabledState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SetText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_UpgradeNode_C::SetTier(const struct FText& SetText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.SetTier"));

	struct
	{
		struct FText                   SetText;
	} params = {};

	params.SetText = SetText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.EmptyState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::EmptyState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.EmptyState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.LockedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::LockedState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.LockedState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_UpgradeNode_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UpgradeNode_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.Tick"));

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


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_UpgradeNode_C::BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_UpgradeNode_WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UpgradeNode_C::BndEvt__WBP_UpgradeNode_WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.BndEvt__WBP_UpgradeNode_WBP_Dummy_Btn_236_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnOnboardingStepCreated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMissionRuntimeData    uiMissionLineStepInfo          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_UpgradeNode_C::OnOnboardingStepCreated(const struct FYMissionRuntimeData& uiMissionLineStepInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnOnboardingStepCreated"));

	struct
	{
		struct FYMissionRuntimeData    uiMissionLineStepInfo;
	} params = {};

	params.uiMissionLineStepInfo = uiMissionLineStepInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.ExecuteUbergraph_WBP_UpgradeNode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UpgradeNode_C::ExecuteUbergraph_WBP_UpgradeNode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.ExecuteUbergraph_WBP_UpgradeNode"));

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


// Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnNodeClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   nodeId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_UpgradeNode_C*      clickedNode                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UpgradeNode_C::OnNodeClicked__DelegateSignature(const struct FName& nodeId, class UWBP_UpgradeNode_C* clickedNode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_UpgradeNode.WBP_UpgradeNode_C.OnNodeClicked__DelegateSignature"));

	struct
	{
		struct FName                   nodeId;
		class UWBP_UpgradeNode_C*      clickedNode;
	} params = {};

	params.nodeId = nodeId;
	params.clickedNode = clickedNode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
