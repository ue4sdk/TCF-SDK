#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MS_HintMarkerReplicatedData_ST.MS_HintMarkerReplicatedData_ST
// 0x0018
struct FMS_HintMarkerReplicatedData_ST
{
	struct FName                                       ActiveMarkerId_9_7B44AE714CA2F178985EFB893A89AE89;        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FTransform>                          HintTransforms_17_4C1A67004B0583AF2B9C328BF93AF29A;       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
