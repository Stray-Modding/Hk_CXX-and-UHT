#include "GameNetworkManager.h"

AGameNetworkManager::AGameNetworkManager() {
    this->BadPacketLossThreshold = 0.05f;
    this->SeverePacketLossThreshold = 0.15f;
    this->BadPingThreshold = 200;
    this->SeverePingThreshold = 500;
    this->AdjustedNetSpeed = 0;
    this->LastNetSpeedUpdateTime = 0.00f;
    this->TotalNetBandwidth = 32000;
    this->MinDynamicBandwidth = 4000;
    this->MaxDynamicBandwidth = 7000;
    this->bIsStandbyCheckingEnabled = false;
    this->bHasStandbyCheatTriggered = false;
    this->StandbyRxCheatTime = 0.00f;
    this->StandbyTxCheatTime = 0.00f;
    this->PercentMissingForRxStandby = 0.00f;
    this->PercentMissingForTxStandby = 0.00f;
    this->PercentForBadPing = 0.00f;
    this->JoinInProgressStandbyWaitTime = 0.00f;
    this->MoveRepSize = 42.00f;
    this->MAXPOSITIONERRORSQUARED = 3.00f;
    this->MAXNEARZEROVELOCITYSQUARED = 9.00f;
    this->CLIENTADJUSTUPDATECOST = 180.00f;
    this->MAXCLIENTUPDATEINTERVAL = 0.25f;
    this->MaxClientForcedUpdateDuration = 1.00f;
    this->ServerForcedUpdateHitchThreshold = 0.15f;
    this->ServerForcedUpdateHitchCooldown = 0.10f;
    this->MaxMoveDeltaTime = 0.12f;
    this->MaxClientSmoothingDeltaTime = 0.50f;
    this->ClientNetSendMoveDeltaTime = 0.02f;
    this->ClientNetSendMoveDeltaTimeThrottled = 0.02f;
    this->ClientNetSendMoveDeltaTimeStationary = 0.02f;
    this->ClientNetSendMoveThrottleAtNetSpeed = 10000;
    this->ClientNetSendMoveThrottleOverPlayerCount = 10;
    this->ClientAuthorativePosition = false;
    this->ClientErrorUpdateRateLimit = 0.00f;
    this->ClientNetCamUpdateDeltaTime = 0.02f;
    this->ClientNetCamUpdatePositionLimit = 1000.00f;
    this->bMovementTimeDiscrepancyDetection = false;
    this->bMovementTimeDiscrepancyResolution = false;
    this->MovementTimeDiscrepancyMaxTimeMargin = 0.25f;
    this->MovementTimeDiscrepancyMinTimeMargin = -0.25f;
    this->MovementTimeDiscrepancyResolutionRate = 1.00f;
    this->MovementTimeDiscrepancyDriftAllowance = 0.00f;
    this->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = false;
    this->bUseDistanceBasedRelevancy = true;
}

