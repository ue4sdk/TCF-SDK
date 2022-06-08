#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YStateMachineModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YStateMachineModule.YHierarchicalStateBase
// 0x0048 (0x0078 - 0x0030)
class UYHierarchicalStateBase : public UObject
{
public:
	struct FMulticastScriptDelegate                    RequestStateChangeDelegate;                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    RequestStatePopDelegate;                                  // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    StateExitedDelegate;                                      // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    StateEnteredDelegate;                                     // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               m_pushOnStack;                                            // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               m_currentlyActive;                                        // 0x0071(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YHierarchicalStateBase"));
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
// 0x0010 (0x0040 - 0x0030)
class UYHierarchicalStateMachine : public UObject
{
public:
	TArray<class UYHierarchicalStateBase*>             m_stateStack;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YHierarchicalStateMachine"));
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
// 0x0000 (0x0078 - 0x0078)
class UYTestStateBase : public UYHierarchicalStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YTestStateBase"));
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlin
// 0x0000 (0x0078 - 0x0078)
class UYTestStateBerlin : public UYTestStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YTestStateBerlin"));
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlinWedding
// 0x0000 (0x0078 - 0x0078)
class UYTestStateBerlinWedding : public UYTestStateBerlin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YTestStateBerlinWedding"));
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateBerlinKreuzberg
// 0x0000 (0x0078 - 0x0078)
class UYTestStateBerlinKreuzberg : public UYTestStateBerlin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YTestStateBerlinKreuzberg"));
		return ptr;
	}

};


// Class YStateMachineModule.YTestStateCostaDelSol
// 0x0000 (0x0078 - 0x0078)
class UYTestStateCostaDelSol : public UYTestStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YStateMachineModule.YTestStateCostaDelSol"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
