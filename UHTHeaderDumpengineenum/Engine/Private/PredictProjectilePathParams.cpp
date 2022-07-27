#include "PredictProjectilePathParams.h"

FPredictProjectilePathParams::FPredictProjectilePathParams() {
    this->bTraceWithCollision = false;
    this->ProjectileRadius = 0.00f;
    this->MaxSimTime = 0.00f;
    this->bTraceWithChannel = false;
    this->TraceChannel = ECC_WorldStatic;
    this->SimFrequency = 0.00f;
    this->OverrideGravityZ = 0.00f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DrawDebugTime = 0.00f;
    this->bTraceComplex = false;
}

