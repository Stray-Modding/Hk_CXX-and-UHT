#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
#include "MovieSceneCameraShakeSourceTrigger.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FMovieSceneCameraShakeSourceTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator UserDefinedPlaySpace;
    
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTrigger();
};

