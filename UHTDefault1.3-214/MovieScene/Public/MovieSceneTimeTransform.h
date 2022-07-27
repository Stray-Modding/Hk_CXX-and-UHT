#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "MovieSceneTimeTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeTransform {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    FFrameTime Offset;
    
    MOVIESCENE_API FMovieSceneTimeTransform();
};

