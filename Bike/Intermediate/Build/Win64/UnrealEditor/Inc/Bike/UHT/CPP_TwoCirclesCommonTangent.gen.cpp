// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bike/CPP_TwoCirclesCommonTangent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_TwoCirclesCommonTangent() {}
// Cross Module References
	BIKE_API UClass* Z_Construct_UClass_UCPP_TwoCirclesCommonTangent();
	BIKE_API UClass* Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_Bike();
// End Cross Module References
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execGetDirectionalVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetDirectionalVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execGetY)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_X);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetY(Z_Param_X);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execGetC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execGetB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execGetA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetA();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TwoCirclesCommonTangent::execInitialize)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius1);
		P_GET_STRUCT(FVector2D,Z_Param_Center1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius2);
		P_GET_STRUCT(FVector2D,Z_Param_Center2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Radius1,Z_Param_Center1,Z_Param_Radius2,Z_Param_Center2);
		P_NATIVE_END;
	}
	void UCPP_TwoCirclesCommonTangent::StaticRegisterNativesUCPP_TwoCirclesCommonTangent()
	{
		UClass* Class = UCPP_TwoCirclesCommonTangent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetA", &UCPP_TwoCirclesCommonTangent::execGetA },
			{ "GetB", &UCPP_TwoCirclesCommonTangent::execGetB },
			{ "GetC", &UCPP_TwoCirclesCommonTangent::execGetC },
			{ "GetDirectionalVector", &UCPP_TwoCirclesCommonTangent::execGetDirectionalVector },
			{ "GetY", &UCPP_TwoCirclesCommonTangent::execGetY },
			{ "Initialize", &UCPP_TwoCirclesCommonTangent::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventGetA_Parms
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
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetA_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "GetA", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::CPP_TwoCirclesCommonTangent_eventGetA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::CPP_TwoCirclesCommonTangent_eventGetA_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventGetB_Parms
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
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "GetB", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::CPP_TwoCirclesCommonTangent_eventGetB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::CPP_TwoCirclesCommonTangent_eventGetB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventGetC_Parms
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
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetC_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "GetC", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::CPP_TwoCirclesCommonTangent_eventGetC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::CPP_TwoCirclesCommonTangent_eventGetC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventGetDirectionalVector_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetDirectionalVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "GetDirectionalVector", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::CPP_TwoCirclesCommonTangent_eventGetDirectionalVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::CPP_TwoCirclesCommonTangent_eventGetDirectionalVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventGetY_Parms
		{
			double X;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetY_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventGetY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "GetY", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::CPP_TwoCirclesCommonTangent_eventGetY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::CPP_TwoCirclesCommonTangent_eventGetY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics
	{
		struct CPP_TwoCirclesCommonTangent_eventInitialize_Parms
		{
			double Radius1;
			FVector2D Center1;
			double Radius2;
			FVector2D Center2;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Radius1 = { "Radius1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventInitialize_Parms, Radius1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Center1 = { "Center1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventInitialize_Parms, Center1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Radius2 = { "Radius2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventInitialize_Parms, Radius2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Center2 = { "Center2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TwoCirclesCommonTangent_eventInitialize_Parms, Center2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Radius1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Center1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Radius2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::NewProp_Center2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::CPP_TwoCirclesCommonTangent_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::CPP_TwoCirclesCommonTangent_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_TwoCirclesCommonTangent);
	UClass* Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_NoRegister()
	{
		return UCPP_TwoCirclesCommonTangent::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_C;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Bike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetA, "GetA" }, // 1044958873
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetB, "GetB" }, // 3550951485
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetC, "GetC" }, // 2724086578
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetDirectionalVector, "GetDirectionalVector" }, // 88656823
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_GetY, "GetY" }, // 3385412726
		{ &Z_Construct_UFunction_UCPP_TwoCirclesCommonTangent_Initialize, "Initialize" }, // 701018162
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** General equation of a line tangent to both circles\n * Ax + By + C = 0 \n */" },
#endif
		{ "IncludePath", "CPP_TwoCirclesCommonTangent.h" },
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General equation of a line tangent to both circles\nAx + By + C = 0" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_A_MetaData[] = {
		{ "Category", "CPP_TwoCirclesCommonTangent" },
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_TwoCirclesCommonTangent, A), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_A_MetaData), Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_A_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_B_MetaData[] = {
		{ "Category", "CPP_TwoCirclesCommonTangent" },
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_TwoCirclesCommonTangent, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_B_MetaData), Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_C_MetaData[] = {
		{ "Category", "CPP_TwoCirclesCommonTangent" },
		{ "ModuleRelativePath", "CPP_TwoCirclesCommonTangent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_TwoCirclesCommonTangent, C), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_C_MetaData), Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_C_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::NewProp_C,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_TwoCirclesCommonTangent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::ClassParams = {
		&UCPP_TwoCirclesCommonTangent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCPP_TwoCirclesCommonTangent()
	{
		if (!Z_Registration_Info_UClass_UCPP_TwoCirclesCommonTangent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_TwoCirclesCommonTangent.OuterSingleton, Z_Construct_UClass_UCPP_TwoCirclesCommonTangent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_TwoCirclesCommonTangent.OuterSingleton;
	}
	template<> BIKE_API UClass* StaticClass<UCPP_TwoCirclesCommonTangent>()
	{
		return UCPP_TwoCirclesCommonTangent::StaticClass();
	}
	UCPP_TwoCirclesCommonTangent::UCPP_TwoCirclesCommonTangent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_TwoCirclesCommonTangent);
	UCPP_TwoCirclesCommonTangent::~UCPP_TwoCirclesCommonTangent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_TwoCirclesCommonTangent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_TwoCirclesCommonTangent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_TwoCirclesCommonTangent, UCPP_TwoCirclesCommonTangent::StaticClass, TEXT("UCPP_TwoCirclesCommonTangent"), &Z_Registration_Info_UClass_UCPP_TwoCirclesCommonTangent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_TwoCirclesCommonTangent), 1624609436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_TwoCirclesCommonTangent_h_1468472070(TEXT("/Script/Bike"),
		Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_TwoCirclesCommonTangent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bike_Bike_Source_Bike_CPP_TwoCirclesCommonTangent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
