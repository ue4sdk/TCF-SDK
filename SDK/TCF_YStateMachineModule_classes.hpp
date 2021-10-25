#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YStateMachineModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YStateMachineModule.YHierarchicalStateBase
// 0x0048 (0x0070 - 0x0028)
class UYHierarchicalStateBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    RequestStateChangeDelegate;                               // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    RequestStatePopDelegate;                                  // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0038(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    StateExitedDelegate;                                      // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0048(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    StateEnteredDelegate;                                     // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0058(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               m_pushOnStack;                                            // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_currentlyActive;                                        // 0x0069(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YHierarchicalStateBase");
		return ptr;
	}


	void StateExitTransitionDoneSignature__DelegateSignature(class UYHierarchicalStateBase* exitedState);
	void StateEnterTransitionDoneSignature__DelegateSignature(class UYHierarchicalStateBase* enteredState);
	void RequestStatePopSignature__DelegateSignature();
	void RequestStateChangeSignature__DelegateSignature(class UYHierarchicalStateBase* newState, bool emptyStack);
	void OnStateExitedEvent();
	void OnStateEnteredEvent();
};


// Class YStateMachineModule.YHierarchicalStateMachine
// 0x0010 (0x0038 - 0x0028)
class UYHierarchicalStateMachine : public UObject
{
public:
	TArray<class UYHierarchicalStateBase*>             m_stateStack;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YHierarchicalStateMachine");
		return ptr;
	}


	void RequestStateStackPop(bool removeOnlyIfMoreThenOne);
	void RequestStateChange(class UYHierarchicalStateBase* newState, bool emptyScreenStack);
	void OnStateRequestRemovalFromStack();
	void OnStateExitDone(class UYHierarchicalStateBase* exitedState);
	void OnStateEnterPushDone(class UYHierarchicalStateBase* enteredState);
	void OnStateEnterDone(class UYHierarchicalStateBase* enteredState);
	class UYHierarchicalStateBase* GetStateFromStack(int Index);
	int GetNumberOfStatesOnStack();
	class UYHierarchicalStateBase* GetActiveState();
};


// Class YStateMachineModule.YTestStateBase
// 0x0000 (0x0070 - 0x0070)
class UYTestStateBase : public UYHierarchicalStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YTestStateBase");
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlin
// 0x0000 (0x0070 - 0x0070)
class UYTestStateBerlin : public UYTestStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YTestStateBerlin");
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlinWedding
// 0x0000 (0x0070 - 0x0070)
class UYTestStateBerlinWedding : public UYTestStateBerlin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YTestStateBerlinWedding");
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlinKreuzberg
// 0x0000 (0x0070 - 0x0070)
class UYTestStateBerlinKreuzberg : public UYTestStateBerlin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YTestStateBerlinKreuzberg");
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateCostaDelSol
// 0x0000 (0x0070 - 0x0070)
class UYTestStateCostaDelSol : public UYTestStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YStateMachineModule.YTestStateCostaDelSol");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
