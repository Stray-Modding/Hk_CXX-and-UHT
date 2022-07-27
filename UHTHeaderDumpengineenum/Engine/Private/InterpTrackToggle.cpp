#include "InterpTrackToggle.h"

UInterpTrackToggle::UInterpTrackToggle() {
    this->bActivateSystemEachUpdate = false;
    this->bActivateWithJustAttachedFlag = true;
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->bFireEventsWhenJumpingForwards = true;
}

