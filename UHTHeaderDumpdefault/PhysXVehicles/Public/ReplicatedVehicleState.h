#pragma once
#include "CoreMinimal.h"
#include "ReplicatedVehicleState.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FReplicatedVehicleState {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SteeringInput;
    
    UPROPERTY()
    float ThrottleInput;
    
    UPROPERTY()
    float BrakeInput;
    
    UPROPERTY()
    float HandbrakeInput;
    
    UPROPERTY()
    int32 CurrentGear;
    
    FReplicatedVehicleState();
};

