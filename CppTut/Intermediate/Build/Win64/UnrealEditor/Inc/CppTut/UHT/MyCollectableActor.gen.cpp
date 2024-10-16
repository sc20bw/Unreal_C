// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTut/MyCollectableActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCollectableActor() {}
// Cross Module References
	CPPTUT_API UClass* Z_Construct_UClass_AMyCollectableActor();
	CPPTUT_API UClass* Z_Construct_UClass_AMyCollectableActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_CppTut();
// End Cross Module References
	DEFINE_FUNCTION(AMyCollectableActor::execonComponentBeginOverlap)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_Component);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onComponentBeginOverlap(Z_Param_Component,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCollectableActor::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	void AMyCollectableActor::StaticRegisterNativesAMyCollectableActor()
	{
		UClass* Class = AMyCollectableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Jump", &AMyCollectableActor::execJump },
			{ "onComponentBeginOverlap", &AMyCollectableActor::execonComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCollectableActor_Jump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectableActor, nullptr, "Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCollectableActor_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCollectableActor_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics
	{
		struct MyCollectableActor_eventonComponentBeginOverlap_Parms
		{
			UBoxComponent* Component;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventonComponentBeginOverlap_Parms, Component), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventonComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventonComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventonComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyCollectableActor_eventonComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyCollectableActor_eventonComponentBeginOverlap_Parms), &Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectableActor_eventonComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when actor hits the collider\n" },
#endif
		{ "ModuleRelativePath", "MyCollectableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when actor hits the collider" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectableActor, nullptr, "onComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::MyCollectableActor_eventonComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::MyCollectableActor_eventonComponentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
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
		{ &Z_Construct_UFunction_AMyCollectableActor_Jump, "Jump" }, // 2566302284
		{ &Z_Construct_UFunction_AMyCollectableActor_onComponentBeginOverlap, "onComponentBeginOverlap" }, // 116143301
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectableActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "MyCollectableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectableActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_BoxCollision_MetaData), Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_BoxCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_LiveTime_MetaData[] = {
		{ "Category", "MyCollectableActor" },
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_LiveTime = { "LiveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectableActor, LiveTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_LiveTime_MetaData), Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_LiveTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "MyCollectableActor" },
		{ "ModuleRelativePath", "MyCollectableActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectableActor, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_Velocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCollectableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_LiveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectableActor_Statics::NewProp_Velocity,
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
		{ Z_Construct_UClass_AMyCollectableActor, AMyCollectableActor::StaticClass, TEXT("AMyCollectableActor"), &Z_Registration_Info_UClass_AMyCollectableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCollectableActor), 3564952065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_2359455197(TEXT("/Script/CppTut"),
		Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
