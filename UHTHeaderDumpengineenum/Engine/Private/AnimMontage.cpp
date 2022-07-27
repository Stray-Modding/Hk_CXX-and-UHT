#include "AnimMontage.h"

float UAnimMontage::GetDefaultBlendOutTime() const {
    return 0.0f;
}

UAnimMontage::UAnimMontage() {
    this->blendInTime = -1.00f;
    this->blendOutTime = -1.00f;
    this->BlendOutTriggerTime = -1.00f;
    this->SyncSlotIndex = 0;
    this->SlotAnimTracks.AddDefaulted(1);
    this->bEnableRootMotionTranslation = false;
    this->bEnableRootMotionRotation = false;
    this->bEnableAutoBlendOut = true;
    this->RootMotionRootLock = ERootMotionRootLock::RefPose;
    this->TimeStretchCurveName = TEXT("MontageTimeStretchCurve");
}

