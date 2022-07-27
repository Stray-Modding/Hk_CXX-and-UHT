#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstParticleReplay.generated.h"

UCLASS()
class UInterpTrackInstParticleReplay : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstParticleReplay();
};

