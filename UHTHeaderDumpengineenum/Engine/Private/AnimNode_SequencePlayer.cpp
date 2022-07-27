#include "AnimNode_SequencePlayer.h"

FAnimNode_SequencePlayer::FAnimNode_SequencePlayer() {
    this->Sequence = NULL;
    this->PlayRateBasis = 0.00f;
    this->PlayRate = 0.00f;
    this->StartPosition = 0.00f;
    this->bLoopAnimation = false;
}

