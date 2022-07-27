#include "SoundAttenuationSettings.h"

FSoundAttenuationSettings::FSoundAttenuationSettings() {
    this->bAttenuate = false;
    this->bSpatialize = false;
    this->bAttenuateWithLPF = false;
    this->bEnableListenerFocus = false;
    this->bEnableFocusInterpolation = false;
    this->bEnableOcclusion = false;
    this->bUseComplexCollisionForOcclusion = false;
    this->bEnableReverbSend = false;
    this->bEnablePriorityAttenuation = false;
    this->bApplyNormalizationToStereoSounds = false;
    this->bEnableLogFrequencyScaling = false;
    this->bEnableSubmixSends = false;
    this->SpatializationAlgorithm = SPATIALIZATION_Default;
    this->BinauralRadius = 0.00f;
    this->AbsorptionMethod = EAirAbsorptionMethod::Linear;
    this->OcclusionTraceChannel = ECC_WorldStatic;
    this->ReverbSendMethod = EReverbSendMethod::Linear;
    this->PriorityAttenuationMethod = EPriorityAttenuationMethod::Linear;
    this->OmniRadius = 0.00f;
    this->StereoSpread = 0.00f;
    this->LPFRadiusMin = 0.00f;
    this->LPFRadiusMax = 0.00f;
    this->LPFFrequencyAtMin = 0.00f;
    this->LPFFrequencyAtMax = 0.00f;
    this->HPFFrequencyAtMin = 0.00f;
    this->HPFFrequencyAtMax = 0.00f;
    this->FocusAzimuth = 0.00f;
    this->NonFocusAzimuth = 0.00f;
    this->FocusDistanceScale = 0.00f;
    this->NonFocusDistanceScale = 0.00f;
    this->FocusPriorityScale = 0.00f;
    this->NonFocusPriorityScale = 0.00f;
    this->FocusVolumeAttenuation = 0.00f;
    this->NonFocusVolumeAttenuation = 0.00f;
    this->FocusAttackInterpSpeed = 0.00f;
    this->FocusReleaseInterpSpeed = 0.00f;
    this->OcclusionLowPassFilterFrequency = 0.00f;
    this->OcclusionVolumeAttenuation = 0.00f;
    this->OcclusionInterpolationTime = 0.00f;
    this->ReverbWetLevelMin = 0.00f;
    this->ReverbWetLevelMax = 0.00f;
    this->ReverbDistanceMin = 0.00f;
    this->ReverbDistanceMax = 0.00f;
    this->ManualReverbSendLevel = 0.00f;
    this->PriorityAttenuationMin = 0.00f;
    this->PriorityAttenuationMax = 0.00f;
    this->PriorityAttenuationDistanceMin = 0.00f;
    this->PriorityAttenuationDistanceMax = 0.00f;
    this->ManualPriorityAttenuation = 0.00f;
}

