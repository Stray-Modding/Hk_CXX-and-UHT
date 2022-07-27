#pragma once
#include "CoreMinimal.h"
#include "VehicleInputRate.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FVehicleInputRate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RiseRate;
    
    UPROPERTY(EditAnywhere)
    float FallRate;
    
    FVehicleInputRate();
};

