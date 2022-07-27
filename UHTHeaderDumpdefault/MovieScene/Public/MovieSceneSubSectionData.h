#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ESectionEvaluationFlags.h"
#include "MovieSceneSubSectionData.generated.h"

class UMovieSceneSubSection;

USTRUCT()
struct FMovieSceneSubSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UMovieSceneSubSection> Section;
    
    UPROPERTY()
    FGuid ObjectBindingId;
    
    UPROPERTY()
    ESectionEvaluationFlags Flags;
    
    MOVIESCENE_API FMovieSceneSubSectionData();
};

