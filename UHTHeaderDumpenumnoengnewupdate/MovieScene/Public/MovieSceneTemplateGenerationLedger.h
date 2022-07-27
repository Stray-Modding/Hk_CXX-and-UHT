#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneTemplateGenerationLedger.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTemplateGenerationLedger {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    
    UPROPERTY()
    TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    
    UPROPERTY()
    TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges;
    
    MOVIESCENE_API FMovieSceneTemplateGenerationLedger();
};

