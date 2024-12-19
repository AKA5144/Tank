// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TOONTANKS_Tank_generated_h

#define FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATank(ATank&&); \
	ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank) \
	NO_API virtual ~ATank();


#define FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_11_PROLOG
#define FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Etudiant1_Downloads_Creajeux_UE_Eval2_Source_ToonTanks_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
