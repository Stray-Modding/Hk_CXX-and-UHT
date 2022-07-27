#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCameraAnimSectionData.h"
#include "MovieSceneCameraAnimSection.generated.h"

class UCameraAnim;

UCLASS(MinimalAPI)
class UMovieSceneCameraAnimSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneCameraAnimSectionData AnimData;
    
private:
    UPROPERTY()
    UCameraAnim* CameraAnim;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    float PlayScale;
    
    UPROPERTY()
    float blendInTime;
    
    UPROPERTY()
    float blendOutTime;
    
    UPROPERTY()
    bool bLooping;
    
public:
    UMovieSceneCameraAnimSection();
};

