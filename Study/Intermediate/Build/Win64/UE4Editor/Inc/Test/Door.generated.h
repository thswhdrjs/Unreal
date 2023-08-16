// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define TEST_Door_generated_h

#define Test_Source_Test_Door_h_13_SPARSE_DATA
#define Test_Source_Test_Door_h_13_RPC_WRAPPERS
#define Test_Source_Test_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_Door_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Test_Source_Test_Door_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Test_Source_Test_Door_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define Test_Source_Test_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define Test_Source_Test_Door_h_13_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_Door_h_10_PROLOG
#define Test_Source_Test_Door_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_Door_h_13_SPARSE_DATA \
	Test_Source_Test_Door_h_13_RPC_WRAPPERS \
	Test_Source_Test_Door_h_13_INCLASS \
	Test_Source_Test_Door_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_Door_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_Door_h_13_SPARSE_DATA \
	Test_Source_Test_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_Door_h_13_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
