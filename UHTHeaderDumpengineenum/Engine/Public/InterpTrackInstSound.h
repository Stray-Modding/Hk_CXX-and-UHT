#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstSound.generated.h"

class UAudioComponent;

UCLASS()
class UInterpTrackInstSound : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* PlayAudioComp;
    
    UInterpTrackInstSound();
};

