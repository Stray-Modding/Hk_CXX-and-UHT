#include "SoundSubmixSendInfo.h"

FSoundSubmixSendInfo::FSoundSubmixSendInfo() {
    this->SendLevelControlMethod = ESendLevelControlMethod::Linear;
    this->SendStage = ESubmixSendStage::PostDistanceAttenuation;
    this->SoundSubmix = NULL;
    this->SendLevel = 0.00f;
    this->MinSendLevel = 0.00f;
    this->MaxSendLevel = 0.00f;
    this->MinSendDistance = 0.00f;
    this->MaxSendDistance = 0.00f;
}

