#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
#include "MovieSceneCinematicShotSection.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString ShotDisplayName;
    
    UPROPERTY()
    FText DisplayName;
    
public:
    UMovieSceneCinematicShotSection();
    UFUNCTION(BlueprintCallable)
    void SetShotDisplayName(const FString& InShotDisplayName);
    
    UFUNCTION(BlueprintPure)
    FString GetShotDisplayName() const;
    
};

