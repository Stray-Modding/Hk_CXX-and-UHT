#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneGeometryCollectionParams.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCollectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath GeometryCollectionCache;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionParams();
};

