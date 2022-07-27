#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosBufferMode -FallbackName=EChaosBufferMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosThreadingMode -FallbackName=EChaosThreadingMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosSolverTickMode -FallbackName=EChaosSolverTickMode
#include "ChaosPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FChaosPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EChaosThreadingMode DefaultThreadingModel;
    
    UPROPERTY(EditAnywhere)
    EChaosSolverTickMode DedicatedThreadTickMode;
    
    UPROPERTY(EditAnywhere)
    EChaosBufferMode DedicatedThreadBufferMode;
    
    FChaosPhysicsSettings();
};

