#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDestinationSettings.generated.h"

class USoundModulatorBase;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDestinationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundModulatorBase* Modulator;
    
    FSoundModulationDestinationSettings();
};

