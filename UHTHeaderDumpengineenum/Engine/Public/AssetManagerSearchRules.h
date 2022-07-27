#pragma once
#include "CoreMinimal.h"
#include "AssetManagerSearchRules.generated.h"

USTRUCT(BlueprintType)
struct FAssetManagerSearchRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> AssetScanPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> IncludePatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ExcludePatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* AssetBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasBlueprintClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceSynchronousScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipVirtualPathExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipManagerIncludeCheck;
    
    ENGINE_API FAssetManagerSearchRules();
};

