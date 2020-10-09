// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "plane/planeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplaneGameMode() {}
// Cross Module References
	PLANE_API UClass* Z_Construct_UClass_AplaneGameMode_NoRegister();
	PLANE_API UClass* Z_Construct_UClass_AplaneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_plane();
// End Cross Module References
	void AplaneGameMode::StaticRegisterNativesAplaneGameMode()
	{
	}
	UClass* Z_Construct_UClass_AplaneGameMode_NoRegister()
	{
		return AplaneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AplaneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AplaneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_plane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplaneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "planeGameMode.h" },
		{ "ModuleRelativePath", "planeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AplaneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplaneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AplaneGameMode_Statics::ClassParams = {
		&AplaneGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AplaneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AplaneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AplaneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AplaneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AplaneGameMode, 883000416);
	template<> PLANE_API UClass* StaticClass<AplaneGameMode>()
	{
		return AplaneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AplaneGameMode(Z_Construct_UClass_AplaneGameMode, &AplaneGameMode::StaticClass, TEXT("/Script/plane"), TEXT("AplaneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AplaneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
