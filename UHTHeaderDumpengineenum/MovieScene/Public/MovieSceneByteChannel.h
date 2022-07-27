#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneChannel.h"
#include "MovieSceneByteChannel.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneByteChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    uint8 DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY()
    TArray<uint8> Values;
    
    UPROPERTY()
    UEnum* Enum;
    
public:
    FMovieSceneByteChannel();
};

