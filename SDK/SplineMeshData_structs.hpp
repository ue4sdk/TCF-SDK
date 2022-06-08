#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "SplineOverwriteMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SplineMeshData.SplineMeshData
// 0x0080
struct FSplineMeshData_FSplineMeshData
{
	TArray<class UStaticMesh*>                         SplineMeshes_3_150A19D1427BB24DF5D37DA7D3993AE9;          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<int>                                        SplineMeshSelectionProbability_23_2FD5150D4F57BFA6E97868A8805E21EC;// 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              DistanceBetweenSplineMeshes_20_D7FF36BC40359B6ECFE616B44F255AE7;// 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  LocationOffset_22_1247D3D6436434C1658D6BAD00DDC454;       // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VerticalOrientation_25_740772604CEA3CAD538323B8C2FA9252;  // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PlaceOnGround_27_CEDD46264C4F47D99C480787F8579201;        // 0x0061(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                Seed_32_CF4698A94C2D3C2323C337B48A11C23E;                 // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FSplineOverwriteMesh>                OverwriteMesh_37_CFC5ABAF49F3CCF5139A68AB6184261B;        // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UStaticMesh*                                 EndMesh_41_FA92AFD642E57842A1358E81F7C5ABDA;              // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
