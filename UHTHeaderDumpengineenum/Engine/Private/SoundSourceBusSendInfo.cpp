#include "SoundSourceBusSendInfo.h"

FSoundSourceBusSendInfo::FSoundSourceBusSendInfo() {
    this->SourceBusSendLevelControlMethod = ESourceBusSendLevelControlMethod::Linear;
    this->SoundSourceBus = NULL;
    this->AudioBus = NULL;
    this->SendLevel = 0.00f;
    this->MinSendLevel = 0.00f;
    this->MaxSendLevel = 0.00f;
    this->MinSendDistance = 0.00f;
    this->MaxSendDistance = 0.00f;
}

