#pragma once
#include "CoreMinimal.h"
#include "OnTimelineFloatDelegate.h"
#include "TimelineFloatTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTimelineFloatTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* FloatCurve;
    
    UPROPERTY()
    FOnTimelineFloat InterpFunc;
    
    UPROPERTY()
    FName TrackName;
    
    UPROPERTY()
    FName FloatPropertyName;
    
    ENGINE_API FTimelineFloatTrack();
};

