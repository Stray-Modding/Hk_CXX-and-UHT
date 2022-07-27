#pragma once
#include "CoreMinimal.h"
#include "AnimTrack.h"
#include "SlotAnimationTrack.generated.h"

USTRUCT(BlueprintType)
struct FSlotAnimationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere)
    FAnimTrack AnimTrack;
    
    ENGINE_API FSlotAnimationTrack();
};

