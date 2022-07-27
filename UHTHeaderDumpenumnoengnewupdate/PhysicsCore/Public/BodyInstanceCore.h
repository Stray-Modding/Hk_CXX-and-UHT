#pragma once
#include "CoreMinimal.h"
#include "BodyInstanceCore.generated.h"

USTRUCT(BlueprintType)
struct PHYSICSCORE_API FBodyInstanceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSimulatePhysics: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMass: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableGravity: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bAutoWeld: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bStartAwake: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bGenerateWakeEvents: 1;
    
    UPROPERTY()
    uint8 bUpdateMassWhenScaleChanges: 1;
    
    FBodyInstanceCore();
};

