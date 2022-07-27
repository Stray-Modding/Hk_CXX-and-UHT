#include "RigidBodyErrorCorrection.h"

FRigidBodyErrorCorrection::FRigidBodyErrorCorrection() {
    this->PingExtrapolation = 0.00f;
    this->PingLimit = 0.00f;
    this->ErrorPerLinearDifference = 0.00f;
    this->ErrorPerAngularDifference = 0.00f;
    this->MaxRestoredStateError = 0.00f;
    this->MaxLinearHardSnapDistance = 0.00f;
    this->PositionLerp = 0.00f;
    this->AngleLerp = 0.00f;
    this->LinearVelocityCoefficient = 0.00f;
    this->AngularVelocityCoefficient = 0.00f;
    this->ErrorAccumulationSeconds = 0.00f;
    this->ErrorAccumulationDistanceSq = 0.00f;
    this->ErrorAccumulationSimilarity = 0.00f;
}

