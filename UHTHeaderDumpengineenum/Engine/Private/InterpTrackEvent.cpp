#include "InterpTrackEvent.h"

UInterpTrackEvent::UInterpTrackEvent() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->bFireEventsWhenJumpingForwards = false;
    this->bUseCustomEventName = false;
}

