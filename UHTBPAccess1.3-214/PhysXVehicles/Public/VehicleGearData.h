#pragma once
#include "CoreMinimal.h"
#include "VehicleGearData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpRatio;
    
    PHYSXVEHICLES_API FVehicleGearData();
};

