// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ESCAPEFROMWALLY_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define ESCAPEFROMWALLY_PlayerCharacter_generated_h

#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_RPC_WRAPPERS \
	virtual void Lose_Implementation(); \
 \
	DECLARE_FUNCTION(execLose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lose_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseIt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseIt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Lose_Implementation(); \
 \
	DECLARE_FUNCTION(execLose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lose_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseIt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseIt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_EVENT_PARMS
#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_CALLBACK_WRAPPERS
#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerCapsule() { return STRUCT_OFFSET(APlayerCharacter, TriggerCapsule); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APlayerCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__FP_Torch() { return STRUCT_OFFSET(APlayerCharacter, FP_Torch); } \
	FORCEINLINE static uint32 __PPO__SpotLight() { return STRUCT_OFFSET(APlayerCharacter, SpotLight); }


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_9_PROLOG \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_EVENT_PARMS


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_RPC_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_CALLBACK_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_INCLASS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_CALLBACK_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeFromWally_Source_EscapeFromWally_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
