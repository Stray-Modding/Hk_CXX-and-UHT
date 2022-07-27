#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventTriggerData.generated.h"

USTRUCT()
struct FMovieSceneEventTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventPtrs Ptrs;
    
    UPROPERTY()
    FGuid ObjectBindingId;
    
    MOVIESCENETRACKS_API FMovieSceneEventTriggerData();
};

