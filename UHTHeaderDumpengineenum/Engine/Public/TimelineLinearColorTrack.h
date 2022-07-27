#pragma once
#include "CoreMinimal.h"
#include "OnTimelineLinearColorDelegate.h"
#include "TimelineLinearColorTrack.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FTimelineLinearColorTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveLinearColor* LinearColorCurve;
    
    UPROPERTY()
    FOnTimelineLinearColor InterpFunc;
    
    UPROPERTY()
    FName TrackName;
    
    UPROPERTY()
    FName LinearColorPropertyName;
    
    ENGINE_API FTimelineLinearColorTrack();
};

