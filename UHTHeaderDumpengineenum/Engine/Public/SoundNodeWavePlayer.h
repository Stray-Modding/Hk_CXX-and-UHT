#pragma once
#include "CoreMinimal.h"
#include "SoundNodeAssetReferencer.h"
#include "SoundNodeWavePlayer.generated.h"

class USoundWave;

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;
    
    UPROPERTY(Transient)
    USoundWave* SoundWave;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 bLooping: 1;
    
    USoundNodeWavePlayer();
};

