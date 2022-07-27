#include "MagicLeapSharedWorldGameState.h"
#include "Net/UnrealNetwork.h"

void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData() {
}

void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms() {
}

FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform_Implementation() const {
    return FTransform{};
}

void AMagicLeapSharedWorldGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMagicLeapSharedWorldGameState, SharedWorldData);
    DOREPLIFETIME(AMagicLeapSharedWorldGameState, AlignmentTransforms);
}

AMagicLeapSharedWorldGameState::AMagicLeapSharedWorldGameState() {
}

