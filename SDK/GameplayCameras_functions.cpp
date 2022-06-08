// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameplayCameras_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMatineeCameraShake*/ ShakeClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent* SourceComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ECameraShakePlaySpace          PlaySpace                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                UserPlaySpaceRot               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* /*UMatineeCameraShake*/ ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource"));

	struct
	{
		class APlayerCameraManager*    PlayerCameraManager;
		class UClass* /*UMatineeCameraShake*/ ShakeClass;
		class UCameraShakeSourceComponent* SourceComponent;
		float                          Scale;
		ECameraShakePlaySpace          PlaySpace;
		struct FRotator                UserPlaySpaceRot;
		class UMatineeCameraShake*     ReturnValue;
	} params = {};

	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UMatineeCameraShake*/ ShakeClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ECameraShakePlaySpace          PlaySpace                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                UserPlaySpaceRot               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* /*UMatineeCameraShake*/ ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake"));

	struct
	{
		class APlayerCameraManager*    PlayerCameraManager;
		class UClass* /*UMatineeCameraShake*/ ShakeClass;
		float                          Scale;
		ECameraShakePlaySpace          PlaySpace;
		struct FRotator                UserPlaySpaceRot;
		class UMatineeCameraShake*     ReturnValue;
	} params = {};

	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.ReceiveStopShake"));

	struct
	{
		bool                           bImmediately;
	} params = {};

	params.bImmediately = bImmediately;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.ReceivePlayShake"));

	struct
	{
		float                          Scale;
	} params = {};

	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMatineeCameraShake::ReceiveIsFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMinimalViewInfo        POV                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FMinimalViewInfo        ModifiedPOV                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake"));

	struct
	{
		float                          DeltaTime;
		float                          Alpha;
		struct FMinimalViewInfo        POV;
		struct FMinimalViewInfo        ModifiedPOV;
	} params = {};

	params.DeltaTime = DeltaTime;
	params.Alpha = Alpha;
	params.POV = POV;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UCameraShakeBase*        CameraShake                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake"));

	struct
	{
		class UCameraShakeBase*        CameraShake;
		class UMatineeCameraShake*     ReturnValue;
	} params = {};

	params.CameraShake = CameraShake;

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
