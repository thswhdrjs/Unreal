// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define TEST_CameraDirector_generated_h

#define Test_Source_Test_CameraDirector_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChangeCameraData_Statics; \
	TEST_API static class UScriptStruct* StaticStruct();


template<> TEST_API UScriptStruct* StaticStruct<struct FChangeCameraData>();

#define Test_Source_Test_CameraDirector_h_27_SPARSE_DATA
#define Test_Source_Test_CameraDirector_h_27_RPC_WRAPPERS
#define Test_Source_Test_CameraDirector_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_CameraDirector_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define Test_Source_Test_CameraDirector_h_27_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define Test_Source_Test_CameraDirector_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public:


#define Test_Source_Test_CameraDirector_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define Test_Source_Test_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_CameraDirector_h_24_PROLOG
#define Test_Source_Test_CameraDirector_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_CameraDirector_h_27_SPARSE_DATA \
	Test_Source_Test_CameraDirector_h_27_RPC_WRAPPERS \
	Test_Source_Test_CameraDirector_h_27_INCLASS \
	Test_Source_Test_CameraDirector_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_CameraDirector_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_CameraDirector_h_27_SPARSE_DATA \
	Test_Source_Test_CameraDirector_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_CameraDirector_h_27_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_CameraDirector_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ACameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_CameraDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
