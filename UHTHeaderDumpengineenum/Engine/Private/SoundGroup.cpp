#include "SoundGroup.h"

FSoundGroup::FSoundGroup() {
    this->SoundGroup = SOUNDGROUP_Default;
    this->bAlwaysDecompressOnLoad = false;
    this->DecompressedDuration = 0.00f;
}

