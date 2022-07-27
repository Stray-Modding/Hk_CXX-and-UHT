#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "EventTrackKey.h"
#include "InterpTrackEvent.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackEvent : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FEventTrackKey> EventTrack;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenJumpingForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseCustomEventName: 1;
    
    UInterpTrackEvent();
};

