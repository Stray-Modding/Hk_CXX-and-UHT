#include "VehicleEngineData.h"

FVehicleEngineData::FVehicleEngineData() {
    this->MaxRPM = 0.00f;
    this->MOI = 0.00f;
    this->DampingRateFullThrottle = 0.00f;
    this->DampingRateZeroThrottleClutchEngaged = 0.00f;
    this->DampingRateZeroThrottleClutchDisengaged = 0.00f;
}

