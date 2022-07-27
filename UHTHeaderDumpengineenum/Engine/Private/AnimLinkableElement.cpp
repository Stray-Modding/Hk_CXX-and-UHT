#include "AnimLinkableElement.h"

FAnimLinkableElement::FAnimLinkableElement() {
    this->LinkedMontage = NULL;
    this->SlotIndex = 0;
    this->SegmentIndex = 0;
    this->LinkMethod = EAnimLinkMethod::Absolute;
    this->CachedLinkMethod = EAnimLinkMethod::Absolute;
    this->SegmentBeginTime = 0.00f;
    this->SegmentLength = 0.00f;
    this->LinkValue = 0.00f;
    this->LinkedSequence = NULL;
}

