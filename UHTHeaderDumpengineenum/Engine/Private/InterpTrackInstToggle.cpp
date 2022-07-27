#include "InterpTrackInstToggle.h"

UInterpTrackInstToggle::UInterpTrackInstToggle() {
    this->Action = ETTA_Off;
    this->LastUpdatePosition = 0.00f;
    this->bSavedActiveState = false;
}

