#include "FastArraySerializer.h"

FFastArraySerializer::FFastArraySerializer() {
    this->ArrayReplicationKey = 0;
    this->DeltaFlags = EFastArraySerializerDeltaFlags::None;
}

