#pragma once
#include "CoreMinimal.h"
#include "EventTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    ENGINE_API FEventTrackKey();
};

