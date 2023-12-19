// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBike_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Bike;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Bike()
	{
		if (!Z_Registration_Info_UPackage__Script_Bike.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Bike",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x44F39F73,
				0xD369C9B0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Bike.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Bike.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Bike(Z_Construct_UPackage__Script_Bike, TEXT("/Script/Bike"), Z_Registration_Info_UPackage__Script_Bike, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x44F39F73, 0xD369C9B0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
