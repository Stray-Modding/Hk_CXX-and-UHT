#include "AnimNotifyEvent.h"

FAnimNotifyEvent::FAnimNotifyEvent() {
    this->DisplayTime = 0.00f;
    this->TriggerTimeOffset = 0.00f;
    this->EndTriggerTimeOffset = 0.00f;
    this->TriggerWeightThreshold = 0.00f;
    this->Notify = NULL;
    this->NotifyStateClass = NULL;
    this->Duration = 0.00f;
    this->bConvertedFromBranchingPoint = false;
    this->MontageTickType = EMontageNotifyTickType::Queued;
    this->NotifyTriggerChance = 0.00f;
    this->NotifyFilterType = ENotifyFilterType::NoFiltering;
    this->NotifyFilterLOD = 0;
    this->bTriggerOnDedicatedServer = false;
    this->bTriggerOnFollower = false;
    this->TrackIndex = 0;
}

