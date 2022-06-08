#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DecoMeshData.DecoMeshData
// 0x00C1
struct FDecoMeshData
{
	int                                                EverXSplineMesh_8_0E6889384BCC3F4500C0CF83E129E45E;       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         DecoMeshArray_24_ED66898E4CC3C964AB4FA5B4C0FC11B4;        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MinSocketsUsed_60_47192A004D226707FE5876896F364444;       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxSocketsUsed_61_F224931E4B3BB2E2DF7805B2E7D3C52B;       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ScaleMin_40_5FEBCE544F0BBED029EF9AA6DA3A92D0;             // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ScaleMax_42_BDBA8D714E74F5C867B5BEB2666FB78E;             // 0x002C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RollMin_11_EC9F268C4EE6C7B5039D2D8F46B1F106;              // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RollMax_13_889FFD20424E3AB8D067E0BACB668FBE;              // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PitchMin_15_E342E91648CB4B3F79A8DEB0E15BFB34;             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PitchMax_17_9125B41249BC2C4D98DCABB91E63BDB1;             // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawMin_29_5284492D49C04E99ADD7AAA2FF9F0EC5;               // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawMax_30_C76E5E0F4A2C2642DED1E9B6797FE7C7;               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               RandomSeed_21_83FB461B4163DC2E9B897DBE758759BF;           // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NoDestructor)
	TArray<class UInstancedStaticMeshComponent*>       DecoMesh_DO_NOT_TOUCH_49_227F006C4C41CC64B405B089BAEDC9AB;// 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FName, bool>                           SocketNameFlags_54_2B7B5D3A402B1FFE7BAD82A55CA1B212;      // 0x0068(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	class UClass* /*AActor*/                           Actor_67_D126AD46496D37E1AE008B99C209873E;                // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AllowCullDistanceVolume_69_5A7F466B4D0ED1CD68AA5A93A9462940;// 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
