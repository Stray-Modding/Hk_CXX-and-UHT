#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent.h"
#include "SimpleWheeledVehicleMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSXVEHICLES_API USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    USimpleWheeledVehicleMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetSteerAngle(float SteerAngle, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveTorque(float DriveTorque, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
    
};

