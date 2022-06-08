// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ItemTileBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemTileBase.WBP_ItemTileBase_C.AutoMoveItemToTarget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTileBase_C::AutoMoveItemToTarget(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.AutoMoveItemToTarget"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ItemTileBase_C::IsInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.IsInteractable"));

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


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.NotifyWeaponInspectionInteraction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::NotifyWeaponInspectionInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.NotifyWeaponInspectionInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Notify Sell Screen Interaction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::Notify_Sell_Screen_Interaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Notify Sell Screen Interaction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Should Show Alternate Icon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldShowAlternateIcon        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemTileBase_C::Should_Show_Alternate_Icon(bool* ShouldShowAlternateIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Should Show Alternate Icon"));

	struct
	{
		bool                           ShouldShowAlternateIcon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShouldShowAlternateIcon != nullptr)
		*ShouldShowAlternateIcon = params.ShouldShowAlternateIcon;
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Find Target Component Id Based on Context
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TargetInventoryId              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSetType                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTileBase_C::Find_Target_Component_Id_Based_on_Context(int* TargetInventoryId, EYPlayerSetType* targetSetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Find Target Component Id Based on Context"));

	struct
	{
		int                            TargetInventoryId;
		EYPlayerSetType                targetSetType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetInventoryId != nullptr)
		*TargetInventoryId = params.TargetInventoryId;
	if (targetSetType != nullptr)
		*targetSetType = params.targetSetType;
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_ItemTileBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_ItemTileBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StartedDragging                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsRightMouseButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemTileBase_C::Pressed(bool StartedDragging, bool IsRightMouseButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Pressed"));

	struct
	{
		bool                           StartedDragging;
		bool                           IsRightMouseButton;
	} params = {};

	params.StartedDragging = StartedDragging;
	params.IsRightMouseButton = IsRightMouseButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.DragDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::DragDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.DragDone"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ItemTileBase_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ItemTileBase_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.ClearSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.ClearSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.DropAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTileBase_C::DropAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.DropAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.ExecuteUbergraph_WBP_ItemTileBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTileBase_C::ExecuteUbergraph_WBP_ItemTileBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.ExecuteUbergraph_WBP_ItemTileBase"));

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


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfSellListItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTileBase_C::SellScreenDoubleClickOfSellListItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfSellListItem__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};

	params.itemContainer = itemContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfStashItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTileBase_C::SellScreenDoubleClickOfStashItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTileBase.WBP_ItemTileBase_C.SellScreenDoubleClickOfStashItem__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};

	params.itemContainer = itemContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
