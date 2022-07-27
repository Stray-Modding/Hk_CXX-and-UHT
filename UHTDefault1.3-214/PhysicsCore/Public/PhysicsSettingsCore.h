#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EFrictionCombineMode.h"
#include "ECollisionTraceFlag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ChaosSolverConfiguration -FallbackName=ChaosSolverConfiguration
#include "PhysicsSettingsCore.generated.h"

UCLASS(DefaultConfig)
class PHYSICSCORE_API UPhysicsSettingsCore : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DefaultGravityZ;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultTerminalVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultFluidFriction;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SimulateScratchMemorySize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 RagdollAggregateThreshold;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float TriangleMeshTriangleMinAreaThreshold;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bEnableShapeSharing;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bEnablePCM;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bEnableStabilization;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bWarnMissingLocks;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnable2DPhysics;
    
    UPROPERTY(Config)
    bool bDefaultHasComplexCollision;
    
    UPROPERTY(Config, EditAnywhere)
    float BounceThresholdVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAngularVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxDepenetrationVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float ContactOffsetMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float MinContactOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxContactOffset;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSimulateSkeletalMeshOnDedicatedServer;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;
    
    UPROPERTY(Config, EditAnywhere)
    FChaosSolverConfiguration SolverOptions;
    
    UPhysicsSettingsCore();
};

