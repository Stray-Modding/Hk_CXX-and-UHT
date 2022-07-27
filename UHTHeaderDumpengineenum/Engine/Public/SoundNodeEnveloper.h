#pragma once
#include "CoreMinimal.h"
#include "RuntimeFloatCurve.h"
#include "SoundNode.h"
#include "SoundNodeEnveloper.generated.h"

class UDistributionFloatConstantCurve;

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeEnveloper : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LoopStart;
    
    UPROPERTY(EditAnywhere)
    float LoopEnd;
    
    UPROPERTY(EditAnywhere)
    float DurationAfterLoop;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoopIndefinitely: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoop: 1;
    
    UPROPERTY(Export)
    UDistributionFloatConstantCurve* VolumeInterpCurve;
    
    UPROPERTY(Export)
    UDistributionFloatConstantCurve* PitchInterpCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve VolumeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve PitchCurve;
    
    UPROPERTY(EditAnywhere)
    float PitchMin;
    
    UPROPERTY(EditAnywhere)
    float PitchMax;
    
    UPROPERTY(EditAnywhere)
    float VolumeMin;
    
    UPROPERTY(EditAnywhere)
    float VolumeMax;
    
    USoundNodeEnveloper();
};

