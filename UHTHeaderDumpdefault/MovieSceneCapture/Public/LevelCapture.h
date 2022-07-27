#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneCapture.h"
#include "LevelCapture.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API ULevelCapture : public UMovieSceneCapture {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutoStartCapture;
    
private:
    UPROPERTY()
    FGuid PrerequisiteActorId;
    
public:
    ULevelCapture();
};

