#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneGeometryCacheParams.generated.h"

class UGeometryCache;

USTRUCT(BlueprintType)
struct GEOMETRYCACHETRACKS_API FMovieSceneGeometryCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGeometryCache* GeometryCacheAsset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber FirstLoopStartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    uint8 bReverse: 1;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float EndOffset;
    
    UPROPERTY()
    FSoftObjectPath GeometryCache;
    
    FMovieSceneGeometryCacheParams();
};

