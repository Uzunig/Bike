// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_SmallLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_SmallLink() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_Link();
	BIKE_API UClass* Z_Construct_UClass_ACPP_SmallLink();
	BIKE_API UClass* Z_Construct_UClass_ACPP_SmallLink_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_SmallLink::StaticRegisterNativesACPP_SmallLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_SmallLink);
	UClass* Z_Construct_UClass_ACPP_SmallLink_NoRegister()
	{
		return ACPP_SmallLink::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_SmallLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_SmallLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Link,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SmallLink_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SmallLink_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_SmallLink.h" },
		{ "ModuleRelativePath", "CPP_SmallLink.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_SmallLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SmallLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SmallLink_Statics::ClassParams = {
		&ACPP_SmallLink::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SmallLink_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SmallLink_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_SmallLink()
	{
		if (!Z_Registration_Info_UClass_ACPP_SmallLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SmallLink.OuterSingleton, Z_Construct_UClass_ACPP_SmallLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_SmallLink.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_SmallLink>()
	{
		return ACPP_SmallLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SmallLink);
	ACPP_SmallLink::~ACPP_SmallLink() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SmallLink, ACPP_SmallLink::StaticClass, TEXT("ACPP_SmallLink"), &Z_Registration_Info_UClass_ACPP_SmallLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SmallLink), 2442473619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallLink_h_2867072278(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_SmallLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
