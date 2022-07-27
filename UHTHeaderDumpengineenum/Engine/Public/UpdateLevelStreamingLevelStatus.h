#pragma once
#include "CoreMinimal.h"
#include "UpdateLevelStreamingLevelStatus.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FUpdateLevelStreamingLevelStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PackageName;
    
    UPROPERTY()
    int32 LODIndex;
    
    UPROPERTY()
    bool bNewShouldBeLoaded;
    
    UPROPERTY()
    bool bNewShouldBeVisible;
    
    UPROPERTY()
    bool bNewShouldBlockOnLoad;
    
    FUpdateLevelStreamingLevelStatus();
};

