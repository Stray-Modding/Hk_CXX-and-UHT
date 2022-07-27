#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionFloat.h"
#include "RawDistributionVector.h"
#include "ParticleModuleLocationPrimitiveBase.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Positive_X: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Positive_Y: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Positive_Z: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_X: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_Y: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_Z: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 SurfaceOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Velocity: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat VelocityScale;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartLocation;
    
    UParticleModuleLocationPrimitiveBase();
};

