#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DLSSBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DLSSBlueprint.DLSSLibrary
// 0x0000 (0x0030 - 0x0030)
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DLSSBlueprint.DLSSLibrary"));
		return ptr;
	}


	static void SetDLSSSharpness(float Sharpness);
	static void SetDLSSMode(EUDLSSMode DLSSMode);
	static EUDLSSSupport QueryDLSSSupport();
	static bool IsDLSSSupported();
	static bool IsDLSSModeSupported(EUDLSSMode DLSSMode);
	static bool IsDLAAEnabled();
	static TArray<EUDLSSMode> GetSupportedDLSSModes();
	static float GetDLSSSharpness();
	static void GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	static void GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
	static EUDLSSMode GetDLSSMode();
	static void GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor);
	static EUDLSSMode GetDefaultDLSSMode();
	static void EnableDLAA(bool bEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
