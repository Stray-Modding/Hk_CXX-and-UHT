#pragma once
#include "CoreMinimal.h"
#include "VehicleInputRate.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FVehicleInputRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallRate;
    
    FVehicleInputRate();
};

