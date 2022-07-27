#include "LuminARSessionConfig.h"

ULuminARSessionConfig::ULuminARSessionConfig() {
    this->MaxPlaneQueryResults = 200;
    this->MinPlaneArea = 400;
    this->bArbitraryOrientationPlaneDetection = false;
    this->bDiscardZeroExtentPlanes = true;
    this->bDefaultUseUnreliablePose = false;
}

