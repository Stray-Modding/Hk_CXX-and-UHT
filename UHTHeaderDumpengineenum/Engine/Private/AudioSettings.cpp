#include "AudioSettings.h"

UAudioSettings::UAudioSettings() {
    this->VoiPSampleRate = EVoiceSampleRate::Low16000Hz;
    this->DefaultReverbSendLevel = 0.00f;
    this->MaximumConcurrentStreams = 64;
    this->GlobalMinPitchScale = 0.00f;
    this->GlobalMaxPitchScale = 4.00f;
    this->QualityLevels.AddDefaulted(1);
    this->bAllowPlayWhenSilent = true;
    this->bDisableMasterEQ = false;
    this->bAllowCenterChannel3DPanning = false;
    this->NumStoppingSources = 8;
    this->PanningMethod = EPanningMethod::EqualPower;
    this->MonoChannelUpmixMethod = EMonoChannelUpmixMethod::EqualPower;
    this->DialogueFilenameFormat = TEXT("{DialogueGuid}_{ContextId}");
}

