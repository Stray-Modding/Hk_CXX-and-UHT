#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneMarkedFrame.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneMarkedFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDeterminismFence;
    
    MOVIESCENE_API FMovieSceneMarkedFrame();
};

