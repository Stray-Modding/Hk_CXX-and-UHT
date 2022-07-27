#include "VehicleAnimInstance.h"

class AWheeledVehicle;

AWheeledVehicle* UVehicleAnimInstance::GetVehicle() {
    return NULL;
}

UVehicleAnimInstance::UVehicleAnimInstance() {
    this->WheeledVehicleMovementComponent = NULL;
}

