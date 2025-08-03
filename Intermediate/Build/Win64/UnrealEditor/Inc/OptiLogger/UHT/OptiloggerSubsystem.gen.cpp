// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptiLogger/Public/OptiloggerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptiloggerSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	OPTILOGGER_API UClass* Z_Construct_UClass_UOptiloggerSubsystem();
	OPTILOGGER_API UClass* Z_Construct_UClass_UOptiloggerSubsystem_NoRegister();
	OPTILOGGER_API UClass* Z_Construct_UClass_UResourceAnalyzer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptiLogger();
// End Cross Module References
	void UOptiloggerSubsystem::StaticRegisterNativesUOptiloggerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptiloggerSubsystem);
	UClass* Z_Construct_UClass_UOptiloggerSubsystem_NoRegister()
	{
		return UOptiloggerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOptiloggerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceAnalyzer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResourceAnalyzer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptiloggerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptiloggerSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptiloggerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptiloggerSubsystem.h" },
		{ "ModuleRelativePath", "Public/OptiloggerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptiloggerSubsystem_Statics::NewProp_ResourceAnalyzer_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptiloggerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptiloggerSubsystem_Statics::NewProp_ResourceAnalyzer = { "ResourceAnalyzer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptiloggerSubsystem, ResourceAnalyzer), Z_Construct_UClass_UResourceAnalyzer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptiloggerSubsystem_Statics::NewProp_ResourceAnalyzer_MetaData), Z_Construct_UClass_UOptiloggerSubsystem_Statics::NewProp_ResourceAnalyzer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptiloggerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptiloggerSubsystem_Statics::NewProp_ResourceAnalyzer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptiloggerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptiloggerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptiloggerSubsystem_Statics::ClassParams = {
		&UOptiloggerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptiloggerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptiloggerSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptiloggerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptiloggerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptiloggerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptiloggerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOptiloggerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptiloggerSubsystem.OuterSingleton, Z_Construct_UClass_UOptiloggerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptiloggerSubsystem.OuterSingleton;
	}
	template<> OPTILOGGER_API UClass* StaticClass<UOptiloggerSubsystem>()
	{
		return UOptiloggerSubsystem::StaticClass();
	}
	UOptiloggerSubsystem::UOptiloggerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptiloggerSubsystem);
	UOptiloggerSubsystem::~UOptiloggerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_OptiloggerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_OptiloggerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptiloggerSubsystem, UOptiloggerSubsystem::StaticClass, TEXT("UOptiloggerSubsystem"), &Z_Registration_Info_UClass_UOptiloggerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptiloggerSubsystem), 3166331682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_OptiloggerSubsystem_h_1768405794(TEXT("/Script/OptiLogger"),
		Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_OptiloggerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_OptiloggerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
