// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLANE_planeGameMode_generated_h
#error "planeGameMode.generated.h already included, missing '#pragma once' in planeGameMode.h"
#endif
#define PLANE_planeGameMode_generated_h

#define plane_Source_plane_planeGameMode_h_12_SPARSE_DATA
#define plane_Source_plane_planeGameMode_h_12_RPC_WRAPPERS
#define plane_Source_plane_planeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define plane_Source_plane_planeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplaneGameMode(); \
	friend struct Z_Construct_UClass_AplaneGameMode_Statics; \
public: \
	DECLARE_CLASS(AplaneGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/plane"), PLANE_API) \
	DECLARE_SERIALIZER(AplaneGameMode)


#define plane_Source_plane_planeGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAplaneGameMode(); \
	friend struct Z_Construct_UClass_AplaneGameMode_Statics; \
public: \
	DECLARE_CLASS(AplaneGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/plane"), PLANE_API) \
	DECLARE_SERIALIZER(AplaneGameMode)


#define plane_Source_plane_planeGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLANE_API AplaneGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplaneGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLANE_API, AplaneGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplaneGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLANE_API AplaneGameMode(AplaneGameMode&&); \
	PLANE_API AplaneGameMode(const AplaneGameMode&); \
public:


#define plane_Source_plane_planeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLANE_API AplaneGameMode(AplaneGameMode&&); \
	PLANE_API AplaneGameMode(const AplaneGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLANE_API, AplaneGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplaneGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplaneGameMode)


#define plane_Source_plane_planeGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define plane_Source_plane_planeGameMode_h_9_PROLOG
#define plane_Source_plane_planeGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plane_Source_plane_planeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	plane_Source_plane_planeGameMode_h_12_SPARSE_DATA \
	plane_Source_plane_planeGameMode_h_12_RPC_WRAPPERS \
	plane_Source_plane_planeGameMode_h_12_INCLASS \
	plane_Source_plane_planeGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define plane_Source_plane_planeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plane_Source_plane_planeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	plane_Source_plane_planeGameMode_h_12_SPARSE_DATA \
	plane_Source_plane_planeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	plane_Source_plane_planeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	plane_Source_plane_planeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLANE_API UClass* StaticClass<class AplaneGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID plane_Source_plane_planeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
