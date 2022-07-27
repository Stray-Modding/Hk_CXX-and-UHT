#include "MediaPlayerOptions.h"

FMediaPlayerOptions::FMediaPlayerOptions() {
    this->PlayOnOpen = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
    this->loop = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
}

