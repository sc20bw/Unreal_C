// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCollectableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPPTUT_MyCollectableActor_generated_h
#error "MyCollectableActor.generated.h already included, missing '#pragma once' in MyCollectableActor.h"
#endif
#define CPPTUT_MyCollectableActor_generated_h

#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_14_DELEGATE \
CPPTUT_API void FOnJumpTriggerSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpTriggerSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp);


#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_SPARSE_DATA
#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonComponentBeginOverlap); \
	DECLARE_FUNCTION(execJump);


#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_ACCESSORS
#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCollectableActor(); \
	friend struct Z_Construct_UClass_AMyCollectableActor_Statics; \
public: \
	DECLARE_CLASS(AMyCollectableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTut"), NO_API) \
	DECLARE_SERIALIZER(AMyCollectableActor)


#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCollectableActor(AMyCollectableActor&&); \
	NO_API AMyCollectableActor(const AMyCollectableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCollectableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCollectableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCollectableActor) \
	NO_API virtual ~AMyCollectableActor();


#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_16_PROLOG
#define FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_SPARSE_DATA \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_ACCESSORS \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTUT_API UClass* StaticClass<class AMyCollectableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Old_Files_Unreal_C_CppTut_Source_CppTut_MyCollectableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
