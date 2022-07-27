#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReverbEffect.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UReverbEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypassEarlyReflections;
    
    UPROPERTY(EditAnywhere)
    float ReflectionsDelay;
    
    UPROPERTY(EditAnywhere)
    float GainHF;
    
    UPROPERTY(EditAnywhere)
    float ReflectionsGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypassLateReflections;
    
    UPROPERTY(EditAnywhere)
    float LateDelay;
    
    UPROPERTY(EditAnywhere)
    float DecayTime;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float Diffusion;
    
    UPROPERTY(EditAnywhere)
    float AirAbsorptionGainHF;
    
    UPROPERTY(EditAnywhere)
    float DecayHFRatio;
    
    UPROPERTY(EditAnywhere)
    float LateGain;
    
    UPROPERTY(EditAnywhere)
    float Gain;
    
    UPROPERTY()
    float RoomRolloffFactor;
    
    UReverbEffect();
};

