#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleBeamBase.h"
#include "BeamModifierType.h"
#include "RawDistributionVector.h"
#include "BeamModifierOptions.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleBeamModifier.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<BeamModifierType> ModifierType;
    
    UPROPERTY(EditAnywhere)
    FBeamModifierOptions PositionOptions;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Position;
    
    UPROPERTY(EditAnywhere)
    FBeamModifierOptions TangentOptions;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Tangent;
    
    UPROPERTY(EditAnywhere)
    uint8 bAbsoluteTangent: 1;
    
    UPROPERTY(EditAnywhere)
    FBeamModifierOptions StrengthOptions;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Strength;
    
    UParticleModuleBeamModifier();
};

