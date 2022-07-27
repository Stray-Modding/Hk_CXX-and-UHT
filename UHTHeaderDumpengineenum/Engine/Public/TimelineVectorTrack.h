#pragma once
#include "CoreMinimal.h"
#include "OnTimelineVectorDelegate.h"
#include "TimelineVectorTrack.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FTimelineVectorTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveVector* VectorCurve;
    
    UPROPERTY()
    FOnTimelineVector InterpFunc;
    
    UPROPERTY()
    FName TrackName;
    
    UPROPERTY()
    FName VectorPropertyName;
    
    ENGINE_API FTimelineVectorTrack();
};

