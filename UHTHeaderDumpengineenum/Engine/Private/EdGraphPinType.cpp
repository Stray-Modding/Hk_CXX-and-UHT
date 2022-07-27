#include "EdGraphPinType.h"

FEdGraphPinType::FEdGraphPinType() {
    this->ContainerType = EPinContainerType::None;
    this->bIsArray = false;
    this->bIsReference = false;
    this->bIsConst = false;
    this->bIsWeakPointer = false;
    this->bIsUObjectWrapper = false;
}

