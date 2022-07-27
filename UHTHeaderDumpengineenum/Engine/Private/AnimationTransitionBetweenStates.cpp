#include "AnimationTransitionBetweenStates.h"

FAnimationTransitionBetweenStates::FAnimationTransitionBetweenStates() {
    this->PreviousState = 0;
    this->NextState = 0;
    this->CrossfadeDuration = 0.00f;
    this->StartNotify = 0;
    this->EndNotify = 0;
    this->InterruptNotify = 0;
    this->BlendMode = EAlphaBlendOption::Linear;
    this->CustomCurve = NULL;
    this->BlendProfile = NULL;
    this->LogicType = ETransitionLogicType::TLT_StandardBlend;
}

