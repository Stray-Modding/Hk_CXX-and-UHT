#pragma once
#include "CoreMinimal.h"
#include "EasingComponentData.generated.h"

class UMovieSceneSection;

USTRUCT()
struct FEasingComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneSection* Section;
    
    MOVIESCENE_API FEasingComponentData();
};

