#pragma once
#include "CoreMinimal.h"
#include "VehicleGearData.h"
#include "VehicleTransmissionData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleTransmissionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseGearAutoBox;
    
    UPROPERTY(EditAnywhere)
    float GearSwitchTime;
    
    UPROPERTY(EditAnywhere)
    float GearAutoBoxLatency;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FinalRatio;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FVehicleGearData> ForwardGears;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ReverseGearRatio;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NeutralGearUpRatio;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ClutchStrength;
    
    PHYSXVEHICLES_API FVehicleTransmissionData();
};

