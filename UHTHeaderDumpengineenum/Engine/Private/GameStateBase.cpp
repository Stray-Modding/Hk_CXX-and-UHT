#include "GameStateBase.h"
#include "Net/UnrealNetwork.h"

class AController;

void AGameStateBase::OnRep_SpectatorClass() {
}

void AGameStateBase::OnRep_ReplicatedWorldTimeSeconds() {
}

void AGameStateBase::OnRep_ReplicatedHasBegunPlay() {
}

void AGameStateBase::OnRep_GameModeClass() {
}

bool AGameStateBase::HasMatchStarted() const {
    return false;
}

bool AGameStateBase::HasMatchEnded() const {
    return false;
}

bool AGameStateBase::HasBegunPlay() const {
    return false;
}

float AGameStateBase::GetServerWorldTimeSeconds() const {
    return 0.0f;
}

float AGameStateBase::GetPlayerStartTime(AController* Controller) const {
    return 0.0f;
}

float AGameStateBase::GetPlayerRespawnDelay(AController* Controller) const {
    return 0.0f;
}

void AGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameStateBase, GameModeClass);
    DOREPLIFETIME(AGameStateBase, SpectatorClass);
    DOREPLIFETIME(AGameStateBase, bReplicatedHasBegunPlay);
    DOREPLIFETIME(AGameStateBase, ReplicatedWorldTimeSeconds);
}

AGameStateBase::AGameStateBase() {
    this->GameModeClass = NULL;
    this->AuthorityGameMode = NULL;
    this->SpectatorClass = NULL;
    this->bReplicatedHasBegunPlay = false;
    this->ReplicatedWorldTimeSeconds = 0.00f;
    this->ServerWorldTimeSecondsDelta = 0.00f;
    this->ServerWorldTimeSecondsUpdateFrequency = 0.10f;
}

