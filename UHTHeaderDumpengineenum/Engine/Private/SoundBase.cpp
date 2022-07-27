#include "SoundBase.h"

USoundBase::USoundBase() {
    this->SoundClassObject = NULL;
    this->bDebug = false;
    this->bOverrideConcurrency = false;
    this->bEnableBusSends = true;
    this->bEnableBaseSubmix = true;
    this->bEnableSubmixSends = true;
    this->bHasDelayNode = false;
    this->bHasConcatenatorNode = false;
    this->bBypassVolumeScaleForPriority = false;
    this->VirtualizationMode = EVirtualizationMode::Restart;
    this->Duration = -1.00f;
    this->MaxDistance = 0.00f;
    this->TotalSamples = 0.00f;
    this->Priority = 1.00f;
    this->AttenuationSettings = NULL;
    this->SoundSubmixObject = NULL;
    this->SourceEffectChain = NULL;
}

