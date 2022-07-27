#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleBeamBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleBeamNoise.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bLowFreq_Enabled: 1;
    
    UPROPERTY(EditAnywhere)
    int32 Frequency;
    
    UPROPERTY(EditAnywhere)
    int32 Frequency_LowRange;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector NoiseRange;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat NoiseRangeScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bNRScaleEmitterTime: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector NoiseSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 bSmooth: 1;
    
    UPROPERTY(EditAnywhere)
    float NoiseLockRadius;
    
    UPROPERTY()
    uint8 bNoiseLock: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOscillate: 1;
    
    UPROPERTY(EditAnywhere)
    float NoiseLockTime;
    
    UPROPERTY(EditAnywhere)
    float NoiseTension;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseNoiseTangents: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat NoiseTangentStrength;
    
    UPROPERTY(EditAnywhere)
    int32 NoiseTessellation;
    
    UPROPERTY(EditAnywhere)
    uint8 bTargetNoise: 1;
    
    UPROPERTY(EditAnywhere)
    float FrequencyDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyNoiseScale: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat NoiseScale;
    
    UParticleModuleBeamNoise();
};

