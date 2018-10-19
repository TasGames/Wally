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
#ifdef ESCAPEFROMWALLY_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define ESCAPEFROMWALLY_Collectable_generated_h

#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_RPC_WRAPPERS \
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


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeFromWally"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public:


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable)


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ACollectable, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__CollectMesh() { return STRUCT_OFFSET(ACollectable, CollectMesh); } \
	FORCEINLINE static uint32 __PPO__V() { return STRUCT_OFFSET(ACollectable, V); }


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_10_PROLOG
#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_RPC_WRAPPERS \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_INCLASS \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_INCLASS_NO_PURE_DECLS \
	EscapeFromWally_Source_EscapeFromWally_Collectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeFromWally_Source_EscapeFromWally_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
