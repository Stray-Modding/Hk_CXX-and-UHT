#include "GameEngine.h"

UGameEngine::UGameEngine() {
    this->MaxDeltaTime = 0.00f;
    this->ServerFlushLogInterval = 30.00f;
    this->GameInstance = NULL;
}

