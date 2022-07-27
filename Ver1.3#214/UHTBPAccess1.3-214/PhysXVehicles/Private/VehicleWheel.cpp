#include "VehicleWheel.h"

bool UVehicleWheel::IsInAir() const {
    return false;
}

float UVehicleWheel::GetSuspensionOffset() const {
    return 0.0f;
}

float UVehicleWheel::GetSteerAngle() const {
    return 0.0f;
}

float UVehicleWheel::GetRotationAngle() const {
    return 0.0f;
}

UVehicleWheel::UVehicleWheel() {
    this->bDontCreateShape = false;
    this->bAutoAdjustCollisionSize = true;
    this->ShapeRadius = 30.00f;
    this->ShapeWidth = 10.00f;
    this->Mass = 20.00f;
    this->DampingRate = 0.25f;
    this->SteerAngle = 70.00f;
    this->bAffectedByHandbrake = true;
    this->TireType = NULL;
    this->TireConfig = NULL;
    this->LatStiffMaxLoad = 2.00f;
    this->LatStiffValue = 17.00f;
    this->LongStiffValue = 1000.00f;
    this->SuspensionForceOffset = 0.00f;
    this->SuspensionMaxRaise = 10.00f;
    this->SuspensionMaxDrop = 10.00f;
    this->SuspensionNaturalFrequency = 7.00f;
    this->SuspensionDampingRatio = 1.00f;
    this->SweepType = SimpleAndComplex;
    this->MaxBrakeTorque = 1500.00f;
    this->MaxHandBrakeTorque = 3000.00f;
    this->VehicleSim = NULL;
    this->WheelIndex = 0;
    this->DebugLongSlip = 0.00f;
    this->DebugLatSlip = 0.00f;
    this->DebugNormalizedTireLoad = 0.00f;
    this->DebugWheelTorque = 0.00f;
    this->DebugLongForce = 0.00f;
    this->DebugLatForce = 0.00f;
}

