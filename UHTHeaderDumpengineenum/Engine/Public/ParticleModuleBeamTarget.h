#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleBeamBase.h"
#include "Beam2SourceTargetMethod.h"
#include "Beam2SourceTargetTangentMethod.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleBeamTarget.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<Beam2SourceTargetMethod> TargetMethod;
    
    UPROPERTY(EditAnywhere)
    FName TargetName;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Target;
    
    UPROPERTY(EditAnywhere)
    uint8 bTargetAbsolute: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockTarget: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<Beam2SourceTargetTangentMethod> TargetTangentMethod;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector TargetTangent;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockTargetTangent: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat TargetStrength;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockTargetStength: 1;
    
    UPROPERTY(EditAnywhere)
    float LockRadius;
    
    UParticleModuleBeamTarget();
};

