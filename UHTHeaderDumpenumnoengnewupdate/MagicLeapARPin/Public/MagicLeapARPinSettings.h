#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MagicLeapARPinState.h"
#include "MagicLeapARPinSettings.generated.h"

UCLASS(DefaultConfig)
class MAGICLEAPARPIN_API UMagicLeapARPinSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    float UpdateCheckFrequency;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;
    
    UMagicLeapARPinSettings();
};

