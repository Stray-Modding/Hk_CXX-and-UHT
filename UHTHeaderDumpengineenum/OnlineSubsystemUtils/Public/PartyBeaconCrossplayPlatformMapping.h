#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconCrossplayPlatformMapping.generated.h"

USTRUCT(BlueprintType)
struct FPartyBeaconCrossplayPlatformMapping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlatformName;
    
    UPROPERTY()
    FString PlatformType;
    
    ONLINESUBSYSTEMUTILS_API FPartyBeaconCrossplayPlatformMapping();
};

