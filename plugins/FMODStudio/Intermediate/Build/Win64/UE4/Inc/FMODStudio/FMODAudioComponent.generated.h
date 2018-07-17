// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODEvent;
#ifdef FMODSTUDIO_FMODAudioComponent_generated_h
#error "FMODAudioComponent.generated.h already included, missing '#pragma once' in FMODAudioComponent.h"
#endif
#define FMODSTUDIO_FMODAudioComponent_generated_h

#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_84_GENERATED_BODY \
	friend FMODSTUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails(); \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_61_GENERATED_BODY \
	friend FMODSTUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails(); \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_125_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineBeat_Parms \
{ \
	int32 Bar; \
	int32 Beat; \
	int32 Position; \
	float Tempo; \
	int32 TimeSignatureUpper; \
	int32 TimeSignatureLower; \
}; \
static inline void FOnTimelineBeat_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineBeat, int32 Bar, int32 Beat, int32 Position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower) \
{ \
	_Script_FMODStudio_eventOnTimelineBeat_Parms Parms; \
	Parms.Bar=Bar; \
	Parms.Beat=Beat; \
	Parms.Position=Position; \
	Parms.Tempo=Tempo; \
	Parms.TimeSignatureUpper=TimeSignatureUpper; \
	Parms.TimeSignatureLower=TimeSignatureLower; \
	OnTimelineBeat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_123_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineMarker_Parms \
{ \
	FString Name; \
	int32 Position; \
}; \
static inline void FOnTimelineMarker_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineMarker, const FString& Name, int32 Position) \
{ \
	_Script_FMODStudio_eventOnTimelineMarker_Parms Parms; \
	Parms.Name=Name; \
	Parms.Position=Position; \
	OnTimelineMarker.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_121_DELEGATE \
static inline void FOnEventStopped_DelegateWrapper(const FMulticastScriptDelegate& OnEventStopped) \
{ \
	OnEventStopped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProgrammerSoundName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProgrammerSoundName(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimelinePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTimelinePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelinePosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelinePosition(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProperty) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProperty(EFMODEventProperty::Type(Z_Param_Property)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProperty) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProperty(EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetParameter(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetParameter(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPaused) \
	{ \
		P_GET_UBOOL(Z_Param_paused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPaused(Z_Param_paused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPitch(Z_Param_pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolume(Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerCue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerCue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEvent) \
	{ \
		P_GET_OBJECT(UFMODEvent,Z_Param_NewEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEvent(Z_Param_NewEvent); \
		P_NATIVE_END; \
	}


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProgrammerSoundName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProgrammerSoundName(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimelinePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTimelinePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimelinePosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimelinePosition(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProperty) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProperty(EFMODEventProperty::Type(Z_Param_Property)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProperty) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProperty(EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetParameter(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetParameter(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPaused) \
	{ \
		P_GET_UBOOL(Z_Param_paused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPaused(Z_Param_paused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPitch(Z_Param_pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolume(Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerCue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerCue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEvent) \
	{ \
		P_GET_OBJECT(UFMODEvent,Z_Param_NewEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEvent(Z_Param_NewEvent); \
		P_NATIVE_END; \
	}


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend FMODSTUDIO_API class UClass* Z_Construct_UClass_UFMODAudioComponent(); \
public: \
	DECLARE_CLASS(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend FMODSTUDIO_API class UClass* Z_Construct_UClass_UFMODAudioComponent(); \
public: \
	DECLARE_CLASS(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODAudioComponent(UFMODAudioComponent&&); \
	NO_API UFMODAudioComponent(const UFMODAudioComponent&); \
public:


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODAudioComponent(UFMODAudioComponent&&); \
	NO_API UFMODAudioComponent(const UFMODAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent)


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_PRIVATE_PROPERTY_OFFSET
#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_145_PROLOG
#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_PRIVATE_PROPERTY_OFFSET \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_RPC_WRAPPERS \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_INCLASS \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_PRIVATE_PROPERTY_OFFSET \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_INCLASS_NO_PURE_DECLS \
	BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_148_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FMODAudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BETeamGCU2018_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h


#define FOREACH_ENUM_EFMODEVENTPROPERTY(op) \
	op(EFMODEventProperty::ChannelPriority) \
	op(EFMODEventProperty::ScheduleDelay) \
	op(EFMODEventProperty::ScheduleLookahead) \
	op(EFMODEventProperty::MinimumDistance) \
	op(EFMODEventProperty::MaximumDistance) \
	op(EFMODEventProperty::Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
