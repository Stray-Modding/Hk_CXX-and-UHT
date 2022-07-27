#pragma once
#include "CoreMinimal.h"
#include "RigidBodyErrorCorrection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=PhysicsSettingsCore -FallbackName=PhysicsSettingsCore
#include "ESettingsLockedAxis.h"
#include "ESettingsDOF.h"
#include "PhysicalSurfaceName.h"
#include "BroadphaseSettings.h"
#include "ChaosPhysicsSettings.h"
#include "PhysicsSettings.generated.h"

UCLASS()
class ENGINE_API UPhysicsSettings : public UPhysicsSettingsCore {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FRigidBodyErrorCorrection PhysicErrorCorrection;
    
    UPROPERTY(Config)
    TEnumAsByte<ESettingsLockedAxis::Type> LockedAxis;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ESettingsDOF::Type> DefaultDegreesOfFreedom;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSuppressFaceRemapTable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportUVFromHitResults;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableActiveActors;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableKinematicStaticPairs;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableKinematicKinematicPairs;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableCCD;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableEnhancedDeterminism;
    
    UPROPERTY(Config, EditAnywhere)
    float AnimPhysicsMinDeltaTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSimulateAnimPhysicsAfterReset;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxPhysicsDeltaTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSubstepping;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSubsteppingAsync;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSubstepDeltaTime;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxSubsteps;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float SyncSceneSmoothingFactor;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float InitialAverageFrameRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PhysXTreeRebuildRate;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPhysicalSurfaceName> PhysicalSurfaces;
    
    UPROPERTY(Config, EditAnywhere)
    FBroadphaseSettings DefaultBroadphaseSettings;
    
    UPROPERTY(Config, EditAnywhere)
    float MinDeltaVelocityForHitEvents;
    
    UPROPERTY(Config, EditAnywhere)
    FChaosPhysicsSettings ChaosSettings;
    
    UPhysicsSettings();
};

