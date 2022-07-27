#pragma once
#include "CoreMinimal.h"
#include "SoundTrackKey.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackSound.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackSound : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSoundTrackKey> Sounds;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bContinueSoundOnMatineeEnd: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSuppressSubtitles: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTreatAsDialogue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttach: 1;
    
    UInterpTrackSound();
};

