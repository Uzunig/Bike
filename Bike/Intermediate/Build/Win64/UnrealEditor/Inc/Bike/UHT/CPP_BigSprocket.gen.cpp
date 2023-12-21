// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_BigSprocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_BigSprocket() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_BigSprocket();
	BIKE_API UClass* Z_Construct_UClass_ACPP_BigSprocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	void ACPP_BigSprocket::StaticRegisterNativesACPP_BigSprocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_BigSprocket);
	UClass* Z_Construct_UClass_ACPP_BigSprocket_NoRegister()
	{
		return ACPP_BigSprocket::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_BigSprocket_Statics
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
	UObject* (*const Z_Construct_UClass_ACPP_BigSprocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigSprocket_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BigSprocket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_BigSprocket.h" },
		{ "ModuleRelativePath", "CPP_BigSprocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BigSprocket_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CPP_BigSprocket" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_BigSprocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_BigSprocket_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_BigSprocket, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigSprocket_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ACPP_BigSprocket_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_BigSprocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BigSprocket_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_BigSprocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_BigSprocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_BigSprocket_Statics::ClassParams = {
		&ACPP_BigSprocket::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_BigSprocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigSprocket_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigSprocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_BigSprocket_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BigSprocket_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_BigSprocket()
	{
		if (!Z_Registration_Info_UClass_ACPP_BigSprocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_BigSprocket.OuterSingleton, Z_Construct_UClass_ACPP_BigSprocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_BigSprocket.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_BigSprocket>()
	{
		return ACPP_BigSprocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_BigSprocket);
	ACPP_BigSprocket::~ACPP_BigSprocket() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigSprocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigSprocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_BigSprocket, ACPP_BigSprocket::StaticClass, TEXT("ACPP_BigSprocket"), &Z_Registration_Info_UClass_ACPP_BigSprocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_BigSprocket), 6005348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigSprocket_h_4268097152(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigSprocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_BigSprocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
