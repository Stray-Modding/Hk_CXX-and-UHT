#include "AmbientSound.h"
#include "AudioComponent.h"

void AAmbientSound::Stop() {
}

void AAmbientSound::Play(float StartTime) {
}

void AAmbientSound::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
}

void AAmbientSound::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
}

void AAmbientSound::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
}

AAmbientSound::AAmbientSound() {
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent0"));
}

