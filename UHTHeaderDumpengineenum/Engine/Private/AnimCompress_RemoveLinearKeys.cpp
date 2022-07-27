#include "AnimCompress_RemoveLinearKeys.h"

UAnimCompress_RemoveLinearKeys::UAnimCompress_RemoveLinearKeys() {
    this->MaxPosDiff = 0.00f;
    this->MaxAngleDiff = 0.00f;
    this->MaxScaleDiff = 0.00f;
    this->MaxEffectorDiff = 0.00f;
    this->MinEffectorDiff = 0.00f;
    this->EffectorDiffSocket = 0.00f;
    this->ParentKeyScale = 2.00f;
    this->bRetarget = true;
    this->bActuallyFilterLinearKeys = true;
}

