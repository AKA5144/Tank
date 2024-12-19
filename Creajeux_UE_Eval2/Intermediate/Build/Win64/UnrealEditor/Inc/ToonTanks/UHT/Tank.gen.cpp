// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Tank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOONTANKS_API UClass* Z_Construct_UClass_ATank();
TOONTANKS_API UClass* Z_Construct_UClass_ATank_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class ATank
void ATank::StaticRegisterNativesATank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATank);
UClass* Z_Construct_UClass_ATank_NoRegister()
{
	return ATank::StaticClass();
}
struct Z_Construct_UClass_ATank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TankBody_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TankTurret_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TankBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TankTurret;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankBody = { "TankBody", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, TankBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TankBody_MetaData), NewProp_TankBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankTurret = { "TankTurret", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, TankTurret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TankTurret_MetaData), NewProp_TankTurret_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankTurret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
	&ATank::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams), Z_Construct_UClass_ATank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATank()
{
	if (!Z_Registration_Info_UClass_ATank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATank.OuterSingleton, Z_Construct_UClass_ATank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATank.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<ATank>()
{
	return ATank::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
ATank::~ATank() {}
// End Class ATank

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATank, ATank::StaticClass, TEXT("ATank"), &Z_Registration_Info_UClass_ATank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATank), 2165222035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_3463750525(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
