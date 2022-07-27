#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDestinationSettings.h"
#include "SoundModulationDefaultSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings VolumeModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings PitchModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings HighpassModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings LowpassModulationDestination;
    
    FSoundModulationDefaultSettings();
};

