#pragma once
#include "CoreMinimal.h"
#include "AnimSyncMarker.h"
#include "MarkerSyncData.generated.h"

USTRUCT(BlueprintType)
struct FMarkerSyncData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;
    
    ENGINE_API FMarkerSyncData();
};

