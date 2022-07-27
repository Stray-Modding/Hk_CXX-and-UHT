#include "HitResult.h"

FHitResult::FHitResult() {
    this->FaceIndex = 0;
    this->Time = 0.00f;
    this->Distance = 0.00f;
    this->PenetrationDepth = 0.00f;
    this->Item = 0;
    this->ElementIndex = 0;
    this->bBlockingHit = false;
    this->bStartPenetrating = false;
}

