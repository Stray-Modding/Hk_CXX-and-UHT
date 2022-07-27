#include "EdGraphNode.h"

UEdGraphNode::UEdGraphNode() {
    this->NodePosX = 0;
    this->NodePosY = 0;
    this->NodeWidth = 0;
    this->NodeHeight = 0;
    this->AdvancedPinDisplay = ENodeAdvancedPins::NoPins;
    this->EnabledState = ENodeEnabledState::Enabled;
    this->bDisplayAsDisabled = false;
    this->bUserSetEnabledState = false;
    this->bIsNodeEnabled = true;
    this->bHasCompilerMessage = false;
    this->ErrorType = 0;
}

