// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_MainLevelScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MainLevelScript() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_MainLevelScript();
	BIKE_API UClass* Z_Construct_UClass_ACPP_MainLevelScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_MainLevelScript::execUpdateLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLevel(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_MainLevelScript::execInitLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitLevel();
		P_NATIVE_END;
	}
	void ACPP_MainLevelScript::StaticRegisterNativesACPP_MainLevelScript()
	{
		UClass* Class = ACPP_MainLevelScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitLevel", &ACPP_MainLevelScript::execInitLevel },
			{ "UpdateLevel", &ACPP_MainLevelScript::execUpdateLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelBlueprint" },
		{ "ModuleRelativePath", "CPP_MainLevelScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MainLevelScript, nullptr, "InitLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics
	{
		struct CPP_MainLevelScript_eventUpdateLevel_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MainLevelScript_eventUpdateLevel_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelBlueprint" },
		{ "ModuleRelativePath", "CPP_MainLevelScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MainLevelScript, nullptr, "UpdateLevel", nullptr, nullptr, Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::CPP_MainLevelScript_eventUpdateLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::CPP_MainLevelScript_eventUpdateLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MainLevelScript);
	UClass* Z_Construct_UClass_ACPP_MainLevelScript_NoRegister()
	{
		return ACPP_MainLevelScript::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_MainLevelScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_MainLevelScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_MainLevelScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_MainLevelScript_InitLevel, "InitLevel" }, // 1629338326
		{ &Z_Construct_UFunction_ACPP_MainLevelScript_UpdateLevel, "UpdateLevel" }, // 4078290832
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MainLevelScript_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPP_MainLevelScript.h" },
		{ "ModuleRelativePath", "CPP_MainLevelScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain_MetaData[] = {
		{ "Category", "CPP_MainLevelScript" },
		{ "ModuleRelativePath", "CPP_MainLevelScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MainLevelScript, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain_MetaData), Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_MainLevelScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MainLevelScript_Statics::NewProp_Chain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_MainLevelScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MainLevelScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MainLevelScript_Statics::ClassParams = {
		&ACPP_MainLevelScript::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_MainLevelScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MainLevelScript_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_MainLevelScript()
	{
		if (!Z_Registration_Info_UClass_ACPP_MainLevelScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MainLevelScript.OuterSingleton, Z_Construct_UClass_ACPP_MainLevelScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_MainLevelScript.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_MainLevelScript>()
	{
		return ACPP_MainLevelScript::StaticClass();
	}
	ACPP_MainLevelScript::ACPP_MainLevelScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MainLevelScript);
	ACPP_MainLevelScript::~ACPP_MainLevelScript() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MainLevelScript, ACPP_MainLevelScript::StaticClass, TEXT("ACPP_MainLevelScript"), &Z_Registration_Info_UClass_ACPP_MainLevelScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MainLevelScript), 3859476827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_4051858767(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
