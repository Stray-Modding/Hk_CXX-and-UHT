#include "AttenuationSubmixSendSettings.h"

FAttenuationSubmixSendSettings::FAttenuationSubmixSendSettings() {
    this->Submix = NULL;
    this->SubmixSendMethod = ESubmixSendMethod::Linear;
    this->SubmixSendLevelMin = 0.00f;
    this->SubmixSendLevelMax = 0.00f;
    this->SubmixSendDistanceMin = 0.00f;
    this->SubmixSendDistanceMax = 0.00f;
    this->ManualSubmixSendLevel = 0.00f;
}

