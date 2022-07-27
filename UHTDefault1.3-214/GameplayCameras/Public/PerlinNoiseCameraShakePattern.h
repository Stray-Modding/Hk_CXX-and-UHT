#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseShaker.h"
#include "SimpleCameraShakePattern.h"
#include "PerlinNoiseCameraShakePattern.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class GAMEPLAYCAMERAS_API UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationAmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerlinNoiseShaker FOV;
    
    UPerlinNoiseCameraShakePattern();
};

