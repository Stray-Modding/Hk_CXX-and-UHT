#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrack_FlipbookAnimation.generated.h"

UCLASS(CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    uint32 NumMeshSamples;
    
public:
    UDEPRECATED_GeometryCacheTrack_FlipbookAnimation();
    UFUNCTION()
    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
    
};

