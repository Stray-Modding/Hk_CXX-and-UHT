#include "PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "EngineMessage.h"



void APlayerState::OnRep_UniqueId() {
}

void APlayerState::OnRep_Score() {
}

void APlayerState::OnRep_PlayerName() {
}

void APlayerState::OnRep_PlayerId() {
}

void APlayerState::OnRep_bIsInactive() {
}

bool APlayerState::IsOnlyASpectator() const {
    return false;
}

FString APlayerState::GetPlayerName() const {
    return TEXT("");
}

void APlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerState, Score);
    DOREPLIFETIME(APlayerState, PlayerId);
    DOREPLIFETIME(APlayerState, Ping);
    DOREPLIFETIME(APlayerState, bIsSpectator);
    DOREPLIFETIME(APlayerState, bOnlySpectator);
    DOREPLIFETIME(APlayerState, bIsABot);
    DOREPLIFETIME(APlayerState, bIsInactive);
    DOREPLIFETIME(APlayerState, bFromPreviousLevel);
    DOREPLIFETIME(APlayerState, StartTime);
    DOREPLIFETIME(APlayerState, UniqueId);
    DOREPLIFETIME(APlayerState, PlayerNamePrivate);
}

APlayerState::APlayerState() {
    this->Score = 0.00f;
    this->PlayerId = 0;
    this->Ping = 0;
    this->bShouldUpdateReplicatedPing = true;
    this->bIsSpectator = false;
    this->bOnlySpectator = false;
    this->bIsABot = false;
    this->bIsInactive = false;
    this->bFromPreviousLevel = false;
    this->StartTime = 0;
    this->EngineMessageClass = UEngineMessage::StaticClass();
    this->PawnPrivate = NULL;
}

