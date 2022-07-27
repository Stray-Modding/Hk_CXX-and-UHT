#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneObjectBindingID.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneObjectBindingID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGuid Guid;
    
    UPROPERTY()
    int32 SequenceID;
    
    UPROPERTY()
    int32 ResolveParentIndex;
    
public:
    MOVIESCENE_API FMovieSceneObjectBindingID();
};

