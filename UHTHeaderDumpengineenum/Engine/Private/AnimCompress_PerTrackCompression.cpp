#include "AnimCompress_PerTrackCompression.h"

UAnimCompress_PerTrackCompression::UAnimCompress_PerTrackCompression() {
    this->MaxZeroingThreshold = 0.00f;
    this->MaxPosDiffBitwise = 0.01f;
    this->MaxAngleDiffBitwise = 0.00f;
    this->MaxScaleDiffBitwise = 0.00f;
    this->AllowedRotationFormats.AddDefaulted(2);
    this->AllowedTranslationFormats.AddDefaulted(3);
    this->AllowedScaleFormats.AddDefaulted(3);
    this->bResampleAnimation = false;
    this->ResampledFramerate = 15.00f;
    this->MinKeysForResampling = 10;
    this->bUseAdaptiveError = false;
    this->bUseOverrideForEndEffectors = false;
    this->TrackHeightBias = 1;
    this->ParentingDivisor = 1.00f;
    this->ParentingDivisorExponent = 1.00f;
    this->bUseAdaptiveError2 = false;
    this->RotationErrorSourceRatio = 0.80f;
    this->TranslationErrorSourceRatio = 0.80f;
    this->ScaleErrorSourceRatio = 0.00f;
    this->MaxErrorPerTrackRatio = 0.30f;
    this->PerturbationProbeSize = 0.00f;
}

