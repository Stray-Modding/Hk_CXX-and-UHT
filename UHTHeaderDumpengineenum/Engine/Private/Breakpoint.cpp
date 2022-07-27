#include "Breakpoint.h"

UBreakpoint::UBreakpoint() {
    this->bEnabled = false;
    this->Node = NULL;
    this->bStepOnce = false;
    this->bStepOnce_WasPreviouslyDisabled = false;
    this->bStepOnce_RemoveAfterHit = false;
}

