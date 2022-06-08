#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_ImageFactionLock_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C
// 0x0008 (0x0328 - 0x0320)
class UItemComponent_ImageFactionLock_WBP_C : public UYWidget_ItemComponentImageFactionLock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C"));
		return ptr;
	}


	void DetermineLockText(struct FItemLockInfo* Info, struct FText* Result);
	void BP_SetUnlockText(const struct FItemLockInfo& Info);
	void ExecuteUbergraph_ItemComponent_ImageFactionLock_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
