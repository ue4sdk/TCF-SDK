#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_RichTextDecorator_InputAction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C
// 0x0008 (0x0048 - 0x0040)
class UBP_RichTextDecorator_InputAction_C : public UYRichTextBlockDecorator_InputAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_RichTextDecorator_InputAction.BP_RichTextDecorator_InputAction_C");
		return ptr;
	}


	void BP_InitInputWidget(class UUserWidget* Widget, const struct FName& Name, bool isLight);
	void ExecuteUbergraph_BP_RichTextDecorator_InputAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
