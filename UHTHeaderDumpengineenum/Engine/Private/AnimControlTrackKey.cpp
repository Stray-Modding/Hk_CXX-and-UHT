#include "AnimControlTrackKey.h"

FAnimControlTrackKey::FAnimControlTrackKey() {
    this->StartTime = 0.00f;
    this->AnimSeq = NULL;
    this->AnimStartOffset = 0.00f;
    this->AnimEndOffset = 0.00f;
    this->AnimPlayRate = 0.00f;
    this->bLooping = false;
    this->bReverse = false;
}

