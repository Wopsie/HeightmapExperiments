// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcTerrainGen/ProcTerrainGenGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcTerrainGenGameModeBase() {}
// Cross Module References
	PROCTERRAINGEN_API UClass* Z_Construct_UClass_AProcTerrainGenGameModeBase_NoRegister();
	PROCTERRAINGEN_API UClass* Z_Construct_UClass_AProcTerrainGenGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProcTerrainGen();
// End Cross Module References
	void AProcTerrainGenGameModeBase::StaticRegisterNativesAProcTerrainGenGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProcTerrainGenGameModeBase_NoRegister()
	{
		return AProcTerrainGenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcTerrainGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProcTerrainGenGameModeBase.h" },
		{ "ModuleRelativePath", "ProcTerrainGenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcTerrainGenGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::ClassParams = {
		&AProcTerrainGenGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProcTerrainGenGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProcTerrainGenGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProcTerrainGenGameModeBase, 697846730);
	template<> PROCTERRAINGEN_API UClass* StaticClass<AProcTerrainGenGameModeBase>()
	{
		return AProcTerrainGenGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProcTerrainGenGameModeBase(Z_Construct_UClass_AProcTerrainGenGameModeBase, &AProcTerrainGenGameModeBase::StaticClass, TEXT("/Script/ProcTerrainGen"), TEXT("AProcTerrainGenGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProcTerrainGenGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
