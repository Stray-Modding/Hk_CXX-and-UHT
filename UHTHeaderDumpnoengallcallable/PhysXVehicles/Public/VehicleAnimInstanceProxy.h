#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "VehicleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FVehicleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FVehicleAnimInstanceProxy();
};

