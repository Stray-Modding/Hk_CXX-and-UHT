#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "VehicleEngineData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleEngineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TorqueCurve;
    
    UPROPERTY(EditAnywhere)
    float MaxRPM;
    
    UPROPERTY(EditAnywhere)
    float MOI;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DampingRateFullThrottle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DampingRateZeroThrottleClutchEngaged;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DampingRateZeroThrottleClutchDisengaged;
    
    PHYSXVEHICLES_API FVehicleEngineData();
};

