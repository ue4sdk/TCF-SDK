// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YBattleEye_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YBattleEye.YBattleEyeControllerComponent.ServerReceivePackageFromClient
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FYBattleEyeReplicatedMessageEntry Data                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYBattleEyeControllerComponent::ServerReceivePackageFromClient(const struct FYBattleEyeReplicatedMessageEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBattleEye.YBattleEyeControllerComponent.ServerReceivePackageFromClient"));

	struct
	{
		struct FYBattleEyeReplicatedMessageEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBattleEye.YBattleEyeControllerComponent.ServerReadyInitialize
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer)
// Parameters:
// bool                           Initialize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYBattleEyeControllerComponent::ServerReadyInitialize(bool Initialize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBattleEye.YBattleEyeControllerComponent.ServerReadyInitialize"));

	struct
	{
		bool                           Initialize;
	} params = {};

	params.Initialize = Initialize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBattleEye.YBattleEyeControllerComponent.ServerAckPackageFromClient
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_HasDefaults)
// Parameters:
// struct FGuid                   pendingMessage                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYBattleEyeControllerComponent::ServerAckPackageFromClient(const struct FGuid& pendingMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBattleEye.YBattleEyeControllerComponent.ServerAckPackageFromClient"));

	struct
	{
		struct FGuid                   pendingMessage;
	} params = {};

	params.pendingMessage = pendingMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBattleEye.YBattleEyeControllerComponent.ClientReceivePackageFromServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FYBattleEyeReplicatedMessageEntry Data                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYBattleEyeControllerComponent::ClientReceivePackageFromServer(const struct FYBattleEyeReplicatedMessageEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBattleEye.YBattleEyeControllerComponent.ClientReceivePackageFromServer"));

	struct
	{
		struct FYBattleEyeReplicatedMessageEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
