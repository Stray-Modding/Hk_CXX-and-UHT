#include "AudioVolumeSubmixSendSettings.h"

FAudioVolumeSubmixSendSettings::FAudioVolumeSubmixSendSettings() {
    this->ListenerLocationState = EAudioVolumeLocationState::InsideTheVolume;
    this->SourceLocationState = EAudioVolumeLocationState::InsideTheVolume;
}

