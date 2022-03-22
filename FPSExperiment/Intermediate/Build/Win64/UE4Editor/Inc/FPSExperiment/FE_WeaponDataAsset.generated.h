// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSEXPERIMENT_FE_WeaponDataAsset_generated_h
#error "FE_WeaponDataAsset.generated.h already included, missing '#pragma once' in FE_WeaponDataAsset.h"
#endif
#define FPSEXPERIMENT_FE_WeaponDataAsset_generated_h

#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_SPARSE_DATA
#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_RPC_WRAPPERS
#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFE_WeaponDataAsset(); \
	friend struct Z_Construct_UClass_UFE_WeaponDataAsset_Statics; \
public: \
	DECLARE_CLASS(UFE_WeaponDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSExperiment"), NO_API) \
	DECLARE_SERIALIZER(UFE_WeaponDataAsset)


#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFE_WeaponDataAsset(); \
	friend struct Z_Construct_UClass_UFE_WeaponDataAsset_Statics; \
public: \
	DECLARE_CLASS(UFE_WeaponDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSExperiment"), NO_API) \
	DECLARE_SERIALIZER(UFE_WeaponDataAsset)


#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFE_WeaponDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFE_WeaponDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFE_WeaponDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFE_WeaponDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFE_WeaponDataAsset(UFE_WeaponDataAsset&&); \
	NO_API UFE_WeaponDataAsset(const UFE_WeaponDataAsset&); \
public:


#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFE_WeaponDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFE_WeaponDataAsset(UFE_WeaponDataAsset&&); \
	NO_API UFE_WeaponDataAsset(const UFE_WeaponDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFE_WeaponDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFE_WeaponDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFE_WeaponDataAsset)


#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_PRIVATE_PROPERTY_OFFSET
#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_20_PROLOG
#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_PRIVATE_PROPERTY_OFFSET \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_SPARSE_DATA \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_RPC_WRAPPERS \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_INCLASS \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_PRIVATE_PROPERTY_OFFSET \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_SPARSE_DATA \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_INCLASS_NO_PURE_DECLS \
	FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSEXPERIMENT_API UClass* StaticClass<class UFE_WeaponDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSExperiment_Source_FPSExperiment_FE_WeaponDataAsset_h


#define FOREACH_ENUM_WEAPONTYPE(op) \
	op(HitScan) \
	op(Projectile) \
	op(Scatter) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
