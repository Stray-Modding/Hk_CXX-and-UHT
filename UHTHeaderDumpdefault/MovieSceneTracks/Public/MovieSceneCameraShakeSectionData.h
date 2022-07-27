#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MovieSceneCameraShakeSectionData.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FMovieSceneCameraShakeSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(EditAnywhere)
    float PlayScale;
    
    UPROPERTY(EditAnywhere)
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(EditAnywhere)
    FRotator UserDefinedPlaySpace;
    
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSectionData();
};

