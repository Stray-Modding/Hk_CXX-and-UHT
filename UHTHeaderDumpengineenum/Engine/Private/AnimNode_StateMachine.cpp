#include "AnimNode_StateMachine.h"

FAnimNode_StateMachine::FAnimNode_StateMachine() {
    this->StateMachineIndexInClass = 0;
    this->MaxTransitionsPerFrame = 0;
    this->bSkipFirstUpdateTransition = false;
    this->bReinitializeOnBecomingRelevant = false;
}

