#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDefaultSettings.h"
#include "EModulationRouting.h"
#include "SoundModulationDefaultRoutingSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModulationRouting VolumeRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModulationRouting PitchRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModulationRouting HighpassRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModulationRouting LowpassRouting;
    
    FSoundModulationDefaultRoutingSettings();
};

