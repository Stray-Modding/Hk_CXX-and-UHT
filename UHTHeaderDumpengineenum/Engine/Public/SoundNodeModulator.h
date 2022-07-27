#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeModulator.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeModulator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PitchMin;
    
    UPROPERTY(EditAnywhere)
    float PitchMax;
    
    UPROPERTY(EditAnywhere)
    float VolumeMin;
    
    UPROPERTY(EditAnywhere)
    float VolumeMax;
    
    USoundNodeModulator();
};

