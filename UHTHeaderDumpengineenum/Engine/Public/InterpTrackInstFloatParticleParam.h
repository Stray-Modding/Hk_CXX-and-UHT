#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstFloatParticleParam.generated.h"

UCLASS()
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetFloat;
    
    UInterpTrackInstFloatParticleParam();
};

