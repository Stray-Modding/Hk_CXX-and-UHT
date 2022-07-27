#pragma once
#include "CoreMinimal.h"
#include "ELuminPrivilege.h"
#include "ELuminFrameTimingHint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
#include "LuminComponentSubElement.h"
#include "LuminComponentElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "LocalizedIconInfos.h"
#include "LocalizedAppName.h"
#include "LuminRuntimeSettings.generated.h"

UCLASS(DefaultConfig)
class LUMINRUNTIMESETTINGS_API ULuminRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString PackageName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ApplicationDisplayName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ELuminFrameTimingHint FrameTimingHint;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bProtectedContent;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bManualCallToAppReady;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseMobileRendering;
    
    UPROPERTY(GlobalConfig)
    bool bUseVulkan;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FFilePath Certificate;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FDirectoryPath IconModelPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FDirectoryPath IconPortalPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FLocalizedIconInfos LocalizedIconInfos;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 VersionCode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MinimumAPILevel;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<ELuminPrivilege> AppPrivileges;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FLuminComponentElement> ExtraComponentElements;
    
    UPROPERTY(Config, EditAnywhere)
    FString SpatializationPlugin;
    
    UPROPERTY(Config, EditAnywhere)
    FString ReverbPlugin;
    
    UPROPERTY(Config, EditAnywhere)
    FString OcclusionPlugin;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 SoundCueCookQualityIndex;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bRemoveDebugInfo;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FDirectoryPath VulkanValidationLayerLibs;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bFrameVignette;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FLocalizedAppName> LocalizedAppNames;
    
    ULuminRuntimeSettings();
};

