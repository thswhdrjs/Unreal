// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_MovingActor_generated_h
#error "MovingActor.generated.h already included, missing '#pragma once' in MovingActor.h"
#endif
#define TEST_MovingActor_generated_h

#define Test_Source_Test_MovingActor_h_12_SPARSE_DATA
#define Test_Source_Test_MovingActor_h_12_RPC_WRAPPERS
#define Test_Source_Test_MovingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingActor(); \
	friend struct Z_Construct_UClass_AMovingActor_Statics; \
public: \
	DECLARE_CLASS(AMovingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(AMovingActor)


#define Test_Source_Test_MovingActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMovingActor(); \
	friend struct Z_Construct_UClass_AMovingActor_Statics; \
public: \
	DECLARE_CLASS(AMovingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(AMovingActor)


#define Test_Source_Test_MovingActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingActor(AMovingActor&&); \
	NO_API AMovingActor(const AMovingActor&); \
public:


#define Test_Source_Test_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingActor(AMovingActor&&); \
	NO_API AMovingActor(const AMovingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingActor)


#define Test_Source_Test_MovingActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_MovingActor_h_9_PROLOG
#define Test_Source_Test_MovingActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_MovingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_MovingActor_h_12_SPARSE_DATA \
	Test_Source_Test_MovingActor_h_12_RPC_WRAPPERS \
	Test_Source_Test_MovingActor_h_12_INCLASS \
	Test_Source_Test_MovingActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_MovingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_MovingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_MovingActor_h_12_SPARSE_DATA \
	Test_Source_Test_MovingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AMovingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_MovingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
