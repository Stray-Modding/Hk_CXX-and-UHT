#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLocationPrimitiveTriangle.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartOffset;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Height;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Angle;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Thickness;
    
    UParticleModuleLocationPrimitiveTriangle();
};

