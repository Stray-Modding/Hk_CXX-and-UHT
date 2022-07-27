#pragma once
#include "CoreMinimal.h"
#include "SoundTrackKey.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSoundTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float Volume;
    
    UPROPERTY()
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    ENGINE_API FSoundTrackKey();
};

