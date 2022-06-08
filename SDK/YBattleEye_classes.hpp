#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YBattleEye_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YBattleEye.YBattleEyeInstance
// 0x0008 (0x0038 - 0x0030)
class UYBattleEyeInstance : public UObject
{
public:
	bool                                               m_dataSuccessfullyCreated;                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_isActive;                                               // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_isKickActive;                                           // 0x0032(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_isKickReasonChecksActive;                               // 0x0033(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeInstance"));
		return ptr;
	}

};


// Class YBattleEye.YBattleEyeClientInstance
// 0x0038 (0x0070 - 0x0038)
class UYBattleEyeClientInstance : public UYBattleEyeInstance
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeClientInstance"));
		return ptr;
	}

};


// Class YBattleEye.YBattleEyeControllerComponent
// 0x0088 (0x0140 - 0x00B8)
class UYBattleEyeControllerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET
	struct FYBattleEyeMessageSendingStatsData          m_messageStats;                                           // 0x00F0(0x000C) (CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              m_timestampSendingBattleEyeMessages;                      // 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_isReadyInitialize;                                      // 0x0100(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_clientReadyInitialize;                                  // 0x0101(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	struct FYPlayerBattleEyePlayerInformation          m_cachedPlayerInformation;                                // 0x0108(0x0028) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              m_lastEmptyBattleyeQueueTime;                             // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              m_lastEmptyNetworkMessageQueueTime;                       // 0x0134(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeControllerComponent"));
		return ptr;
	}


	void ServerReceivePackageFromClient(const struct FYBattleEyeReplicatedMessageEntry& Data);
	void ServerReadyInitialize(bool Initialize);
	void ServerAckPackageFromClient(const struct FGuid& pendingMessage);
	void ClientReceivePackageFromServer(const struct FYBattleEyeReplicatedMessageEntry& Data);
};


// Class YBattleEye.YBattleEyeFunctions
// 0x0000 (0x0030 - 0x0030)
class UYBattleEyeFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeFunctions"));
		return ptr;
	}

};


// Class YBattleEye.YInterfaceBattleEyeRetrivalInterface
// 0x0000 (0x0030 - 0x0030)
class UYInterfaceBattleEyeRetrivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YInterfaceBattleEyeRetrivalInterface"));
		return ptr;
	}

};


// Class YBattleEye.YBattleEyeNullInstance
// 0x0000 (0x0038 - 0x0038)
class UYBattleEyeNullInstance : public UYBattleEyeInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeNullInstance"));
		return ptr;
	}

};


// Class YBattleEye.YBattleEyeServerInstance
// 0x0050 (0x0088 - 0x0038)
class UYBattleEyeServerInstance : public UYBattleEyeInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YBattleEye.YBattleEyeServerInstance"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
