#include "MemberReference.h"

FMemberReference::FMemberReference() {
    this->MemberParent = NULL;
    this->bSelfContext = false;
    this->bWasDeprecated = false;
}

