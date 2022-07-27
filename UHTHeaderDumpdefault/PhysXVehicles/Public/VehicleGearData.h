#pragma once
#include "CoreMinimal.h"
#include "VehicleGearData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleGearData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Ratio;
    
    UPROPERTY(EditAnywhere)
    float DownRatio;
    
    UPROPERTY(EditAnywhere)
    float UpRatio;
    
    PHYSXVEHICLES_API FVehicleGearData();
};

