#include "TouchInterface.h"

UTouchInterface::UTouchInterface() {
    this->ActiveOpacity = 1.00f;
    this->InactiveOpacity = 0.10f;
    this->TimeUntilDeactive = 0.50f;
    this->TimeUntilReset = 2.00f;
    this->ActivationDelay = 0.00f;
    this->bPreventRecenter = false;
    this->StartupDelay = 0.00f;
}

