#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RigVM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RigVM.RigVM
// 0x02D0 (0x0300 - 0x0030)
class URigVM : public UObject
{
public:
	struct FRigVMMemoryContainer                       WorkMemoryStorage;                                        // 0x0030(0x00A0) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FRigVMMemoryContainer                       LiteralMemoryStorage;                                     // 0x00D8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FRigVMByteCode                              ByteCodeStorage;                                          // 0x0180(0x0030) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET
	struct FRigVMInstructionArray                      Instructions;                                             // 0x01B8(0x0010) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	struct FRigVMExecuteContext                        Context;                                                  // 0x01C8(0x0058) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FName>                               FunctionNamesStorage;                                     // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0230(0x0020) MISSED OFFSET
	TArray<struct FRigVMParameter>                     Parameters;                                               // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            ParametersNameMap;                                        // 0x0260(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x48];                                      // 0x02B0(0x0048) MISSED OFFSET
	class URigVM*                                      DeferredVMToCopy;                                         // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RigVM.RigVM"));
		return ptr;
	}


	void SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex);
	void SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int InArrayIndex);
	void SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int InArrayIndex);
	void SetParameterValueString(const struct FName& InParameterName, const struct FString& InValue, int InArrayIndex);
	void SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int InArrayIndex);
	void SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int InArrayIndex);
	void SetParameterValueInt(const struct FName& InParameterName, int InValue, int InArrayIndex);
	void SetParameterValueFloat(const struct FName& InParameterName, float InValue, int InArrayIndex);
	void SetParameterValueBool(const struct FName& InParameterName, bool InValue, int InArrayIndex);
	struct FString GetRigVMFunctionName(int InFunctionIndex);
	struct FVector2D GetParameterValueVector2D(const struct FName& InParameterName, int InArrayIndex);
	struct FVector GetParameterValueVector(const struct FName& InParameterName, int InArrayIndex);
	struct FTransform GetParameterValueTransform(const struct FName& InParameterName, int InArrayIndex);
	struct FString GetParameterValueString(const struct FName& InParameterName, int InArrayIndex);
	struct FQuat GetParameterValueQuat(const struct FName& InParameterName, int InArrayIndex);
	struct FName GetParameterValueName(const struct FName& InParameterName, int InArrayIndex);
	int GetParameterValueInt(const struct FName& InParameterName, int InArrayIndex);
	float GetParameterValueFloat(const struct FName& InParameterName, int InArrayIndex);
	bool GetParameterValueBool(const struct FName& InParameterName, int InArrayIndex);
	int GetParameterArraySize(const struct FName& InParameterName);
	bool Execute(const struct FName& InEntryName);
	int AddRigVMFunction(class UScriptStruct* InRigVMStruct, const struct FName& InMethodName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
