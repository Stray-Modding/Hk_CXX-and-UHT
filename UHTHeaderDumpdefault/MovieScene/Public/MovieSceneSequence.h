#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "EMovieSceneCompletionMode.h"
#include "EMovieSceneSequenceFlags.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequence.generated.h"

class UMovieSceneCompiledData;

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UMovieSceneSequence : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieSceneCompiledData* CompiledData;
    
public:
    UPROPERTY(Config)
    EMovieSceneCompletionMode DefaultCompletionMode;
    
protected:
    UPROPERTY()
    bool bParentContextsAreSignificant;
    
    UPROPERTY()
    bool bPlayableDirectly;
    
    UPROPERTY()
    EMovieSceneSequenceFlags SequenceFlags;
    
public:
    UMovieSceneSequence();
    UFUNCTION(BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
};

