#include "SoundModulationDefaultRoutingSettings.h"

FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings() {
    this->VolumeRouting = EModulationRouting::Disable;
    this->PitchRouting = EModulationRouting::Disable;
    this->HighpassRouting = EModulationRouting::Disable;
    this->LowpassRouting = EModulationRouting::Disable;
}

