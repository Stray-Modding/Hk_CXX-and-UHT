#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeOscillator.generated.h"

UCLASS(EditInlineNew)
class USoundNodeOscillator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bModulateVolume: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bModulatePitch: 1;
    
    UPROPERTY(EditAnywhere)
    float AmplitudeMin;
    
    UPROPERTY(EditAnywhere)
    float AmplitudeMax;
    
    UPROPERTY(EditAnywhere)
    float FrequencyMin;
    
    UPROPERTY(EditAnywhere)
    float FrequencyMax;
    
    UPROPERTY(EditAnywhere)
    float OffsetMin;
    
    UPROPERTY(EditAnywhere)
    float OffsetMax;
    
    UPROPERTY(EditAnywhere)
    float CenterMin;
    
    UPROPERTY(EditAnywhere)
    float CenterMax;
    
    USoundNodeOscillator();
};

