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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CPPTUT_API UClass* Z_Construct_UClass_UMoveComponent();
	CPPTUT_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CppTut();
// End Cross Module References
	DEFINE_FUNCTION(UMoveComponent::execEnableMovement)
	{
		P_GET_UBOOL(Z_Param_ShouldMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableMovement(Z_Param_ShouldMove);
		P_NATIVE_END;
	}
	void UMoveComponent::StaticRegisterNativesUMoveComponent()
	{
		UClass* Class = UMoveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableMovement", &UMoveComponent::execEnableMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics
	{
		struct MoveComponent_eventEnableMovement_Parms
		{
			bool ShouldMove;
		};
		static void NewProp_ShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_ShouldMove_SetBit(void* Obj)
	{
		((MoveComponent_eventEnableMovement_Parms*)Obj)->ShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_ShouldMove = { "ShouldMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoveComponent_eventEnableMovement_Parms), &Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_ShouldMove_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_ShouldMove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "EnableMovement", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoveComponent_EnableMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveComponent);
	UClass* Z_Construct_UClass_UMoveComponent_NoRegister()
	{
		return UMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveEnable_MetaData[];
#endif
		static void NewProp_MoveEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveComponent_EnableMovement, "EnableMovement" }, // 3631951641
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "newCppTut" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MoveComponent.h" },
		{ "ModuleRelativePath", "MoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables component movement\n" },
#endif
		{ "ModuleRelativePath", "MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables component movement" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable_SetBit(void* Obj)
	{
		((UMoveComponent*)Obj)->MoveEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable = { "MoveEnable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveComponent), &Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_MoveEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponent_Statics::ClassParams = {
		&UMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UMoveComponent, UMoveComponent::StaticClass, TEXT("UMoveComponent"), &Z_Registration_Info_UClass_UMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveComponent), 608084227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_1892280083(TEXT("/Script/CppTut"),
		Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MoveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
