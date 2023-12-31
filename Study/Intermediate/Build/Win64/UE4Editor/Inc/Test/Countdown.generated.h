// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_Countdown_generated_h
#error "Countdown.generated.h already included, missing '#pragma once' in Countdown.h"
#endif
#define TEST_Countdown_generated_h

#define Test_Source_Test_Countdown_h_13_SPARSE_DATA
#define Test_Source_Test_Countdown_h_13_RPC_WRAPPERS \
	virtual void CountdownHasFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execCountdownHasFinished);


#define Test_Source_Test_Countdown_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownHasFinished);


#define Test_Source_Test_Countdown_h_13_EVENT_PARMS
#define Test_Source_Test_Countdown_h_13_CALLBACK_WRAPPERS
#define Test_Source_Test_Countdown_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend struct Z_Construct_UClass_ACountdown_Statics; \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACountdown)


#define Test_Source_Test_Countdown_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend struct Z_Construct_UClass_ACountdown_Statics; \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACountdown)


#define Test_Source_Test_Countdown_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountdown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountdown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public:


#define Test_Source_Test_Countdown_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountdown)


#define Test_Source_Test_Countdown_h_13_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_Countdown_h_10_PROLOG \
	Test_Source_Test_Countdown_h_13_EVENT_PARMS


#define Test_Source_Test_Countdown_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_Countdown_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_Countdown_h_13_SPARSE_DATA \
	Test_Source_Test_Countdown_h_13_RPC_WRAPPERS \
	Test_Source_Test_Countdown_h_13_CALLBACK_WRAPPERS \
	Test_Source_Test_Countdown_h_13_INCLASS \
	Test_Source_Test_Countdown_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_Countdown_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_Countdown_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_Countdown_h_13_SPARSE_DATA \
	Test_Source_Test_Countdown_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_Countdown_h_13_CALLBACK_WRAPPERS \
	Test_Source_Test_Countdown_h_13_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_Countdown_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ACountdown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_Countdown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
