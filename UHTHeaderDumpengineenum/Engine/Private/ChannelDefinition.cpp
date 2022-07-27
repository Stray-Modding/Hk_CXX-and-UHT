#include "ChannelDefinition.h"

FChannelDefinition::FChannelDefinition() {
    this->ChannelClass = NULL;
    this->StaticChannelIndex = 0;
    this->bTickOnCreate = false;
    this->bServerOpen = false;
    this->bClientOpen = false;
    this->bInitialServer = false;
    this->bInitialClient = false;
}

