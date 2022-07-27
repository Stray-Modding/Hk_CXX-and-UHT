#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapARPin -ObjectName=MagicLeapARPinState -FallbackName=MagicLeapARPinState
#include "MagicLeapSharedWorldPinData.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldPinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGuid PinId;
    
    UPROPERTY(BlueprintReadWrite)
    FMagicLeapARPinState PinState;
    
    FMagicLeapSharedWorldPinData();
};

