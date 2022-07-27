#pragma once
#include "CoreMinimal.h"
#include "LightToSlaveTrace.generated.h"

class AZurgPawnSlave;
class UAntiZurgSpotlightComponent;

USTRUCT(BlueprintType)
struct FLightToSlaveTrace {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY()
    AZurgPawnSlave* slave;
    
    HK_PROJECT_API FLightToSlaveTrace();
};

