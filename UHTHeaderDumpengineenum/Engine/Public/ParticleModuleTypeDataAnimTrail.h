#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleTypeDataBase.h"
#include "ParticleModuleTypeDataAnimTrail.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDeadTrailsOnDeactivate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnablePreviousTangentRecalculation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTangentRecalculationEveryFrame: 1;
    
    UPROPERTY(EditAnywhere)
    float TilingDistance;
    
    UPROPERTY(EditAnywhere)
    float DistanceTessellationStepSize;
    
    UPROPERTY(EditAnywhere)
    float TangentTessellationStepSize;
    
    UPROPERTY(EditAnywhere)
    float WidthTessellationStepSize;
    
    UParticleModuleTypeDataAnimTrail();
};

