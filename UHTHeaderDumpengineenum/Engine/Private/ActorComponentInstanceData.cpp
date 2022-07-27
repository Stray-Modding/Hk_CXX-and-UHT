#include "ActorComponentInstanceData.h"

FActorComponentInstanceData::FActorComponentInstanceData() {
    this->SourceComponentTemplate = NULL;
    this->SourceComponentCreationMethod = EComponentCreationMethod::Native;
    this->SourceComponentTypeSerializedIndex = 0;
}

