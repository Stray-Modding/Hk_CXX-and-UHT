#include "KeyBind.h"

FKeyBind::FKeyBind() {
    this->Control = false;
    this->Shift = false;
    this->Alt = false;
    this->Cmd = false;
    this->bIgnoreCtrl = false;
    this->bIgnoreShift = false;
    this->bIgnoreAlt = false;
    this->bIgnoreCmd = false;
    this->bDisabled = false;
}

