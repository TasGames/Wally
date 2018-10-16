// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ESCAPEFROMWALLY_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define ESCAPEFROMWALLY_Door_generated_h

#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(Z_Param_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(Z_Param_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ADoor, Door); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ADoor, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__DoorSpeed() { return STRUCT_OFFSET(ADoor, DoorSpeed); }


#define EscapeFromWally_Source_EscapeFromWally_Door_h_9_PROLOG
#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_RPC_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_INCLASS \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeFromWally_Source_EscapeFromWally_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_INCLASS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeFromWally_Source_EscapeFromWally_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
