#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MagicLeapARPinState.h"
#include "MagicLeapARPinSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class MAGICLEAPARPIN_API UMagicLeapARPinSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float UpdateCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;
    
    UMagicLeapARPinSettings();
};

