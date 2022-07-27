#include "CustomChannelSetup.h"

FCustomChannelSetup::FCustomChannelSetup() {
    this->Channel = ECC_WorldStatic;
    this->DefaultResponse = ECR_Ignore;
    this->bTraceType = false;
    this->bStaticObject = false;
}

