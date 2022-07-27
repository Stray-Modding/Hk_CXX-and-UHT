#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VehicleAnimInstance.generated.h"

class UWheeledVehicleMovementComponent;
class AWheeledVehicle;

UCLASS(Blueprintable, NonTransient)
class PHYSXVEHICLES_API UVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;
    
public:
    UVehicleAnimInstance();
    UFUNCTION(BlueprintCallable)
    AWheeledVehicle* GetVehicle();
    
};

