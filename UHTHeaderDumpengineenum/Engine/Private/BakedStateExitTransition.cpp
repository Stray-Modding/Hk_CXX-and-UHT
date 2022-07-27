#include "BakedStateExitTransition.h"

FBakedStateExitTransition::FBakedStateExitTransition() {
    this->CanTakeDelegateIndex = 0;
    this->CustomResultNodeIndex = 0;
    this->TransitionIndex = 0;
    this->bDesiredTransitionReturnValue = false;
    this->bAutomaticRemainingTimeRule = false;
}

