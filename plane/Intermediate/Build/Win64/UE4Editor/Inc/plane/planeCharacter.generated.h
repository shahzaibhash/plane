// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLANE_planeCharacter_generated_h
#error "planeCharacter.generated.h already included, missing '#pragma once' in planeCharacter.h"
#endif
#define PLANE_planeCharacter_generated_h

#define plane_Source_plane_planeCharacter_h_12_SPARSE_DATA
#define plane_Source_plane_planeCharacter_h_12_RPC_WRAPPERS
#define plane_Source_plane_planeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define plane_Source_plane_planeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplaneCharacter(); \
	friend struct Z_Construct_UClass_AplaneCharacter_Statics; \
public: \
	DECLARE_CLASS(AplaneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plane"), NO_API) \
	DECLARE_SERIALIZER(AplaneCharacter)


#define plane_Source_plane_planeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAplaneCharacter(); \
	friend struct Z_Construct_UClass_AplaneCharacter_Statics; \
public: \
	DECLARE_CLASS(AplaneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plane"), NO_API) \
	DECLARE_SERIALIZER(AplaneCharacter)


#define plane_Source_plane_planeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplaneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplaneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplaneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplaneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplaneCharacter(AplaneCharacter&&); \
	NO_API AplaneCharacter(const AplaneCharacter&); \
public:


#define plane_Source_plane_planeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplaneCharacter(AplaneCharacter&&); \
	NO_API AplaneCharacter(const AplaneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplaneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplaneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplaneCharacter)


#define plane_Source_plane_planeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AplaneCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AplaneCharacter, CameraBoom); }


#define plane_Source_plane_planeCharacter_h_9_PROLOG
#define plane_Source_plane_planeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plane_Source_plane_planeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	plane_Source_plane_planeCharacter_h_12_SPARSE_DATA \
	plane_Source_plane_planeCharacter_h_12_RPC_WRAPPERS \
	plane_Source_plane_planeCharacter_h_12_INCLASS \
	plane_Source_plane_planeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define plane_Source_plane_planeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plane_Source_plane_planeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	plane_Source_plane_planeCharacter_h_12_SPARSE_DATA \
	plane_Source_plane_planeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	plane_Source_plane_planeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	plane_Source_plane_planeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLANE_API UClass* StaticClass<class AplaneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID plane_Source_plane_planeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
