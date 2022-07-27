#include "BranchingPointMarker.h"

FBranchingPointMarker::FBranchingPointMarker() {
    this->NotifyIndex = 0;
    this->TriggerTime = 0.00f;
    this->NotifyEventType = EAnimNotifyEventType::Begin;
}

