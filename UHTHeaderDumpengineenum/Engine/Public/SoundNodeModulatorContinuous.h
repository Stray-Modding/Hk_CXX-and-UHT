#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "ModulatorContinuousParams.h"
#include "SoundNodeModulatorContinuous.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeModulatorContinuous : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FModulatorContinuousParams PitchModulationParams;
    
    UPROPERTY(EditAnywhere)
    FModulatorContinuousParams VolumeModulationParams;
    
    USoundNodeModulatorContinuous();
};

