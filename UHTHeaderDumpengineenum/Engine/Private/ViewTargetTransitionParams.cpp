#include "ViewTargetTransitionParams.h"

FViewTargetTransitionParams::FViewTargetTransitionParams() {
    this->BlendTime = 0.00f;
    this->BlendFunction = VTBlend_Linear;
    this->BlendExp = 0.00f;
    this->bLockOutgoing = false;
}

