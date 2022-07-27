#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "WheeledVehicle.generated.h"

class USkeletalMeshComponent;
class UWheeledVehicleMovementComponent;

UCLASS(Abstract, Blueprintable)
class PHYSXVEHICLES_API AWheeledVehicle : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* VehicleMovement;
    
public:
    AWheeledVehicle();
};

