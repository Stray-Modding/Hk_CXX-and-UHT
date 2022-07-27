#include "LuminARCandidateImage.h"

bool ULuminARCandidateImage::GetUseUnreliablePose() const {
    return false;
}

bool ULuminARCandidateImage::GetImageIsStationary() const {
    return false;
}

EMagicLeapImageTargetOrientation ULuminARCandidateImage::GetAxisOrientation() const {
    return EMagicLeapImageTargetOrientation::ForwardAxisAsNormal;
}

ULuminARCandidateImage::ULuminARCandidateImage() {
    this->bUseUnreliablePose = false;
    this->bImageIsStationary = false;
    this->AxisOrientation = EMagicLeapImageTargetOrientation::ForwardAxisAsNormal;
}

