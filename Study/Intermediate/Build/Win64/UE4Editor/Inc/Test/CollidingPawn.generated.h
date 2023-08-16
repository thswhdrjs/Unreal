// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_CollidingPawn_generated_h
#error "CollidingPawn.generated.h already included, missing '#pragma once' in CollidingPawn.h"
#endif
#define TEST_CollidingPawn_generated_h

#define Test_Source_Test_CollidingPawn_h_12_SPARSE_DATA
#define Test_Source_Test_CollidingPawn_h_12_RPC_WRAPPERS
#define Test_Source_Test_CollidingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_CollidingPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define Test_Source_Test_CollidingPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define Test_Source_Test_CollidingPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollidingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollidingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public:


#define Test_Source_Test_CollidingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollidingPawn)


#define Test_Source_Test_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_CollidingPawn_h_9_PROLOG
#define Test_Source_Test_CollidingPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_CollidingPawn_h_12_SPARSE_DATA \
	Test_Source_Test_CollidingPawn_h_12_RPC_WRAPPERS \
	Test_Source_Test_CollidingPawn_h_12_INCLASS \
	Test_Source_Test_CollidingPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_CollidingPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_CollidingPawn_h_12_SPARSE_DATA \
	Test_Source_Test_CollidingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_CollidingPawn_h_12_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_CollidingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ACollidingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_CollidingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
