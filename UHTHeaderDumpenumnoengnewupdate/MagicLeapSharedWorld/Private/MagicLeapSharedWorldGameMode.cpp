#include "MagicLeapSharedWorldGameMode.h"

bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients() {
    return false;
}

void AMagicLeapSharedWorldGameMode::SelectChosenOne_Implementation() {
}

void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData_Implementation(FMagicLeapSharedWorldSharedData& NewSharedWorldData) {
}

AMagicLeapSharedWorldGameMode::AMagicLeapSharedWorldGameMode() {
    this->PinSelectionConfidenceThreshold = 0.89f;
    this->ChosenOne = NULL;
}

