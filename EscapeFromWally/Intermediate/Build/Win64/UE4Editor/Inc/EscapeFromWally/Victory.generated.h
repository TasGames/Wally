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
#ifdef ESCAPEFROMWALLY_Victory_generated_h
#error "Victory.generated.h already included, missing '#pragma once' in Victory.h"
#endif
#define ESCAPEFROMWALLY_Victory_generated_h

#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictory(); \
	friend struct Z_Construct_UClass_AVictory_Statics; \
public: \
	DECLARE_CLASS(AVictory, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(AVictory)


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVictory(); \
	friend struct Z_Construct_UClass_AVictory_Statics; \
public: \
	DECLARE_CLASS(AVictory, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(AVictory)


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVictory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictory(AVictory&&); \
	NO_API AVictory(const AVictory&); \
public:


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictory(AVictory&&); \
	NO_API AVictory(const AVictory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictory)


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VictoryBox() { return STRUCT_OFFSET(AVictory, VictoryBox); }


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_9_PROLOG
#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_RPC_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_INCLASS \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeFromWally_Source_EscapeFromWally_Victory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_INCLASS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Victory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeFromWally_Source_EscapeFromWally_Victory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
