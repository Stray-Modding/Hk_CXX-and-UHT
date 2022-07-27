#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneStringChannel -FallbackName=MovieSceneStringChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "LiveLinkPropertyData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkPropertyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    TArray<FMovieSceneFloatChannel> FloatChannel;
    
    UPROPERTY()
    TArray<FMovieSceneStringChannel> StringChannel;
    
    UPROPERTY()
    TArray<FMovieSceneIntegerChannel> IntegerChannel;
    
    UPROPERTY()
    TArray<FMovieSceneBoolChannel> BoolChannel;
    
    UPROPERTY()
    TArray<FMovieSceneByteChannel> ByteChannel;
    
    LIVELINKMOVIESCENE_API FLiveLinkPropertyData();
};

