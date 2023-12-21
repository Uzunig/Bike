// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_SmallSprocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_SmallSprocket() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_SmallSprocket();
	BIKE_API UClass* Z_Construct_UClass_ACPP_SmallSprocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_SmallSprocket::StaticRegisterNativesACPP_SmallSprocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_SmallSprocket);
	UClass* Z_Construct_UClass_ACPP_SmallSprocket_NoRegister()
	{
		return ACPP_SmallSprocket::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_SmallSprocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_SmallSprocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SmallSprocket_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SmallSprocket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_SmallSprocket.h" },
		{ "ModuleRelativePath", "CPP_SmallSprocket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_SmallSprocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SmallSprocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SmallSprocket_Statics::ClassParams = {
		&ACPP_SmallSprocket::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SmallSprocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SmallSprocket_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_SmallSprocket()
	{
		if (!Z_Registration_Info_UClass_ACPP_SmallSprocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SmallSprocket.OuterSingleton, Z_Construct_UClass_ACPP_SmallSprocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_SmallSprocket.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_SmallSprocket>()
	{
		return ACPP_SmallSprocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SmallSprocket);
	ACPP_SmallSprocket::~ACPP_SmallSprocket() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallSprocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallSprocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SmallSprocket, ACPP_SmallSprocket::StaticClass, TEXT("ACPP_SmallSprocket"), &Z_Registration_Info_UClass_ACPP_SmallSprocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SmallSprocket), 1535827057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallSprocket_h_758873404(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallSprocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallSprocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
