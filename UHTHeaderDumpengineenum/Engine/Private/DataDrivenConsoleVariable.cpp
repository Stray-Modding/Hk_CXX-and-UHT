#include "DataDrivenConsoleVariable.h"

FDataDrivenConsoleVariable::FDataDrivenConsoleVariable() {
    this->Type = FDataDrivenCVarType::CVarFloat;
    this->DefaultValueFloat = 0.00f;
    this->DefaultValueInt = 0;
    this->DefaultValueBool = false;
}

