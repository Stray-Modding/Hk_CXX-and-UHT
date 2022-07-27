#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "WheeledVehicle.generated.h"

class UWheeledVehicleMovementComponent;
class USkeletalMeshComponent;

UCLASS(Abstract)
class PHYSXVEHICLES_API AWheeledVehicle : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* VehicleMovement;
    
public:
    AWheeledVehicle();
};

