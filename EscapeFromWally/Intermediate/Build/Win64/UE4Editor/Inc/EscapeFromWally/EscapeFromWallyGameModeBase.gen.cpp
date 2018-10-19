// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeFromWally/EscapeFromWallyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeFromWallyGameModeBase() {}
// Cross Module References
	ESCAPEFROMWALLY_API UClass* Z_Construct_UClass_AEscapeFromWallyGameModeBase_NoRegister();
	ESCAPEFROMWALLY_API UClass* Z_Construct_UClass_AEscapeFromWallyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeFromWally();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AEscapeFromWallyGameModeBase::StaticRegisterNativesAEscapeFromWallyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeFromWallyGameModeBase_NoRegister()
	{
		return AEscapeFromWallyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeFromWally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EscapeFromWallyGameModeBase.h" },
		{ "ModuleRelativePath", "EscapeFromWallyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscapeFromWallyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AEscapeFromWallyGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Totems" },
		{ "ModuleRelativePath", "EscapeFromWallyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_PlayerHUDClass = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerHUDClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AEscapeFromWallyGameModeBase, PlayerHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::NewProp_PlayerHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeFromWallyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::ClassParams = {
		&AEscapeFromWallyGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeFromWallyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeFromWallyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeFromWallyGameModeBase, 2705695174);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeFromWallyGameModeBase(Z_Construct_UClass_AEscapeFromWallyGameModeBase, &AEscapeFromWallyGameModeBase::StaticClass, TEXT("/Script/EscapeFromWally"), TEXT("AEscapeFromWallyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeFromWallyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
