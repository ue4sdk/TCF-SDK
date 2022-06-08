// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NetDBPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NetDBPlugin.AsyncConnectToDatabase.PostgresConnectAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 database                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Username                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ip                             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Port                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAsyncConnectToDatabase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAsyncConnectToDatabase* UAsyncConnectToDatabase::PostgresConnectAsync(const struct FString& database, const struct FString& Username, const struct FString& Password, const struct FString& ip, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.AsyncConnectToDatabase.PostgresConnectAsync"));

	struct
	{
		struct FString                 database;
		struct FString                 Username;
		struct FString                 Password;
		struct FString                 ip;
		int                            Port;
		class UAsyncConnectToDatabase* ReturnValue;
	} params = {};

	params.database = database;
	params.Username = Username;
	params.Password = Password;
	params.ip = ip;
	params.Port = Port;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.AsyncExecutePreparedQuery.ExecutePreparedQueryAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDatabaseConnection*     Connection                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPreparedQuery*          Query                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAsyncExecutePreparedQuery* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAsyncExecutePreparedQuery* UAsyncExecutePreparedQuery::ExecutePreparedQueryAsync(class UDatabaseConnection* Connection, class UPreparedQuery* Query)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.AsyncExecutePreparedQuery.ExecutePreparedQueryAsync"));

	struct
	{
		class UDatabaseConnection*     Connection;
		class UPreparedQuery*          Query;
		class UAsyncExecutePreparedQuery* ReturnValue;
	} params = {};

	params.Connection = Connection;
	params.Query = Query;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.AsyncExecuteQuery.ExecuteQueryAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDatabaseConnection*     Connection                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Query                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAsyncExecuteQuery*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAsyncExecuteQuery* UAsyncExecuteQuery::ExecuteQueryAsync(class UDatabaseConnection* Connection, const struct FString& Query)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.AsyncExecuteQuery.ExecuteQueryAsync"));

	struct
	{
		class UDatabaseConnection*     Connection;
		struct FString                 Query;
		class UAsyncExecuteQuery*      ReturnValue;
	} params = {};

	params.Connection = Connection;
	params.Query = Query;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.PrepareQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Query                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UDataObject*>     arguements                     (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// class UPreparedQuery*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPreparedQuery* UNetDBPluginBPLibrary::PrepareQuery(const struct FString& Query, TArray<class UDataObject*> arguements)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.PrepareQuery"));

	struct
	{
		struct FString                 Query;
		TArray<class UDataObject*>     arguements;
		class UPreparedQuery*          ReturnValue;
	} params = {};

	params.Query = Query;
	params.arguements = arguements;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.PostgresConnect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 database                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Username                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ip                             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Port                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDatabaseConnection*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDatabaseConnection* UNetDBPluginBPLibrary::PostgresConnect(const struct FString& database, const struct FString& Username, const struct FString& Password, const struct FString& ip, int Port, bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.PostgresConnect"));

	struct
	{
		bool                           bWasSuccessful;
		struct FString                 database;
		struct FString                 Username;
		struct FString                 Password;
		struct FString                 ip;
		int                            Port;
		class UDatabaseConnection*     ReturnValue;
	} params = {};

	params.database = database;
	params.Username = Username;
	params.Password = Password;
	params.ip = ip;
	params.Port = Port;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = params.bWasSuccessful;

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDataType                      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EDataType UNetDBPluginBPLibrary::GetRowColumnType(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnType"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		EDataType                      ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UNetDBPluginBPLibrary::GetRowColumnAsString(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsString"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		struct FString                 ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UNetDBPluginBPLibrary::GetRowColumnAsInt(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsInt"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		int                            ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UNetDBPluginBPLibrary::GetRowColumnAsFloat(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsFloat"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		float                          ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsChar
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UNetDBPluginBPLibrary::GetRowColumnAsChar(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsChar"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		struct FString                 ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UQueryRow*               row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ColumnName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UNetDBPluginBPLibrary::GetRowColumnAsBool(class UQueryRow* row, const struct FString& ColumnName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.GetRowColumnAsBool"));

	struct
	{
		class UQueryRow*               row;
		struct FString                 ColumnName;
		bool                           ReturnValue;
	} params = {};

	params.row = row;
	params.ColumnName = ColumnName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.ExecuteQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDatabaseConnection*     Connection                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Query                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UQueryRow*>       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UQueryRow*> UNetDBPluginBPLibrary::ExecuteQuery(class UDatabaseConnection* Connection, const struct FString& Query, bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.ExecuteQuery"));

	struct
	{
		bool                           bWasSuccessful;
		class UDatabaseConnection*     Connection;
		struct FString                 Query;
		TArray<class UQueryRow*>       ReturnValue;
	} params = {};

	params.Connection = Connection;
	params.Query = Query;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = params.bWasSuccessful;

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.ExecutePreparedQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDatabaseConnection*     Connection                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPreparedQuery*          Query                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UQueryRow*>       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UQueryRow*> UNetDBPluginBPLibrary::ExecutePreparedQuery(class UDatabaseConnection* Connection, class UPreparedQuery* Query, bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.ExecutePreparedQuery"));

	struct
	{
		bool                           bWasSuccessful;
		class UDatabaseConnection*     Connection;
		class UPreparedQuery*          Query;
		TArray<class UQueryRow*>       ReturnValue;
	} params = {};

	params.Connection = Connection;
	params.Query = Query;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = params.bWasSuccessful;

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataObject*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromString(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromString"));

	struct
	{
		struct FString                 Value;
		class UDataObject*             ReturnValue;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataObject*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromInt(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromInt"));

	struct
	{
		int                            Value;
		class UDataObject*             ReturnValue;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataObject*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromFloat"));

	struct
	{
		float                          Value;
		class UDataObject*             ReturnValue;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataObject*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromBool(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NetDBPlugin.NetDBPluginBPLibrary.CreateDataObjectFromBool"));

	struct
	{
		bool                           Value;
		class UDataObject*             ReturnValue;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
