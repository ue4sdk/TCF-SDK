#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_DamageCauser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C
// 0x00C0 (0x0320 - 0x0260)
class UWBP_EndOfMatch_DamageCauser_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                DamageCauserTextLayout;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_DamageCauser;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_DamageCauserName;                                     // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_DamageDetails;                                // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_DamageDetailInfo_C*          WBP_EndOfMatch_DamageDetailInfo;                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PlayerMiniWidget_C*                     WBP_PlayerMiniWidget;                                     // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FYDamageInfoDetail                          DamageDetailData;                                         // 0x0298(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FYDamageCauserInfo                          DamageCauserInfo;                                         // 0x02D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FYCondensedDamageData                       CondensedDamageEvent;                                     // 0x02F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_EndOfMatch_DamageCauser.WBP_EndOfMatch_DamageCauser_C"));
		return ptr;
	}


	class UWBP_EndOfMatch_DamageCauser_C* CreateDamgeSourceWidget();
	void GetDamageApplyInfoRow(struct FYDamageInfoApplyRow* Out_Row);
	void GetDamageCauerInfoRow(struct FYDamageInfoCauserRow* Out_Row);
	void GetDamageItemId(struct FName* Row_Name);
	void OnLoaded_3A4395644A59B708232AAAA6F6E1EA98(class UObject* Loaded);
	void SetupIconTexture(TSoftObjectPtr<class UObject> iconTexture);
	void SetupDamageCauser(const struct FYDamageCauserInfo& DamageCauserInfo);
	void CollapseAllDynamicElements();
	void SetupDamageSourceName(const struct FText& InText, const struct FName& IdentifierFallback);
	void SetupAsCondensedDamageEvent(const struct FYCondensedDamageData& YCondensedDamageData);
	void ExecuteUbergraph_WBP_EndOfMatch_DamageCauser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
