#include "GameMode.h"
#include "EngineMessage.h"

void AGameMode::StartMatch() {
}

void AGameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit) {
}

void AGameMode::Say(const FString& Msg) {
}

void AGameMode::RestartGame() {
}

bool AGameMode::ReadyToStartMatch_Implementation() {
    return false;
}

bool AGameMode::ReadyToEndMatch_Implementation() {
    return false;
}


bool AGameMode::IsMatchInProgress() const {
    return false;
}

FName AGameMode::GetMatchState() const {
    return NAME_None;
}

void AGameMode::EndMatch() {
}

void AGameMode::AbortMatch() {
}

AGameMode::AGameMode() {
    this->MatchState = TEXT("EnteringMap");
    this->bDelayedStart = false;
    this->NumSpectators = 0;
    this->NumPlayers = 0;
    this->NumBots = 0;
    this->MinRespawnDelay = 1.00f;
    this->NumTravellingPlayers = 0;
    this->EngineMessageClass = UEngineMessage::StaticClass();
    this->InactivePlayerStateLifeSpan = 300.00f;
    this->MaxInactivePlayers = 16;
    this->bHandleDedicatedServerReplays = false;
}

