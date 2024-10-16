// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTut/MyCollectableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCollectableActor() {}
// Cross Module References
	CPPTUT_API UClass* Z_Construct_UClass_AMyCollectableActor();
	CPPTUT_API UClass* Z_Construct_UClass_AMyCollectableActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CppTut();
// End Cross Module References
	DEFINE_FUNCTION(AMyCollectableActor::execJump)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump(Z_Param_velocity);
		P_NATIVE_END;
	}
	void AMyCollectableActor::StaticRegisterNativesAMyCollectableActor()
	{
		UClass* Class = AMyCollectableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Jump", &AMyCollectableActor::execJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCollectableActor_Jump_Statics
	{
		struct MyCollectableActor_eventJump_Parms
		{
			float velocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventJump_Parms, velocity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::NewProp_velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectableActor, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::MyCollectableActor_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::MyCollectableActor_eventJump_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCollectableActor_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCollectableActor);
	UClass* Z_Construct_UClass_AMyCollectableActor_NoRegister()
	{
		return AMyCollectableActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyCollectableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCollectableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCollectableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCollectableActor_Jump, "Jump" }, // 1188596911
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCollectableActor.h" },
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MyCollectableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static mesh for rendering\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCollectableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh for rendering" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectableActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCollectableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCollectableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCollectableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCollectableActor_Statics::ClassParams = {
		&AMyCollectableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCollectableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCollectableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyCollectableActor()
	{
		if (!Z_Registration_Info_UClass_AMyCollectableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCollectableActor.OuterSingleton, Z_Construct_UClass_AMyCollectableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCollectableActor.OuterSingleton;
	}
	template<> CPPTUT_API UClass* StaticClass<AMyCollectableActor>()
	{
		return AMyCollectableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCollectableActor);
	AMyCollectableActor::~AMyCollectableActor() {}
	struct Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCollectableActor, AMyCollectableActor::StaticClass, TEXT("AMyCollectableActor"), &Z_Registration_Info_UClass_AMyCollectableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCollectableActor), 221193213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_2526072658(TEXT("/Script/CppTut"),
		Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
