#include "Timeline.h"

FTimeline::FTimeline() {
    this->LengthMode = TL_TimelineLength;
    this->bLooping = false;
    this->bReversePlayback = false;
    this->bPlaying = false;
    this->Length = 0.00f;
    this->PlayRate = 0.00f;
    this->Position = 0.00f;
}

