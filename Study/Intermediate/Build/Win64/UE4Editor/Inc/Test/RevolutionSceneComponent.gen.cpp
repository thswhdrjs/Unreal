// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/RevolutionSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolutionSceneComponent() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_URevolutionSceneComponent_NoRegister();
	TEST_API UClass* Z_Construct_UClass_URevolutionSceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void URevolutionSceneComponent::StaticRegisterNativesURevolutionSceneComponent()
	{
	}
	UClass* Z_Construct_UClass_URevolutionSceneComponent_NoRegister()
	{
		return URevolutionSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_URevolutionSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolutionSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolutionSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "RevolutionSceneComponent.h" },
		{ "ModuleRelativePath", "RevolutionSceneComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolutionSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolutionSceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URevolutionSceneComponent_Statics::ClassParams = {
		&URevolutionSceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URevolutionSceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolutionSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolutionSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URevolutionSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URevolutionSceneComponent, 1298475493);
	template<> TEST_API UClass* StaticClass<URevolutionSceneComponent>()
	{
		return URevolutionSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URevolutionSceneComponent(Z_Construct_UClass_URevolutionSceneComponent, &URevolutionSceneComponent::StaticClass, TEXT("/Script/Test"), TEXT("URevolutionSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolutionSceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
