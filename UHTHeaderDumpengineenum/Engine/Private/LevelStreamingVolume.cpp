#include "LevelStreamingVolume.h"

ALevelStreamingVolume::ALevelStreamingVolume() {
    this->bEditorPreVisOnly = false;
    this->bDisabled = false;
    this->StreamingUsage = SVB_LoadingAndVisibility;
}

