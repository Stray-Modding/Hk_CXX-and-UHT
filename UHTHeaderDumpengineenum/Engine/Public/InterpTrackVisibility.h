#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "VisibilityTrackKey.h"
#include "InterpTrackVisibility.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackVisibility : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVisibilityTrackKey> VisibilityTrack;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenJumpingForwards: 1;
    
    UInterpTrackVisibility();
};

