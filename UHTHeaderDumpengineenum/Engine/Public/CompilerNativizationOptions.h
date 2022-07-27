#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "CompilerNativizationOptions.generated.h"

USTRUCT()
struct FCompilerNativizationOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PlatformName;
    
    UPROPERTY()
    bool ServerOnlyPlatform;
    
    UPROPERTY()
    bool ClientOnlyPlatform;
    
    UPROPERTY()
    bool bExcludeMonolithicHeaders;
    
    UPROPERTY()
    TArray<FName> ExcludedModules;
    
    UPROPERTY()
    TSet<FSoftObjectPath> ExcludedAssets;
    
    UPROPERTY()
    TArray<FString> ExcludedFolderPaths;
    
    ENGINE_API FCompilerNativizationOptions();
};

