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
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_MainLevelScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MainLevelScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MainLevelScript_Statics::ClassParams = {
		&ACPP_MainLevelScript::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MainLevelScript_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MainLevelScript_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_ACPP_MainLevelScript, ACPP_MainLevelScript::StaticClass, TEXT("ACPP_MainLevelScript"), &Z_Registration_Info_UClass_ACPP_MainLevelScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MainLevelScript), 256990732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_3954604934(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_MainLevelScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
