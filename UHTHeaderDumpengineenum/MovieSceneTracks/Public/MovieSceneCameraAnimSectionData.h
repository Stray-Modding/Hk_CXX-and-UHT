#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCameraAnimSectionData.generated.h"

class UCameraAnim;

USTRUCT(BlueprintType)
struct FMovieSceneCameraAnimSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCameraAnim* CameraAnim;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float PlayScale;
    
    UPROPERTY(EditAnywhere)
    float blendInTime;
    
    UPROPERTY(EditAnywhere)
    float blendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bLooping;
    
    MOVIESCENETRACKS_API FMovieSceneCameraAnimSectionData();
};

