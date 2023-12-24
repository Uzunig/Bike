// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_BigLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_BigLink() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_BigLink();
	BIKE_API UClass* Z_Construct_UClass_ACPP_BigLink_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Link();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_BigLink::StaticRegisterNativesACPP_BigLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_BigLink);
	UClass* Z_Construct_UClass_ACPP_BigLink_NoRegister()
	{
		return ACPP_BigLink::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_BigLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_BigLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Link,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigLink_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BigLink_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_BigLink.h" },
		{ "ModuleRelativePath", "CPP_BigLink.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_BigLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_BigLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_BigLink_Statics::ClassParams = {
		&ACPP_BigLink::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigLink_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_BigLink_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_BigLink()
	{
		if (!Z_Registration_Info_UClass_ACPP_BigLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_BigLink.OuterSingleton, Z_Construct_UClass_ACPP_BigLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_BigLink.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_BigLink>()
	{
		return ACPP_BigLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_BigLink);
	ACPP_BigLink::~ACPP_BigLink() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_BigLink, ACPP_BigLink::StaticClass, TEXT("ACPP_BigLink"), &Z_Registration_Info_UClass_ACPP_BigLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_BigLink), 507532596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigLink_h_3718927253(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
