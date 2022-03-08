// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSEXPERIMENT_FPSExperimentProjectile_generated_h
#error "FPSExperimentProjectile.generated.h already included, missing '#pragma once' in FPSExperimentProjectile.h"
#endif
#define FPSEXPERIMENT_FPSExperimentProjectile_generated_h

#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_SPARSE_DATA
#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExperimentProjectile(); \
	friend struct Z_Construct_UClass_AFPSExperimentProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSExperimentProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSExperiment"), NO_API) \
	DECLARE_SERIALIZER(AFPSExperimentProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExperimentProjectile(); \
	friend struct Z_Construct_UClass_AFPSExperimentProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSExperimentProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSExperiment"), NO_API) \
	DECLARE_SERIALIZER(AFPSExperimentProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExperimentProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExperimentProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExperimentProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExperimentProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExperimentProjectile(AFPSExperimentProjectile&&); \
	NO_API AFPSExperimentProjectile(const AFPSExperimentProjectile&); \
public:


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExperimentProjectile(AFPSExperimentProjectile&&); \
	NO_API AFPSExperimentProjectile(const AFPSExperimentProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExperimentProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExperimentProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExperimentProjectile)


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPSExperimentProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPSExperimentProjectile, ProjectileMovement); }


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_12_PROLOG
#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_SPARSE_DATA \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_RPC_WRAPPERS \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_INCLASS \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_SPARSE_DATA \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSEXPERIMENT_API UClass* StaticClass<class AFPSExperimentProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSExperiment_Source_FPSExperiment_FPSExperimentProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
