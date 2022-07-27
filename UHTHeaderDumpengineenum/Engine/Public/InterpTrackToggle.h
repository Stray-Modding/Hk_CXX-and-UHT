#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "ToggleTrackKey.h"
#include "InterpTrackToggle.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackToggle : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FToggleTrackKey> ToggleTrack;
    
    UPROPERTY(EditAnywhere)
    uint8 bActivateSystemEachUpdate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bActivateWithJustAttachedFlag: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenJumpingForwards: 1;
    
    UInterpTrackToggle();
};

