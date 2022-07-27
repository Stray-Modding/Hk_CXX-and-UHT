#include "GameModeBase.h"
#include "PlayerState.h"
#include "PlayerController.h"
#include "GameSession.h"
#include "GameStateBase.h"
#include "HUD.h"
#include "DefaultPawn.h"
#include "SpectatorPawn.h"
#include "ServerStatReplicator.h"

class AController;
class AActor;
class APawn;

void AGameModeBase::StartPlay() {
}

APawn* AGameModeBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) {
    return NULL;
}

APawn* AGameModeBase::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) {
    return NULL;
}

bool AGameModeBase::ShouldReset_Implementation(AActor* ActorToReset) {
    return false;
}

void AGameModeBase::ReturnToMainMenuHost() {
}

void AGameModeBase::RestartPlayerAtTransform(AController* NewPlayer, const FTransform& SpawnTransform) {
}

void AGameModeBase::RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot) {
}

void AGameModeBase::RestartPlayer(AController* NewPlayer) {
}

void AGameModeBase::ResetLevel() {
}

bool AGameModeBase::PlayerCanRestart_Implementation(APlayerController* Player) {
    return false;
}

bool AGameModeBase::MustSpectate_Implementation(APlayerController* NewPlayerController) const {
    return false;
}






AActor* AGameModeBase::K2_FindPlayerStart(AController* Player, const FString& IncomingName) {
    return NULL;
}

void AGameModeBase::InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer) {
}

void AGameModeBase::InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer) {
}

bool AGameModeBase::HasMatchStarted() const {
    return false;
}

bool AGameModeBase::HasMatchEnded() const {
    return false;
}

void AGameModeBase::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) {
}

int32 AGameModeBase::GetNumSpectators() {
    return 0;
}

int32 AGameModeBase::GetNumPlayers() {
    return 0;
}

UClass* AGameModeBase::GetDefaultPawnClassForController_Implementation(AController* InController) {
    return NULL;
}

AActor* AGameModeBase::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) {
    return NULL;
}

AActor* AGameModeBase::ChoosePlayerStart_Implementation(AController* Player) {
    return NULL;
}

void AGameModeBase::ChangeName(AController* Controller, const FString& NewName, bool bNameChange) {
}

bool AGameModeBase::CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget) {
    return false;
}

AGameModeBase::AGameModeBase() {
    this->GameSessionClass = AGameSession::StaticClass();
    this->GameStateClass = AGameStateBase::StaticClass();
    this->PlayerControllerClass = APlayerController::StaticClass();
    this->PlayerStateClass = APlayerState::StaticClass();
    this->HUDClass = AHUD::StaticClass();
    this->DefaultPawnClass = ADefaultPawn::StaticClass();
    this->SpectatorClass = ASpectatorPawn::StaticClass();
    this->ReplaySpectatorPlayerControllerClass = APlayerController::StaticClass();
    this->ServerStatReplicatorClass = AServerStatReplicator::StaticClass();
    this->GameSession = NULL;
    this->GameState = NULL;
    this->ServerStatReplicator = NULL;
    this->bUseSeamlessTravel = false;
    this->bStartPlayersAsSpectators = false;
    this->bPauseable = true;
}

