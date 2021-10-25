// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SetItemDropArea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.Should Show Split Stack Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYInventoryDragAndDropPayload* Payload                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SetItemDropArea_C::Should_Show_Split_Stack_Widget(class UYInventoryDragAndDropPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.Should Show Split Stack Widget"));

	struct
	{
		class UYInventoryDragAndDropPayload* Payload;
		bool                           ReturnValue;
	} params;

	params.Payload = Payload;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ShowSplitStackWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SetItemDropArea_C::ShowSplitStackWidget(const struct FYInventoryItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ShowSplitStackWidget"));

	struct
	{
		struct FYInventoryItem         Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SetItemDropArea_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDrop"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.SetAreaColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Specified_Color                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::SetAreaColor(const struct FLinearColor& Specified_Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.SetAreaColor"));

	struct
	{
		struct FLinearColor            Specified_Color;
	} params;

	params.Specified_Color = Specified_Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnQuickMenuClosedCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SetItemDropArea_C::OnQuickMenuClosedCalled(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnQuickMenuClosedCalled"));

	struct
	{
		bool                           Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnSplitCurrentDraggingStack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SetItemDropArea_C::OnSplitCurrentDraggingStack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnSplitCurrentDraggingStack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragLeave"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragCancelled"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ListenForSplitAfterDrag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SetItemDropArea_C::ListenForSplitAfterDrag()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ListenForSplitAfterDrag"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.StopListeningForSplitAfterDrag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SetItemDropArea_C::StopListeningForSplitAfterDrag()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.StopListeningForSplitAfterDrag"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragCancelledOrDropped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::OnDragCancelledOrDropped(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnDragCancelledOrDropped"));

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ExecuteUbergraph_WBP_SetItemDropArea
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::ExecuteUbergraph_WBP_SetItemDropArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.ExecuteUbergraph_WBP_SetItemDropArea"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnStashDrop__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SetItemDropArea_C::OnStashDrop__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SetItemDropArea.WBP_SetItemDropArea_C.OnStashDrop__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
