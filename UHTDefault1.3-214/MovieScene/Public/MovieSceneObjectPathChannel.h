#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneObjectPathChannelKeyValue.h"
#include "MovieSceneObjectPathChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneObjectPathChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UClass* PropertyClass;
    
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    
    UPROPERTY()
    FMovieSceneObjectPathChannelKeyValue DefaultValue;
    
public:
    FMovieSceneObjectPathChannel();
};

