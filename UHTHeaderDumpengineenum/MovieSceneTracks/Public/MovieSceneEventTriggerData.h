#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
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

