#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_RichTextHyperlinkDecorator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RichTextHyperlinkDecorator.BP_RichTextHyperlinkDecorator_C
// 0x0000 (0x0030 - 0x0030)
class UBP_RichTextHyperlinkDecorator_C : public UYRichTextBlockHyperlinkDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_RichTextHyperlinkDecorator.BP_RichTextHyperlinkDecorator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
