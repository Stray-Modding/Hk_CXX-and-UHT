#include "Pawn.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController

class AActor;
class UPawnMovementComponent;
class APawn;
class AController;

void APawn::SpawnDefaultController() {
}

void APawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
}



void APawn::PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker) {
}

void APawn::OnRep_PlayerState() {
}

void APawn::OnRep_Controller() {
}

void APawn::LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}

FVector APawn::K2_GetMovementInputVector() const {
    return FVector{};
}

bool APawn::IsPlayerControlled() const {
    return false;
}

bool APawn::IsPawnControlled() const {
    return false;
}

bool APawn::IsMoveInputIgnored() const {
    return false;
}

bool APawn::IsLocallyControlled() const {
    return false;
}

bool APawn::IsControlled() const {
    return false;
}

bool APawn::IsBotControlled() const {
    return false;
}

FVector APawn::GetPendingMovementInputVector() const {
    return FVector{};
}

FVector APawn::GetNavAgentLocation() const {
    return FVector{};
}

UPawnMovementComponent* APawn::GetMovementComponent() const {
    return NULL;
}

AActor* APawn::GetMovementBaseActor(const APawn* Pawn) {
    return NULL;
}

FVector APawn::GetLastMovementInputVector() const {
    return FVector{};
}

FRotator APawn::GetControlRotation() const {
    return FRotator{};
}

AController* APawn::GetController() const {
    return NULL;
}

FRotator APawn::GetBaseAimRotation() const {
    return FRotator{};
}

void APawn::DetachFromControllerPendingDestroy() {
}

FVector APawn::ConsumeMovementInputVector() {
    return FVector{};
}

void APawn::AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce) {
}

void APawn::AddControllerYawInput(float Val) {
}

void APawn::AddControllerRollInput(float Val) {
}

void APawn::AddControllerPitchInput(float Val) {
}

void APawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APawn, RemoteViewPitch);
    DOREPLIFETIME(APawn, PlayerState);
    DOREPLIFETIME(APawn, Controller);
}

APawn::APawn() {
    this->bUseControllerRotationPitch = false;
    this->bUseControllerRotationYaw = false;
    this->bUseControllerRotationRoll = false;
    this->bCanAffectNavigationGeneration = false;
    this->BaseEyeHeight = 64.00f;
    this->AutoPossessPlayer = EAutoReceiveInput::Disabled;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorld;
    this->RemoteViewPitch = 0;
    this->AIControllerClass = AAIController::StaticClass();
    this->PlayerState = NULL;
    this->LastHitBy = NULL;
    this->Controller = NULL;
}

