#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveBase.h"
#include "RawDistributionFloat.h"
#include "CylinderHeightAxis.h"
#include "ParticleModuleLocationPrimitiveCylinder.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 RadialVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartRadius;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<CylinderHeightAxis> HeightAxis;
    
    UParticleModuleLocationPrimitiveCylinder();
};

