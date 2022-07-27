#include "SoundfieldEndpointSubmix.h"

USoundfieldEndpointSubmix::USoundfieldEndpointSubmix() {
    this->SoundfieldEndpointType = TEXT("Default Soundfield Endpoint");
    this->EndpointSettingsClass = NULL;
    this->EndpointSettings = NULL;
    this->EncodingSettingsClass = NULL;
    this->EncodingSettings = NULL;
}

