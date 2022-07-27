#include "RootMotionFinishVelocitySettings.h"

FRootMotionFinishVelocitySettings::FRootMotionFinishVelocitySettings() {
    this->Mode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocity = 0.00f;
}

