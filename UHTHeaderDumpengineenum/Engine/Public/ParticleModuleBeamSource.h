#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleBeamBase.h"
#include "Beam2SourceTargetMethod.h"
#include "Beam2SourceTargetTangentMethod.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleBeamSource.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamSource : public UParticleModuleBeamBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<Beam2SourceTargetMethod> SourceMethod;
    
    UPROPERTY(EditAnywhere)
    FName SourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 bSourceAbsolute: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Source;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockSource: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<Beam2SourceTargetTangentMethod> SourceTangentMethod;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector SourceTangent;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockSourceTangent: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat SourceStrength;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockSourceStength: 1;
    
    UParticleModuleBeamSource();
};

