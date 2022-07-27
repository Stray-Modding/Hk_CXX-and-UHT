#include "World.h"

class AWorldSettings;

AWorldSettings* UWorld::K2_GetWorldSettings() {
    return NULL;
}

void UWorld::HandleTimelineScrubbed() {
}

UWorld::UWorld() {
    this->PersistentLevel = NULL;
    this->NetDriver = NULL;
    this->LineBatcher = NULL;
    this->PersistentLineBatcher = NULL;
    this->ForegroundLineBatcher = NULL;
    this->NetworkManager = NULL;
    this->PhysicsCollisionHandler = NULL;
    this->PerModuleDataObjects.AddDefaulted(1);
    this->CurrentLevelPendingVisibility = NULL;
    this->CurrentLevelPendingInvisibility = NULL;
    this->DemoNetDriver = NULL;
    this->MyParticleEventManager = NULL;
    this->DefaultPhysicsVolume = NULL;
    this->bAreConstraintsDirty = false;
    this->NavigationSystem = NULL;
    this->AuthorityGameMode = NULL;
    this->GameState = NULL;
    this->AISystem = NULL;
    this->AvoidanceManager = NULL;
    this->OwningGameInstance = NULL;
    this->CanvasForRenderingToTarget = NULL;
    this->CanvasForDrawMaterialToRenderTarget = NULL;
    this->PhysicsField = NULL;
    this->WorldComposition = NULL;
}

