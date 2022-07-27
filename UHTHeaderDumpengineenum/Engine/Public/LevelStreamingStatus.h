#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingStatus.generated.h"

USTRUCT(BlueprintType)
struct FLevelStreamingStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PackageName;
    
    UPROPERTY()
    uint8 bShouldBeLoaded: 1;
    
    UPROPERTY()
    uint8 bShouldBeVisible: 1;
    
    UPROPERTY()
    uint32 LODIndex;
    
    ENGINE_API FLevelStreamingStatus();
};

