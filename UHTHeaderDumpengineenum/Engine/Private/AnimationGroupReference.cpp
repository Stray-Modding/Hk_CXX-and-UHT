#include "AnimationGroupReference.h"

FAnimationGroupReference::FAnimationGroupReference() {
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->GroupScope = EAnimSyncGroupScope::Local;
}

