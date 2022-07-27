#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AISystemBase -FallbackName=AISystemBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AISystem.generated.h"

class UBehaviorTreeManager;
class UAIHotSpotManager;
class UEnvQueryManager;
class UAIPerceptionSystem;
class UNavLocalGridManager;
class UAIAsyncTaskBlueprintProxy;

UCLASS()
class AIMODULE_API UAISystem : public UAISystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftClassPath PerceptionSystemClassName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftClassPath HotSpotManagerClassName;
    
public:
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float AcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float PathfollowingRegularPathPointAcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float PathfollowingNavLinkAcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bFinishMoveOnGoalOverlap;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAcceptPartialPaths;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAllowStrafing;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bEnableBTAITasks;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAllowControllersAsEQSQuerier;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bEnableDebuggerPlugin;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bForgetStaleActors;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAddBlackboardSelfKey;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    
protected:
    UPROPERTY(Transient)
    UBehaviorTreeManager* BehaviorTreeManager;
    
    UPROPERTY(Transient)
    UEnvQueryManager* EnvironmentQueryManager;
    
    UPROPERTY(Transient)
    UAIPerceptionSystem* PerceptionSystem;
    
    UPROPERTY(Transient)
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    
    UPROPERTY(Transient)
    UAIHotSpotManager* HotSpotManager;
    
    UPROPERTY(Transient)
    UNavLocalGridManager* NavLocalGrids;
    
public:
    UAISystem();
    UFUNCTION(Exec)
    void AILoggingVerbose();
    
    UFUNCTION(Exec)
    void AIIgnorePlayers();
    
};

