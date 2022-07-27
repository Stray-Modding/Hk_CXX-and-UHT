#pragma once
#include "CoreMinimal.h"
#include "EVehicleDifferential4W.h"
#include "VehicleDifferential4WData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleDifferential4WData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVehicleDifferential4W::Type> DifferentialType;
    
    UPROPERTY(EditAnywhere)
    float FrontRearSplit;
    
    UPROPERTY(EditAnywhere)
    float FrontLeftRightSplit;
    
    UPROPERTY(EditAnywhere)
    float RearLeftRightSplit;
    
    UPROPERTY(EditAnywhere)
    float CentreBias;
    
    UPROPERTY(EditAnywhere)
    float FrontBias;
    
    UPROPERTY(EditAnywhere)
    float RearBias;
    
    PHYSXVEHICLES_API FVehicleDifferential4WData();
};

