#pragma once
#include "CoreMinimal.h"
#include "ParticleReplayTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FParticleReplayTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    int32 ClipIDNumber;
    
    ENGINE_API FParticleReplayTrackKey();
};

