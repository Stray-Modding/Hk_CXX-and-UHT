#include "DebugTextInfo.h"

FDebugTextInfo::FDebugTextInfo() {
    this->SrcActor = NULL;
    this->TimeRemaining = 0.00f;
    this->Duration = 0.00f;
    this->bAbsoluteLocation = false;
    this->bKeepAttachedToActor = false;
    this->bDrawShadow = false;
    this->Font = NULL;
    this->FontScale = 0.00f;
}

