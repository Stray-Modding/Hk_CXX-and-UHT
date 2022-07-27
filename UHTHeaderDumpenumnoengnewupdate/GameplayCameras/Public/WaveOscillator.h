#pragma once
#include "CoreMinimal.h"
#include "EInitialWaveOscillatorOffsetType.h"
#include "WaveOscillator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FWaveOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialWaveOscillatorOffsetType InitialOffsetType;
    
    FWaveOscillator();
};

