#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "GameNetworkManager.generated.h"

UCLASS(NotPlaceable, Config=Game)
class ENGINE_API AGameNetworkManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    float BadPacketLossThreshold;
    
    UPROPERTY(GlobalConfig)
    float SeverePacketLossThreshold;
    
    UPROPERTY(GlobalConfig)
    int32 BadPingThreshold;
    
    UPROPERTY(GlobalConfig)
    int32 SeverePingThreshold;
    
    UPROPERTY()
    int32 AdjustedNetSpeed;
    
    UPROPERTY()
    float LastNetSpeedUpdateTime;
    
    UPROPERTY(GlobalConfig)
    int32 TotalNetBandwidth;
    
    UPROPERTY(GlobalConfig)
    int32 MinDynamicBandwidth;
    
    UPROPERTY(GlobalConfig)
    int32 MaxDynamicBandwidth;
    
    UPROPERTY(Config)
    uint8 bIsStandbyCheckingEnabled: 1;
    
    UPROPERTY()
    uint8 bHasStandbyCheatTriggered: 1;
    
    UPROPERTY(Config)
    float StandbyRxCheatTime;
    
    UPROPERTY(Config)
    float StandbyTxCheatTime;
    
    UPROPERTY(Config)
    float PercentMissingForRxStandby;
    
    UPROPERTY(Config)
    float PercentMissingForTxStandby;
    
    UPROPERTY(Config)
    float PercentForBadPing;
    
    UPROPERTY(Config)
    float JoinInProgressStandbyWaitTime;
    
    UPROPERTY(GlobalConfig)
    float MoveRepSize;
    
    UPROPERTY(GlobalConfig)
    float MAXPOSITIONERRORSQUARED;
    
    UPROPERTY(GlobalConfig)
    float MAXNEARZEROVELOCITYSQUARED;
    
    UPROPERTY(GlobalConfig)
    float CLIENTADJUSTUPDATECOST;
    
    UPROPERTY(GlobalConfig)
    float MAXCLIENTUPDATEINTERVAL;
    
    UPROPERTY(GlobalConfig)
    float MaxClientForcedUpdateDuration;
    
    UPROPERTY(GlobalConfig)
    float ServerForcedUpdateHitchThreshold;
    
    UPROPERTY(GlobalConfig)
    float ServerForcedUpdateHitchCooldown;
    
    UPROPERTY(GlobalConfig)
    float MaxMoveDeltaTime;
    
    UPROPERTY(GlobalConfig)
    float MaxClientSmoothingDeltaTime;
    
    UPROPERTY(GlobalConfig)
    float ClientNetSendMoveDeltaTime;
    
    UPROPERTY(GlobalConfig)
    float ClientNetSendMoveDeltaTimeThrottled;
    
    UPROPERTY(GlobalConfig)
    float ClientNetSendMoveDeltaTimeStationary;
    
    UPROPERTY(GlobalConfig)
    int32 ClientNetSendMoveThrottleAtNetSpeed;
    
    UPROPERTY(GlobalConfig)
    int32 ClientNetSendMoveThrottleOverPlayerCount;
    
    UPROPERTY(GlobalConfig)
    bool ClientAuthorativePosition;
    
    UPROPERTY(GlobalConfig)
    float ClientErrorUpdateRateLimit;
    
    UPROPERTY(GlobalConfig)
    float ClientNetCamUpdateDeltaTime;
    
    UPROPERTY(GlobalConfig)
    float ClientNetCamUpdatePositionLimit;
    
    UPROPERTY(GlobalConfig)
    bool bMovementTimeDiscrepancyDetection;
    
    UPROPERTY(GlobalConfig)
    bool bMovementTimeDiscrepancyResolution;
    
    UPROPERTY(GlobalConfig)
    float MovementTimeDiscrepancyMaxTimeMargin;
    
    UPROPERTY(GlobalConfig)
    float MovementTimeDiscrepancyMinTimeMargin;
    
    UPROPERTY(GlobalConfig)
    float MovementTimeDiscrepancyResolutionRate;
    
    UPROPERTY(GlobalConfig)
    float MovementTimeDiscrepancyDriftAllowance;
    
    UPROPERTY(GlobalConfig)
    bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
    
    UPROPERTY(GlobalConfig)
    bool bUseDistanceBasedRelevancy;
    
    AGameNetworkManager();
};

