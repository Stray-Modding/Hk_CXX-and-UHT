#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetRulesCustomOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "PrimaryAssetTypeInfo.h"
#include "PrimaryAssetRulesOverride.h"
#include "DirectoryPath.h"
#include "AssetManagerRedirect.h"
#include "AssetManagerSettings.generated.h"

UCLASS(DefaultConfig, NotPlaceable, Config=Game)
class ENGINE_API UAssetManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectoryPath> DirectoriesToExclude;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOnlyCookProductionAssets;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldManagerDetermineTypeAndName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldGuessTypeAndNameInEditor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldAcquireMissingChunksOnLoad;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAssetManagerRedirect> AssetPathRedirects;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TSet<FName> MetaDataTagsForAssetRegistry;
    
    UAssetManagerSettings();
};

