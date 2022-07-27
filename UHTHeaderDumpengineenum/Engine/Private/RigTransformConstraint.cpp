#include "RigTransformConstraint.h"

FRigTransformConstraint::FRigTransformConstraint() {
    this->TranformType = EConstraintTransform::Absolute;
    this->Weight = 0.00f;
}

