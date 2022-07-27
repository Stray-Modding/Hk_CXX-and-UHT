#include "ParticleSystem.h"

bool UParticleSystem::ContainsEmitterType(UClass* TypeData) {
    return false;
}

UParticleSystem::UParticleSystem() {
    this->UpdateTime_FPS = 60.00f;
    this->UpdateTime_Delta = 0.02f;
    this->WarmupTime = 0.00f;
    this->WarmupTickRate = 0.00f;
    this->PreviewComponent = NULL;
    this->CurveEdSetup = NULL;
    this->LODDistanceCheckTime = 0.25f;
    this->MacroUVRadius = 200.00f;
    this->SecondsBeforeInactive = 0.00f;
    this->Delay = 0.00f;
    this->DelayLow = 0.00f;
    this->bOrientZAxisTowardCamera = false;
    this->bUseFixedRelativeBoundingBox = false;
    this->bShouldResetPeakCounts = false;
    this->bHasPhysics = false;
    this->bUseRealtimeThumbnail = false;
    this->ThumbnailImageOutOfDate = true;
    this->bUseDelayRange = false;
    this->bAllowManagedTicking = true;
    this->bAutoDeactivate = true;
    this->bRegenerateLODDuplicate = false;
    this->SystemUpdateMode = EPSUM_RealTime;
    this->LODMethod = PARTICLESYSTEMLODMETHOD_Automatic;
    this->InsignificantReaction = EParticleSystemInsignificanceReaction::Auto;
    this->OcclusionBoundsMethod = EPSOBM_ParticleBounds;
    this->MaxSignificanceLevel = EParticleSignificanceLevel::Critical;
    this->MinTimeBetweenTicks = 0;
    this->InsignificanceDelay = 0.00f;
}

