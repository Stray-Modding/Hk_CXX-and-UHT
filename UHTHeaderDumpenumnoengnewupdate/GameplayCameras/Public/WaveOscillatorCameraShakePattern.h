#pragma once
#include "CoreMinimal.h"
#include "SimpleCameraShakePattern.h"
#include "WaveOscillator.h"
#include "WaveOscillatorCameraShakePattern.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class GAMEPLAYCAMERAS_API UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationAmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWaveOscillator FOV;
    
    UWaveOscillatorCameraShakePattern();
};

