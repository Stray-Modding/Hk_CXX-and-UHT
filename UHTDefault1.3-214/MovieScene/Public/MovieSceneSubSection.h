#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSectionParameters.h"
#include "MovieSceneSection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "MovieSceneSubSection.generated.h"

class UMovieSceneSequence;
class AActor;

UCLASS(Config=EditorPerProjectUserSettings)
class MOVIESCENE_API UMovieSceneSubSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FMovieSceneSectionParameters Parameters;
    
private:
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    float PrerollTime;
    
    UPROPERTY(EditAnywhere)
    uint8 NetworkMask;
    
protected:
    UPROPERTY(EditAnywhere)
    UMovieSceneSequence* SubSequence;
    
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> ActorToRecord;
    
    UPROPERTY(EditAnywhere)
    FString TargetSequenceName;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath TargetPathToRecordTo;
    
public:
    UMovieSceneSubSection();
    UFUNCTION(BlueprintCallable)
    void SetSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
};

