// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_Sprocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Sprocket() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_ACPP_Sprocket();
	BIKE_API UClass* Z_Construct_UClass_ACPP_Sprocket_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_Sprocket::execGetAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Sprocket::execGetCenterLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenterLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Sprocket::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Sprocket::execGetLastLinearBias)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetLastLinearBias();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Sprocket::execGetLastDeltaRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetLastDeltaRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Sprocket::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void ACPP_Sprocket::StaticRegisterNativesACPP_Sprocket()
	{
		UClass* Class = ACPP_Sprocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngularVelocity", &ACPP_Sprocket::execGetAngularVelocity },
			{ "GetCenterLocation", &ACPP_Sprocket::execGetCenterLocation },
			{ "GetLastDeltaRotation", &ACPP_Sprocket::execGetLastDeltaRotation },
			{ "GetLastLinearBias", &ACPP_Sprocket::execGetLastLinearBias },
			{ "GetRadius", &ACPP_Sprocket::execGetRadius },
			{ "Update", &ACPP_Sprocket::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics
	{
		struct CPP_Sprocket_eventGetAngularVelocity_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventGetAngularVelocity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "GetAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::CPP_Sprocket_eventGetAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::CPP_Sprocket_eventGetAngularVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics
	{
		struct CPP_Sprocket_eventGetCenterLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventGetCenterLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "GetCenterLocation", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::CPP_Sprocket_eventGetCenterLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::CPP_Sprocket_eventGetCenterLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics
	{
		struct CPP_Sprocket_eventGetLastDeltaRotation_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventGetLastDeltaRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "GetLastDeltaRotation", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::CPP_Sprocket_eventGetLastDeltaRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::CPP_Sprocket_eventGetLastDeltaRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics
	{
		struct CPP_Sprocket_eventGetLastLinearBias_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventGetLastLinearBias_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "GetLastLinearBias", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::CPP_Sprocket_eventGetLastLinearBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::CPP_Sprocket_eventGetLastLinearBias_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics
	{
		struct CPP_Sprocket_eventGetRadius_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "GetRadius", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::CPP_Sprocket_eventGetRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::CPP_Sprocket_eventGetRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Sprocket_Update_Statics
	{
		struct CPP_Sprocket_eventUpdate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Sprocket_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Sprocket, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::CPP_Sprocket_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::CPP_Sprocket_eventUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Sprocket_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Sprocket_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Sprocket);
	UClass* Z_Construct_UClass_ACPP_Sprocket_NoRegister()
	{
		return ACPP_Sprocket::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Sprocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDeltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastDeltaRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLinearBias_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastLinearBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Sprocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Sprocket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Sprocket_GetAngularVelocity, "GetAngularVelocity" }, // 4022981195
		{ &Z_Construct_UFunction_ACPP_Sprocket_GetCenterLocation, "GetCenterLocation" }, // 2926282225
		{ &Z_Construct_UFunction_ACPP_Sprocket_GetLastDeltaRotation, "GetLastDeltaRotation" }, // 2203902308
		{ &Z_Construct_UFunction_ACPP_Sprocket_GetLastLinearBias, "GetLastLinearBias" }, // 3472525556
		{ &Z_Construct_UFunction_ACPP_Sprocket_GetRadius, "GetRadius" }, // 3833455651
		{ &Z_Construct_UFunction_ACPP_Sprocket_Update, "Update" }, // 1677796214
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Sprocket.h" },
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CPP_Sprocket" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Sprocket, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CPP_Sprocket" },
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Sprocket, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_Radius_MetaData), Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "CPP_Sprocket" },
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Sprocket, AngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_AngularVelocity_MetaData), Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_AngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastDeltaRotation_MetaData[] = {
		{ "Category", "CPP_Sprocket" },
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastDeltaRotation = { "LastDeltaRotation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Sprocket, LastDeltaRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastDeltaRotation_MetaData), Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastDeltaRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastLinearBias_MetaData[] = {
		{ "Category", "CPP_Sprocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Degrees\n" },
#endif
		{ "ModuleRelativePath", "CPP_Sprocket.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastLinearBias = { "LastLinearBias", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Sprocket, LastLinearBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastLinearBias_MetaData), Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastLinearBias_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Sprocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastDeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Sprocket_Statics::NewProp_LastLinearBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Sprocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Sprocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Sprocket_Statics::ClassParams = {
		&ACPP_Sprocket::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Sprocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Sprocket_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Sprocket_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_Sprocket()
	{
		if (!Z_Registration_Info_UClass_ACPP_Sprocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Sprocket.OuterSingleton, Z_Construct_UClass_ACPP_Sprocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Sprocket.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<ACPP_Sprocket>()
	{
		return ACPP_Sprocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Sprocket);
	ACPP_Sprocket::~ACPP_Sprocket() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Sprocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Sprocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Sprocket, ACPP_Sprocket::StaticClass, TEXT("ACPP_Sprocket"), &Z_Registration_Info_UClass_ACPP_Sprocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Sprocket), 520538112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Sprocket_h_4201167990(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Sprocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_Sprocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
