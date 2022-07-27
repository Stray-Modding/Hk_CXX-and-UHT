#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieScene3DConstraintSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DConstraintSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGuid ConstraintId;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID ConstraintBindingID;
    
public:
    UMovieScene3DConstraintSection();
    UFUNCTION(BlueprintCallable)
    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID GetConstraintBindingID() const;
    
};

