#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NetDBPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetDBPlugin.AsyncConnectToDatabase
// 0x0020 (0x0058 - 0x0038)
class UAsyncConnectToDatabase : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    onSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFail;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.AsyncConnectToDatabase"));
		return ptr;
	}


	static class UAsyncConnectToDatabase* PostgresConnectAsync(const struct FString& database, const struct FString& Username, const struct FString& Password, const struct FString& ip, int Port);
};


// Class NetDBPlugin.AsyncExecutePreparedQuery
// 0x0020 (0x0058 - 0x0038)
class UAsyncExecutePreparedQuery : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    onSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFail;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.AsyncExecutePreparedQuery"));
		return ptr;
	}


	static class UAsyncExecutePreparedQuery* ExecutePreparedQueryAsync(class UDatabaseConnection* Connection, class UPreparedQuery* Query);
};


// Class NetDBPlugin.AsyncExecuteQuery
// 0x0020 (0x0058 - 0x0038)
class UAsyncExecuteQuery : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    onSuccess;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFail;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.AsyncExecuteQuery"));
		return ptr;
	}


	static class UAsyncExecuteQuery* ExecuteQueryAsync(class UDatabaseConnection* Connection, const struct FString& Query);
};


// Class NetDBPlugin.DatabaseConnection
// 0x0040 (0x0070 - 0x0030)
class UDatabaseConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.DatabaseConnection"));
		return ptr;
	}

};


// Class NetDBPlugin.NetDBPluginBPLibrary
// 0x0000 (0x0030 - 0x0030)
class UNetDBPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.NetDBPluginBPLibrary"));
		return ptr;
	}


	static class UPreparedQuery* PrepareQuery(const struct FString& Query, TArray<class UDataObject*> arguements);
	static class UDatabaseConnection* PostgresConnect(const struct FString& database, const struct FString& Username, const struct FString& Password, const struct FString& ip, int Port, bool* bWasSuccessful);
	static EDataType GetRowColumnType(class UQueryRow* row, const struct FString& ColumnName);
	static struct FString GetRowColumnAsString(class UQueryRow* row, const struct FString& ColumnName);
	static int GetRowColumnAsInt(class UQueryRow* row, const struct FString& ColumnName);
	static float GetRowColumnAsFloat(class UQueryRow* row, const struct FString& ColumnName);
	static struct FString GetRowColumnAsChar(class UQueryRow* row, const struct FString& ColumnName);
	static bool GetRowColumnAsBool(class UQueryRow* row, const struct FString& ColumnName);
	static TArray<class UQueryRow*> ExecuteQuery(class UDatabaseConnection* Connection, const struct FString& Query, bool* bWasSuccessful);
	static TArray<class UQueryRow*> ExecutePreparedQuery(class UDatabaseConnection* Connection, class UPreparedQuery* Query, bool* bWasSuccessful);
	static class UDataObject* CreateDataObjectFromString(const struct FString& Value);
	static class UDataObject* CreateDataObjectFromInt(int Value);
	static class UDataObject* CreateDataObjectFromFloat(float Value);
	static class UDataObject* CreateDataObjectFromBool(bool Value);
};


// Class NetDBPlugin.PreparedQuery
// 0x0020 (0x0050 - 0x0030)
class UPreparedQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.PreparedQuery"));
		return ptr;
	}

};


// Class NetDBPlugin.DataObject
// 0x0020 (0x0050 - 0x0030)
class UDataObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.DataObject"));
		return ptr;
	}

};


// Class NetDBPlugin.QueryRow
// 0x0010 (0x0040 - 0x0030)
class UQueryRow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetDBPlugin.QueryRow"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
