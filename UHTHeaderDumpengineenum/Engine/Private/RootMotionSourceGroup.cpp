#include "RootMotionSourceGroup.h"

FRootMotionSourceGroup::FRootMotionSourceGroup() {
    this->bHasAdditiveSources = false;
    this->bHasOverrideSources = false;
    this->bHasOverrideSourcesWithIgnoreZAccumulate = false;
    this->bIsAdditiveVelocityApplied = false;
}

