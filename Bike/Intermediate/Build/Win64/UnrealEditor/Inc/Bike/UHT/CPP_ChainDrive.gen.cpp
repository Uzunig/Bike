// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_ChainDrive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ChainDrive() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_ChainDrive();
	BIKE_API UClass* Z_Construct_UClass_ACPP_ChainDrive_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_DrivenSprocket_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_DriveSprocket_NoRegister();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Link_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_ChainDrive::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_ChainDrive::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	void ACPP_ChainDrive::StaticRegisterNativesACPP_ChainDrive()
	{
		UClass* Class = ACPP_ChainDrive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &ACPP_ChainDrive::execInit },
			{ "Update", &ACPP_ChainDrive::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ChainDrive, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_ChainDrive_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ChainDrive_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics
	{
		struct CPP_ChainDrive_eventUpdate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_ChainDrive_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ChainDrive, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::CPP_ChainDrive_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::CPP_ChainDrive_eventUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_ChainDrive_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ChainDrive_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ChainDrive);
	UClass* Z_Construct_UClass_ACPP_ChainDrive_NoRegister()
	{
		return ACPP_ChainDrive::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ChainDrive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveSprocket_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DriveSprocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivenSprocket_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivenSprocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprocketDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SprocketDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkPairCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LinkPairCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ChainDrive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ChainDrive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ChainDrive_Init, "Init" }, // 3267084447
		{ &Z_Construct_UFunction_ACPP_ChainDrive_Update, "Update" }, // 309656363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_ChainDrive.h" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DriveSprocket_MetaData[] = {
		{ "Category", "CPP_ChainDrive" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DriveSprocket = { "DriveSprocket", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ChainDrive, DriveSprocket), Z_Construct_UClass_ACPP_DriveSprocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DriveSprocket_MetaData), Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DriveSprocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DrivenSprocket_MetaData[] = {
		{ "Category", "CPP_ChainDrive" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DrivenSprocket = { "DrivenSprocket", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ChainDrive, DrivenSprocket), Z_Construct_UClass_ACPP_DrivenSprocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DrivenSprocket_MetaData), Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DrivenSprocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_SprocketDistance_MetaData[] = {
		{ "Category", "CPP_ChainDrive" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_SprocketDistance = { "SprocketDistance", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ChainDrive, SprocketDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_SprocketDistance_MetaData), Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_SprocketDistance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACPP_Link_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain_MetaData[] = {
		{ "Category", "CPP_ChainDrive" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ChainDrive, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain_MetaData), Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_LinkPairCount_MetaData[] = {
		{ "Category", "CPP_ChainDrive" },
		{ "ModuleRelativePath", "CPP_ChainDrive.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_LinkPairCount = { "LinkPairCount", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_ChainDrive, LinkPairCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_LinkPairCount_MetaData), Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_LinkPairCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ChainDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DriveSprocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_DrivenSprocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_SprocketDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_Chain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ChainDrive_Statics::NewProp_LinkPairCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ChainDrive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ChainDrive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ChainDrive_Statics::ClassParams = {
		&ACPP_ChainDrive::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_ChainDrive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_ChainDrive_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ChainDrive_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_ChainDrive()
	{
		if (!Z_Registration_Info_UClass_ACPP_ChainDrive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ChainDrive.OuterSingleton, Z_Construct_UClass_ACPP_ChainDrive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ChainDrive.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_ChainDrive>()
	{
		return ACPP_ChainDrive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ChainDrive);
	ACPP_ChainDrive::~ACPP_ChainDrive() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_ChainDrive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_ChainDrive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ChainDrive, ACPP_ChainDrive::StaticClass, TEXT("ACPP_ChainDrive"), &Z_Registration_Info_UClass_ACPP_ChainDrive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ChainDrive), 3775502989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_ChainDrive_h_3332074940(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_ChainDrive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_ChainDrive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
