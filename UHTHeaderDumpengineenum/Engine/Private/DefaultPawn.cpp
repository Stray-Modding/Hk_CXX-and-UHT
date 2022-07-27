#include "DefaultPawn.h"
#include "FloatingPawnMovement.h"
#include "SphereComponent.h"
#include "StaticMeshComponent.h"

void ADefaultPawn::TurnAtRate(float Rate) {
}

void ADefaultPawn::MoveUp_World(float Val) {
}

void ADefaultPawn::MoveRight(float Val) {
}

void ADefaultPawn::MoveForward(float Val) {
}

void ADefaultPawn::LookUpAtRate(float Rate) {
}

ADefaultPawn::ADefaultPawn() {
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent0"));
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent0"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent0"));
    this->bAddDefaultMovementBindings = true;
}

