// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChaosCloth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 LinearVelocityScale            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          AngularVelocityScale           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FictitiousAngularScale         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale"));

	struct
	{
		struct FVector                 LinearVelocityScale;
		float                          AngularVelocityScale;
		float                          FictitiousAngularScale;
	} params = {};

	params.LinearVelocityScale = LinearVelocityScale;
	params.AngularVelocityScale = AngularVelocityScale;
	params.FictitiousAngularScale = FictitiousAngularScale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          EdgeStiffness                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BendingStiffness               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          AreaStiffness                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear"));

	struct
	{
		float                          EdgeStiffness;
		float                          BendingStiffness;
		float                          AreaStiffness;
	} params = {};

	params.EdgeStiffness = EdgeStiffness;
	params.BendingStiffness = BendingStiffness;
	params.AreaStiffness = AreaStiffness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TetherStiffness                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear"));

	struct
	{
		float                          TetherStiffness;
	} params = {};

	params.TetherStiffness = TetherStiffness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               TetherStiffness                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment"));

	struct
	{
		struct FVector2D               TetherStiffness;
	} params = {};

	params.TetherStiffness = TetherStiffness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          GravityScale                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsGravityOverridden           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 GravityOverride                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetGravity"));

	struct
	{
		float                          GravityScale;
		bool                           bIsGravityOverridden;
		struct FVector                 GravityOverride;
	} params = {};

	params.GravityScale = GravityScale;
	params.bIsGravityOverridden = bIsGravityOverridden;
	params.GravityOverride = GravityOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DampingCoefficient             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetDamping(float DampingCoefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetDamping"));

	struct
	{
		float                          DampingCoefficient;
	} params = {};

	params.DampingCoefficient = DampingCoefficient;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          CollisionThickness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FrictionCoefficient            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseCCD                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SelfCollisionThickness         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetCollision"));

	struct
	{
		float                          CollisionThickness;
		float                          FrictionCoefficient;
		bool                           bUseCCD;
		float                          SelfCollisionThickness;
	} params = {};

	params.CollisionThickness = CollisionThickness;
	params.FrictionCoefficient = FrictionCoefficient;
	params.bUseCCD = bUseCCD;
	params.SelfCollisionThickness = SelfCollisionThickness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AnimDriveStiffness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear"));

	struct
	{
		float                          AnimDriveStiffness;
	} params = {};

	params.AnimDriveStiffness = AnimDriveStiffness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               AnimDriveStiffness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               AnimDriveDamping               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive"));

	struct
	{
		struct FVector2D               AnimDriveStiffness;
		struct FVector2D               AnimDriveDamping;
	} params = {};

	params.AnimDriveStiffness = AnimDriveStiffness;
	params.AnimDriveDamping = AnimDriveDamping;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          DragCoefficient                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          LiftCoefficient                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WindVelocity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics"));

	struct
	{
		float                          DragCoefficient;
		float                          LiftCoefficient;
		struct FVector                 WindVelocity;
	} params = {};

	params.DragCoefficient = DragCoefficient;
	params.LiftCoefficient = LiftCoefficient;
	params.WindVelocity = WindVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bReset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport"));

	struct
	{
		bool                           bReset;
		bool                           bTeleport;
	} params = {};

	params.bReset = bReset;
	params.bTeleport = bTeleport;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
