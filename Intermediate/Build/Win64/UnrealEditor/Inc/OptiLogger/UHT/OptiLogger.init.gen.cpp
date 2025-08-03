// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptiLogger_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OptiLogger;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OptiLogger()
	{
		if (!Z_Registration_Info_UPackage__Script_OptiLogger.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OptiLogger",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x088AD6B3,
				0xB2C4858D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OptiLogger.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OptiLogger.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OptiLogger(Z_Construct_UPackage__Script_OptiLogger, TEXT("/Script/OptiLogger"), Z_Registration_Info_UPackage__Script_OptiLogger, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x088AD6B3, 0xB2C4858D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
