#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "MovieSceneActorReferenceKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneActorReferenceKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID Object;
    
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    MOVIESCENETRACKS_API FMovieSceneActorReferenceKey();
};

