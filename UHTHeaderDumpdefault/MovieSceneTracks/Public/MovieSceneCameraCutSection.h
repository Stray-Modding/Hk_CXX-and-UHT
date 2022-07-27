#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MovieSceneCameraCutSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneCameraCutSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLockPreviousCamera;
    
private:
    UPROPERTY()
    FGuid CameraGuid;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID CameraBindingID;
    
    UPROPERTY()
    FTransform InitialCameraCutTransform;
    
    UPROPERTY()
    bool bHasInitialCameraCutTransform;
    
public:
    UMovieSceneCameraCutSection();
    UFUNCTION(BlueprintCallable)
    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID GetCameraBindingID() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

