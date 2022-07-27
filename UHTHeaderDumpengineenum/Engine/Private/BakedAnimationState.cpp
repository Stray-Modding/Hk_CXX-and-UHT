#include "BakedAnimationState.h"

FBakedAnimationState::FBakedAnimationState() {
    this->StateRootNodeIndex = 0;
    this->StartNotify = 0;
    this->EndNotify = 0;
    this->FullyBlendedNotify = 0;
    this->bIsAConduit = false;
    this->EntryRuleNodeIndex = 0;
    this->bAlwaysResetOnEntry = false;
}

