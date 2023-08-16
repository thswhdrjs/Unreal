// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define TEST_TestActor_generated_h

#define Test_Source_Test_TestActor_h_13_SPARSE_DATA
#define Test_Source_Test_TestActor_h_13_RPC_WRAPPERS
#define Test_Source_Test_TestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_TestActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define Test_Source_Test_TestActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define Test_Source_Test_TestActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public:


#define Test_Source_Test_TestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor)


#define Test_Source_Test_TestActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_TestActor_h_10_PROLOG
#define Test_Source_Test_TestActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_TestActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_TestActor_h_13_SPARSE_DATA \
	Test_Source_Test_TestActor_h_13_RPC_WRAPPERS \
	Test_Source_Test_TestActor_h_13_INCLASS \
	Test_Source_Test_TestActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_TestActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_TestActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_TestActor_h_13_SPARSE_DATA \
	Test_Source_Test_TestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_TestActor_h_13_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_TestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ATestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_TestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
