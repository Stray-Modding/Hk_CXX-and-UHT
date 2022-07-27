#include "EdGraphTerminalType.h"

FEdGraphTerminalType::FEdGraphTerminalType() {
    this->bTerminalIsConst = false;
    this->bTerminalIsWeakPointer = false;
    this->bTerminalIsUObjectWrapper = false;
}

