#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NetDBPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetDBPlugin.AsyncConnectToDatabase
// 0x0020 (0x0050 - 0x0030)
class UAsyncConnectToDatabase : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0040(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.AsyncConnectToDatabase");
		return ptr;
	}


	static class UAsyncConnectToDatabase* PostgresConnectAsync(const struct FString& database, const struct FString& Username, const struct FString& Password, const struct FString& ip, int Port);
};


// Class NetDBPlugin.AsyncExecutePreparedQuery
// 0x0020 (0x0050 - 0x0030)
class UAsyncExecutePreparedQuery : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0040(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.AsyncExecutePreparedQuery");
		return ptr;
	}


	static class UAsyncExecutePreparedQuery* ExecutePreparedQueryAsync(class UDatabaseConnection* Connection, class UPreparedQuery* Query);
};


// Class NetDBPlugin.AsyncExecuteQuery
// 0x0020 (0x0050 - 0x0030)
class UAsyncExecuteQuery : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0040(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.AsyncExecuteQuery");
		return ptr;
	}


	static class UAsyncExecuteQuery* ExecuteQueryAsync(class UDatabaseConnection* Connection, const struct FString& Query);
};


// Class NetDBPlugin.DatabaseConnection
// 0x0040 (0x0068 - 0x0028)
class UDatabaseConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.DatabaseConnection");
		return ptr;
	}

};


// Class NetDBPlugin.NetDBPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UNetDBPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.NetDBPluginBPLibrary");
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
// 0x0020 (0x0048 - 0x0028)
class UPreparedQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.PreparedQuery");
		return ptr;
	}

};


// Class NetDBPlugin.DataObject
// 0x0020 (0x0048 - 0x0028)
class UDataObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.DataObject");
		return ptr;
	}

};


// Class NetDBPlugin.QueryRow
// 0x0010 (0x0038 - 0x0028)
class UQueryRow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class NetDBPlugin.QueryRow");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
