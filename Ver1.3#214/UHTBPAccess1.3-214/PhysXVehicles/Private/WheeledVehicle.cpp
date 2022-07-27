#include "WheeledVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "WheeledVehicleMovementComponent4W.h"

AWheeledVehicle::AWheeledVehicle() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
    this->VehicleMovement = CreateDefaultSubobject<UWheeledVehicleMovementComponent4W>(TEXT("MovementComp"));
}

