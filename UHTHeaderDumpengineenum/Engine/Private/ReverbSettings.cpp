#include "ReverbSettings.h"

FReverbSettings::FReverbSettings() {
    this->bApplyReverb = false;
    this->ReverbEffect = NULL;
    this->ReverbPluginEffect = NULL;
    this->Volume = 0.00f;
    this->FadeTime = 0.00f;
}

