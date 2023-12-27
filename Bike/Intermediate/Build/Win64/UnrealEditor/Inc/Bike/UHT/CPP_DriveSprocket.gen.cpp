// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_DriveSprocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_DriveSprocket() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_DriveSprocket();
	BIKE_API UClass* Z_Construct_UClass_ACPP_DriveSprocket_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Sprocket();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_DriveSprocket::StaticRegisterNativesACPP_DriveSprocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_DriveSprocket);
	UClass* Z_Construct_UClass_ACPP_DriveSprocket_NoRegister()
	{
		return ACPP_DriveSprocket::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_DriveSprocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_DriveSprocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Sprocket,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_DriveSprocket_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_DriveSprocket_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_DriveSprocket.h" },
		{ "ModuleRelativePath", "CPP_DriveSprocket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_DriveSprocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_DriveSprocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_DriveSprocket_Statics::ClassParams = {
		&ACPP_DriveSprocket::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_DriveSprocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_DriveSprocket_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_DriveSprocket()
	{
		if (!Z_Registration_Info_UClass_ACPP_DriveSprocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_DriveSprocket.OuterSingleton, Z_Construct_UClass_ACPP_DriveSprocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_DriveSprocket.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_DriveSprocket>()
	{
		return ACPP_DriveSprocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_DriveSprocket);
	ACPP_DriveSprocket::~ACPP_DriveSprocket() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DriveSprocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DriveSprocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_DriveSprocket, ACPP_DriveSprocket::StaticClass, TEXT("ACPP_DriveSprocket"), &Z_Registration_Info_UClass_ACPP_DriveSprocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_DriveSprocket), 1752017162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DriveSprocket_h_3930332542(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DriveSprocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DriveSprocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
