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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontRearSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontLeftRightSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearLeftRightSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentreBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearBias;
    
    PHYSXVEHICLES_API FVehicleDifferential4WData();
};

