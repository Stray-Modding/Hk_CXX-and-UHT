#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneTransformOrigin -FallbackName=MovieSceneTransformOrigin
#include "DefaultLevelSequenceInstanceData.generated.h"

class AActor;

UCLASS(BlueprintType)
class LEVELSEQUENCE_API UDefaultLevelSequenceInstanceData : public UObject, public IMovieSceneTransformOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TransformOriginActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TransformOrigin;
    
    UDefaultLevelSequenceInstanceData();
    
    // Fix for true pure virtual functions not being implemented
};

