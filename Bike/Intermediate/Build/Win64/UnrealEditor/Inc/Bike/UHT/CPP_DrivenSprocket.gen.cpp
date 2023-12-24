// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_DrivenSprocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_DrivenSprocket() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_DrivenSprocket();
	BIKE_API UClass* Z_Construct_UClass_ACPP_DrivenSprocket_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Sprocket();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_DrivenSprocket::StaticRegisterNativesACPP_DrivenSprocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_DrivenSprocket);
	UClass* Z_Construct_UClass_ACPP_DrivenSprocket_NoRegister()
	{
		return ACPP_DrivenSprocket::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_DrivenSprocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_DrivenSprocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Sprocket,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_DrivenSprocket_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_DrivenSprocket_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_DrivenSprocket.h" },
		{ "ModuleRelativePath", "CPP_DrivenSprocket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_DrivenSprocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_DrivenSprocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_DrivenSprocket_Statics::ClassParams = {
		&ACPP_DrivenSprocket::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_DrivenSprocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_DrivenSprocket_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_DrivenSprocket()
	{
		if (!Z_Registration_Info_UClass_ACPP_DrivenSprocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_DrivenSprocket.OuterSingleton, Z_Construct_UClass_ACPP_DrivenSprocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_DrivenSprocket.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_DrivenSprocket>()
	{
		return ACPP_DrivenSprocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_DrivenSprocket);
	ACPP_DrivenSprocket::~ACPP_DrivenSprocket() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DrivenSprocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DrivenSprocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_DrivenSprocket, ACPP_DrivenSprocket::StaticClass, TEXT("ACPP_DrivenSprocket"), &Z_Registration_Info_UClass_ACPP_DrivenSprocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_DrivenSprocket), 1346796392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DrivenSprocket_h_1801669993(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DrivenSprocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_DrivenSprocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
