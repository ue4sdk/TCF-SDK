// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SocialMediaScreen_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SocialMediaScreen_WBP.SocialMediaScreen_WBP_C.SetContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USocialMediaScreen_WBP_C::SetContent(class UTexture2D* Texture, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_WBP.SocialMediaScreen_WBP_C.SetContent"));

	struct
	{
		class UTexture2D*              Texture;
		struct FText                   Text;
	} params;

	params.Texture = Texture;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
