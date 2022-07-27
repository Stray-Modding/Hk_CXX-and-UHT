#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntityComponentField.h"
#include "MovieSceneEvaluationTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "MovieSceneSequenceHierarchy.h"
#include "MovieSceneEvaluationField.h"
#include "MovieSceneSequenceCompilerMaskStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMovieSceneSequenceFlags.h"
#include "MovieSceneCompiledData.generated.h"

UCLASS()
class UMovieSceneCompiledData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneEvaluationTemplate EvaluationTemplate;
    
    UPROPERTY()
    FMovieSceneSequenceHierarchy Hierarchy;
    
    UPROPERTY()
    FMovieSceneEntityComponentField EntityComponentField;
    
    UPROPERTY()
    FMovieSceneEvaluationField TrackTemplateField;
    
    UPROPERTY()
    TArray<FFrameTime> DeterminismFences;
    
    UPROPERTY()
    FGuid CompiledSignature;
    
    UPROPERTY()
    FGuid CompilerVersion;
    
    UPROPERTY()
    FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;
    
    UPROPERTY()
    FMovieSceneSequenceCompilerMaskStruct AllocatedMask;
    
    UPROPERTY()
    EMovieSceneSequenceFlags AccumulatedFlags;
    
public:
    UMovieSceneCompiledData();
};

