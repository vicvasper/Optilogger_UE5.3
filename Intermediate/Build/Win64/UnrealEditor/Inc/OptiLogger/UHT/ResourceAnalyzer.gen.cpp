// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptiLogger/Public/ResourceAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceAnalyzer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OPTILOGGER_API UClass* Z_Construct_UClass_UResourceAnalyzer();
	OPTILOGGER_API UClass* Z_Construct_UClass_UResourceAnalyzer_NoRegister();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FAudioAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FLightingAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAnalysisData();
	OPTILOGGER_API UScriptStruct* Z_Construct_UScriptStruct_FTextureAnalysisData();
	UPackage* Z_Construct_UPackage__Script_OptiLogger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData;
class UScriptStruct* FStaticMeshAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("StaticMeshAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FStaticMeshAnalysisData>()
{
	return FStaticMeshAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODVertexCounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODVertexCounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODVertexCounts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODTriangleCounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODTriangleCounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODTriangleCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedMemoryUsageMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedMemoryUsageMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Static Meshes\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Static Meshes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, VertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_VertexCount_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_VertexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_TriangleCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, TriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_TriangleCount_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_TriangleCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODCount = { "LODCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, LODCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODCount_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODCount_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts_Inner = { "LODVertexCounts", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts = { "LODVertexCounts", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, LODVertexCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts_Inner = { "LODTriangleCounts", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts = { "LODTriangleCounts", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, LODTriangleCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_BoundingBoxSize = { "BoundingBoxSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, BoundingBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB = { "EstimatedMemoryUsageMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAnalysisData, EstimatedMemoryUsageMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_TriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODVertexCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_LODTriangleCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_BoundingBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"StaticMeshAnalysisData",
		Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::PropPointers),
		sizeof(FStaticMeshAnalysisData),
		alignof(FStaticMeshAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData;
class UScriptStruct* FSkeletalMeshAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("SkeletalMeshAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FSkeletalMeshAnalysisData>()
{
	return FSkeletalMeshAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedMemoryUsageMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedMemoryUsageMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Skeletal Meshes\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Skeletal Meshes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoneCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoneCount = { "BoneCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, BoneCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoneCount_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoneCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, VertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_VertexCount_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_VertexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_LODCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_LODCount = { "LODCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, LODCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_LODCount_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_LODCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoundingBoxSize = { "BoundingBoxSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, BoundingBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoundingBoxSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB = { "EstimatedMemoryUsageMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAnalysisData, EstimatedMemoryUsageMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoneCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_LODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_BoundingBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"SkeletalMeshAnalysisData",
		Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::PropPointers),
		sizeof(FSkeletalMeshAnalysisData),
		alignof(FSkeletalMeshAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureAnalysisData;
class UScriptStruct* FTextureAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("TextureAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_TextureAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FTextureAnalysisData>()
{
	return FTextureAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipLevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MipLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVirtualTexture_MetaData[];
#endif
		static void NewProp_bIsVirtualTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedMemoryUsageMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedMemoryUsageMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Texturas\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Texturas" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Width_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_CompressionFormat_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_CompressionFormat = { "CompressionFormat", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, CompressionFormat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_CompressionFormat_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_CompressionFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_MipLevels_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_MipLevels = { "MipLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, MipLevels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_MipLevels_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_MipLevels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture_SetBit(void* Obj)
	{
		((FTextureAnalysisData*)Obj)->bIsVirtualTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture = { "bIsVirtualTexture", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTextureAnalysisData), &Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB = { "EstimatedMemoryUsageMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureAnalysisData, EstimatedMemoryUsageMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_CompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_MipLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_bIsVirtualTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"TextureAnalysisData",
		Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::PropPointers),
		sizeof(FTextureAnalysisData),
		alignof(FTextureAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTextureAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialAnalysisData;
class UScriptStruct* FMaterialAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("MaterialAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FMaterialAnalysisData>()
{
	return FMaterialAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureReferences_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureReferences;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertexShaderInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertexShaderInstructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPixelShaderInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPixelShaderInstructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalShaderInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalShaderInstructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComplexityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTranslucent_MetaData[];
#endif
		static void NewProp_bIsTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTranslucent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMasked_MetaData[];
#endif
		static void NewProp_bIsMasked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMasked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Materiales\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Materiales" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TextureReferences_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TextureReferences = { "TextureReferences", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, TextureReferences), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TextureReferences_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TextureReferences_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures_Inner = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, ReferencedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumVertexShaderInstructions_MetaData[] = {
		{ "Category", "Analysis" },
		{ "Comment", "// --- Aqu\xc3\xad a\xc3\xb1""adimos los tres campos con UPROPERTY ---\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "--- Aqu\xc3\xad a\xc3\xb1""adimos los tres campos con UPROPERTY ---" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumVertexShaderInstructions = { "NumVertexShaderInstructions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, NumVertexShaderInstructions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumVertexShaderInstructions_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumVertexShaderInstructions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumPixelShaderInstructions_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumPixelShaderInstructions = { "NumPixelShaderInstructions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, NumPixelShaderInstructions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumPixelShaderInstructions_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumPixelShaderInstructions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TotalShaderInstructions_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TotalShaderInstructions = { "TotalShaderInstructions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, TotalShaderInstructions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TotalShaderInstructions_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TotalShaderInstructions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ComplexityLevel_MetaData[] = {
		{ "Category", "Analysis" },
		{ "Comment", "// -----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ComplexityLevel = { "ComplexityLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialAnalysisData, ComplexityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ComplexityLevel_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ComplexityLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent_SetBit(void* Obj)
	{
		((FMaterialAnalysisData*)Obj)->bIsTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent = { "bIsTranslucent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialAnalysisData), &Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked_SetBit(void* Obj)
	{
		((FMaterialAnalysisData*)Obj)->bIsMasked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked = { "bIsMasked", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialAnalysisData), &Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked_MetaData), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TextureReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ReferencedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumVertexShaderInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_NumPixelShaderInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_TotalShaderInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_ComplexityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewProp_bIsMasked,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"MaterialAnalysisData",
		Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::PropPointers),
		sizeof(FMaterialAnalysisData),
		alignof(FMaterialAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationAnalysisData;
class UScriptStruct* FAnimationAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("AnimationAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FAnimationAnalysisData>()
{
	return FAnimationAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyframeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionScheme_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompressionScheme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedMemoryUsageMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedMemoryUsageMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Animaciones\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Animaciones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_FrameRate_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_FrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_KeyframeCount_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_KeyframeCount = { "KeyframeCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, KeyframeCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_KeyframeCount_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_KeyframeCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_CompressionScheme_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_CompressionScheme = { "CompressionScheme", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, CompressionScheme), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_CompressionScheme_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_CompressionScheme_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB = { "EstimatedMemoryUsageMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationAnalysisData, EstimatedMemoryUsageMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_KeyframeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_CompressionScheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"AnimationAnalysisData",
		Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::PropPointers),
		sizeof(FAnimationAnalysisData),
		alignof(FAnimationAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioAnalysisData;
class UScriptStruct* FAudioAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("AudioAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_AudioAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FAudioAnalysisData>()
{
	return FAudioAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BitDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedMemoryUsageMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedMemoryUsageMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Audio\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Audio" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_SampleRate_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_SampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_NumChannels_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_NumChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_CompressionFormat_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_CompressionFormat = { "CompressionFormat", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, CompressionFormat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_CompressionFormat_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_CompressionFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, BitDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_BitDepth_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_BitDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB = { "EstimatedMemoryUsageMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioAnalysisData, EstimatedMemoryUsageMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_CompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewProp_EstimatedMemoryUsageMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"AudioAnalysisData",
		Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::PropPointers),
		sizeof(FAudioAnalysisData),
		alignof(FAudioAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightingAnalysisData;
class UScriptStruct* FLightingAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightingAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightingAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightingAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("LightingAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_LightingAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FLightingAnalysisData>()
{
	return FLightingAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightingAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LightName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LightType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasLightFunction_MetaData[];
#endif
		static void NewProp_bHasLightFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLightFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Luces\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Luces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightingAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightName = { "LightName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, LightName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightName_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightType_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, LightType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightType_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, Mobility), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Mobility_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Mobility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightColor_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightingAnalysisData, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_AttenuationRadius_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_AttenuationRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((FLightingAnalysisData*)Obj)->bCastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightingAnalysisData), &Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction_SetBit(void* Obj)
	{
		((FLightingAnalysisData*)Obj)->bHasLightFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction = { "bHasLightFunction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightingAnalysisData), &Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction_MetaData), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bCastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewProp_bHasLightFunction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"LightingAnalysisData",
		Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::PropPointers),
		sizeof(FLightingAnalysisData),
		alignof(FLightingAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLightingAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_LightingAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightingAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightingAnalysisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostProcessAnalysisData;
class UScriptStruct* FPostProcessAnalysisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessAnalysisData, (UObject*)Z_Construct_UPackage__Script_OptiLogger(), TEXT("PostProcessAnalysisData"));
	}
	return Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.OuterSingleton;
}
template<> OPTILOGGER_API UScriptStruct* StaticStruct<FPostProcessAnalysisData>()
{
	return FPostProcessAnalysisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VolumeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnbound_MetaData[];
#endif
		static void NewProp_bIsUnbound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnbound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estructura de datos para el an\xc3\xa1lisis de Post-Procesado\n" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "Estructura de datos para el an\xc3\xa1lisis de Post-Procesado" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessAnalysisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_VolumeName_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_VolumeName = { "VolumeName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPostProcessAnalysisData, VolumeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_VolumeName_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_VolumeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound_SetBit(void* Obj)
	{
		((FPostProcessAnalysisData*)Obj)->bIsUnbound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound = { "bIsUnbound", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPostProcessAnalysisData), &Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPostProcessAnalysisData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_Priority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendRadius_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPostProcessAnalysisData, BlendRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendRadius_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPostProcessAnalysisData, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendWeight_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendWeight_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects_Inner = { "ActiveEffects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects = { "ActiveEffects", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPostProcessAnalysisData, ActiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects_MetaData), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_VolumeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_bIsUnbound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewProp_ActiveEffects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
		nullptr,
		&NewStructOps,
		"PostProcessAnalysisData",
		Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::PropPointers),
		sizeof(FPostProcessAnalysisData),
		alignof(FPostProcessAnalysisData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessAnalysisData()
	{
		if (!Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.InnerSingleton, Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostProcessAnalysisData.InnerSingleton;
	}
	void UResourceAnalyzer::StaticRegisterNativesUResourceAnalyzer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResourceAnalyzer);
	UClass* Z_Construct_UClass_UResourceAnalyzer_NoRegister()
	{
		return UResourceAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UResourceAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResourceAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptiLogger,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceAnalyzer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResourceAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// API export/import macro\n" },
		{ "IncludePath", "ResourceAnalyzer.h" },
		{ "ModuleRelativePath", "Public/ResourceAnalyzer.h" },
		{ "ToolTip", "API export/import macro" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResourceAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceAnalyzer_Statics::ClassParams = {
		&UResourceAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceAnalyzer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UResourceAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UResourceAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceAnalyzer.OuterSingleton, Z_Construct_UClass_UResourceAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResourceAnalyzer.OuterSingleton;
	}
	template<> OPTILOGGER_API UClass* StaticClass<UResourceAnalyzer>()
	{
		return UResourceAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceAnalyzer);
	UResourceAnalyzer::~UResourceAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ScriptStructInfo[] = {
		{ FStaticMeshAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshAnalysisData_Statics::NewStructOps, TEXT("StaticMeshAnalysisData"), &Z_Registration_Info_UScriptStruct_StaticMeshAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshAnalysisData), 3211268612U) },
		{ FSkeletalMeshAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshAnalysisData_Statics::NewStructOps, TEXT("SkeletalMeshAnalysisData"), &Z_Registration_Info_UScriptStruct_SkeletalMeshAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshAnalysisData), 3625481882U) },
		{ FTextureAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FTextureAnalysisData_Statics::NewStructOps, TEXT("TextureAnalysisData"), &Z_Registration_Info_UScriptStruct_TextureAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureAnalysisData), 2739983454U) },
		{ FMaterialAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FMaterialAnalysisData_Statics::NewStructOps, TEXT("MaterialAnalysisData"), &Z_Registration_Info_UScriptStruct_MaterialAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialAnalysisData), 1115481247U) },
		{ FAnimationAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FAnimationAnalysisData_Statics::NewStructOps, TEXT("AnimationAnalysisData"), &Z_Registration_Info_UScriptStruct_AnimationAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationAnalysisData), 2836397223U) },
		{ FAudioAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FAudioAnalysisData_Statics::NewStructOps, TEXT("AudioAnalysisData"), &Z_Registration_Info_UScriptStruct_AudioAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioAnalysisData), 4288239387U) },
		{ FLightingAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FLightingAnalysisData_Statics::NewStructOps, TEXT("LightingAnalysisData"), &Z_Registration_Info_UScriptStruct_LightingAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightingAnalysisData), 3275402622U) },
		{ FPostProcessAnalysisData::StaticStruct, Z_Construct_UScriptStruct_FPostProcessAnalysisData_Statics::NewStructOps, TEXT("PostProcessAnalysisData"), &Z_Registration_Info_UScriptStruct_PostProcessAnalysisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostProcessAnalysisData), 284178766U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResourceAnalyzer, UResourceAnalyzer::StaticClass, TEXT("UResourceAnalyzer"), &Z_Registration_Info_UClass_UResourceAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceAnalyzer), 187320821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_4216110086(TEXT("/Script/OptiLogger"),
		Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_PluginsUnreal_OptiLoggerV2_OptiLogger_HostProject_Plugins_OptiLogger_Source_OptiLogger_Public_ResourceAnalyzer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
