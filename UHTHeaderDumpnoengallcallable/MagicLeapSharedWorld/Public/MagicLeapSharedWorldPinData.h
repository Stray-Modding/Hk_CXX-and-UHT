#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapARPin -ObjectName=MagicLeapARPinState -FallbackName=MagicLeapARPinState
#include "MagicLeapSharedWorldPinData.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldPinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PinId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapARPinState PinState;
    
    FMagicLeapSharedWorldPinData();
};

