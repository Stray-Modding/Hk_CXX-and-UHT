#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "ParticleReplayTrackKey.h"
#include "InterpTrackParticleReplay.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackParticleReplay : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FParticleReplayTrackKey> TrackKeys;
    
    UInterpTrackParticleReplay();
};

