#pragma once
#include "CoreMinimal.h"
#include "EOrbitChainMode.h"
#include "ParticleModuleOrbitBase.h"
#include "RawDistributionVector.h"
#include "OrbitOptions.h"
#include "ParticleModuleOrbit.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleOrbit : public UParticleModuleOrbitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrbitChainMode> ChainMode;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector OffsetAmount;
    
    UPROPERTY(EditAnywhere)
    FOrbitOptions OffsetOptions;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector RotationAmount;
    
    UPROPERTY(EditAnywhere)
    FOrbitOptions RotationOptions;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector RotationRateAmount;
    
    UPROPERTY(EditAnywhere)
    FOrbitOptions RotationRateOptions;
    
    UParticleModuleOrbit();
};

