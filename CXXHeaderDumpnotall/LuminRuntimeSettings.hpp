#ifndef UE4SS_SDK_LuminRuntimeSettings_HPP
#define UE4SS_SDK_LuminRuntimeSettings_HPP

#include "LuminRuntimeSettings_enums.hpp"

struct FLocalizedIconInfo
{
    FString LanguageCode;
    FDirectoryPath IconModelPath;
    FDirectoryPath IconPortalPath;

};

struct FLocalizedIconInfos
{
    TArray<FLocalizedIconInfo> IconData;

};

struct FLuminComponentSubElement
{
    ELuminComponentSubElementType ElementType;
    FString Value;

};

struct FLuminComponentElement
{
    FString Name;
    FString VisibleName;
    FString ExecutableName;
    ELuminComponentType ComponentType;
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;

};

struct FLocalizedAppName
{
    FString LanguageCode;
    FString AppName;

};

class ULuminRuntimeSettings : public UObject
{
    FString PackageName;
    FString ApplicationDisplayName;
    ELuminFrameTimingHint FrameTimingHint;
    bool bProtectedContent;
    bool bManualCallToAppReady;
    bool bUseMobileRendering;
    bool bUseVulkan;
    FFilePath Certificate;
    FDirectoryPath IconModelPath;
    FDirectoryPath IconPortalPath;
    FLocalizedIconInfos LocalizedIconInfos;
    int32 VersionCode;
    int32 MinimumAPILevel;
    TArray<ELuminPrivilege> AppPrivileges;
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    TArray<FLuminComponentElement> ExtraComponentElements;
    FString SpatializationPlugin;
    FString ReverbPlugin;
    FString OcclusionPlugin;
    int32 SoundCueCookQualityIndex;
    bool bRemoveDebugInfo;
    FDirectoryPath VulkanValidationLayerLibs;
    bool bFrameVignette;
    TArray<FLocalizedAppName> LocalizedAppNames;

};

#endif
