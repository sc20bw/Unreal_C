// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTut/MoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveComponent() {}
// Cross Module References
	CPPTUT_API UClass* Z_Construct_UClass_UMoveComponent();
	CPPTUT_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CppTut();
// End Cross Module References
	void UMoveComponent::StaticRegisterNativesUMoveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveComponent);
	UClass* Z_Construct_UClass_UMoveComponent_NoRegister()
	{
		return UMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "newCppTut" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MoveComponent.h" },
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponent_Statics::ClassParams = {
		&UMoveComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoveComponent()
	{
		if (!Z_Registration_Info_UClass_UMoveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveComponent.OuterSingleton, Z_Construct_UClass_UMoveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveComponent.OuterSingleton;
	}
	template<> CPPTUT_API UClass* StaticClass<UMoveComponent>()
	{
		return UMoveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveComponent);
	UMoveComponent::~UMoveComponent() {}
	struct Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveComponent, UMoveComponent::StaticClass, TEXT("UMoveComponent"), &Z_Registration_Info_UClass_UMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveComponent), 2607612360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_109961137(TEXT("/Script/CppTut"),
		Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
