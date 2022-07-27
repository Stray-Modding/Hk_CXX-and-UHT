#include "EdGraphPin_Deprecated.h"

UEdGraphPin_Deprecated::UEdGraphPin_Deprecated() {
    this->Direction = EGPD_Input;
    this->DefaultObject = NULL;
    this->ParentPin = NULL;
    this->ReferencePassThroughConnection = NULL;
}

