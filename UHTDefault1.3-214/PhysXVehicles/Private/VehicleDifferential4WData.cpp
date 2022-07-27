#include "VehicleDifferential4WData.h"

FVehicleDifferential4WData::FVehicleDifferential4WData() {
    this->DifferentialType = EVehicleDifferential4W::LimitedSlip_4W;
    this->FrontRearSplit = 0.00f;
    this->FrontLeftRightSplit = 0.00f;
    this->RearLeftRightSplit = 0.00f;
    this->CentreBias = 0.00f;
    this->FrontBias = 0.00f;
    this->RearBias = 0.00f;
}

