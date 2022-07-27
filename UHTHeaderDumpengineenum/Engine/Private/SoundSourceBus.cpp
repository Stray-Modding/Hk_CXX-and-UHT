#include "SoundSourceBus.h"

USoundSourceBus::USoundSourceBus() {
    this->SourceBusChannels = ESourceBusChannels::Mono;
    this->SourceBusDuration = 0.00f;
    this->AudioBus = NULL;
    this->bAutoDeactivateWhenSilent = false;
}

