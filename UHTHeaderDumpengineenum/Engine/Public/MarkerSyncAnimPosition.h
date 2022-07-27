#pragma once
#include "CoreMinimal.h"
#include "MarkerSyncAnimPosition.generated.h"

USTRUCT(BlueprintType)
struct FMarkerSyncAnimPosition {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PreviousMarkerName;
    
    UPROPERTY()
    FName NextMarkerName;
    
    UPROPERTY()
    float PositionBetweenMarkers;
    
    ENGINE_API FMarkerSyncAnimPosition();
};

