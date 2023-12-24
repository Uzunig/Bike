// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_Link.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Link() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_Link();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Link_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_Link::StaticRegisterNativesACPP_Link()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Link);
	UClass* Z_Construct_UClass_ACPP_Link_NoRegister()
	{
		return ACPP_Link::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Link_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Link_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Link_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Link_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Link.h" },
		{ "ModuleRelativePath", "CPP_Link.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Link_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CPP_Link" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Link.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Link_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Link, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Link_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ACPP_Link_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Link_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Link_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Link_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Link>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Link_Statics::ClassParams = {
		&ACPP_Link::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Link_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Link_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Link_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Link_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Link_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_Link()
	{
		if (!Z_Registration_Info_UClass_ACPP_Link.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Link.OuterSingleton, Z_Construct_UClass_ACPP_Link_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Link.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_Link>()
	{
		return ACPP_Link::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Link);
	ACPP_Link::~ACPP_Link() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Link_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Link_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Link, ACPP_Link::StaticClass, TEXT("ACPP_Link"), &Z_Registration_Info_UClass_ACPP_Link, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Link), 884529024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Link_h_473088066(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Link_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Link_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
