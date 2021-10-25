// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_RichTextDecorator_InputAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C.BP_InitInputWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isLight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_RichTextDecorator_InputAction_C::BP_InitInputWidget(class UUserWidget* Widget, const struct FName& Name, bool isLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C.BP_InitInputWidget");

	struct
	{
		class UUserWidget*             Widget;
		struct FName                   Name;
		bool                           isLight;
	} params;

	params.Widget = Widget;
	params.Name = Name;
	params.isLight = isLight;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C.ExecuteUbergraph_BP_RichTextDecorator_InputAction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_RichTextDecorator_InputAction_C::ExecuteUbergraph_BP_RichTextDecorator_InputAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C.ExecuteUbergraph_BP_RichTextDecorator_InputAction");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
