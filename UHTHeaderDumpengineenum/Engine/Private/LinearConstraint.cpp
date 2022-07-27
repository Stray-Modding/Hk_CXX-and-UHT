#include "LinearConstraint.h"

FLinearConstraint::FLinearConstraint() {
    this->Limit = 0.00f;
    this->XMotion = LCM_Free;
    this->YMotion = LCM_Free;
    this->ZMotion = LCM_Free;
}

