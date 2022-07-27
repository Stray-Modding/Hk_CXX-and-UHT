#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "FindFloorResult.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FFindFloorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bBlockingHit: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bWalkableFloor: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bLineTrace: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float FloorDist;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float LineDist;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FHitResult HitResult;
    
    FFindFloorResult();
};

