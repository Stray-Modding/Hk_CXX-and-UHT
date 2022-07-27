#include "AnimSegment.h"

FAnimSegment::FAnimSegment() {
    this->AnimReference = NULL;
    this->StartPos = 0.00f;
    this->AnimStartTime = 0.00f;
    this->AnimEndTime = 0.00f;
    this->AnimPlayRate = 0.00f;
    this->LoopingCount = 0;
}

