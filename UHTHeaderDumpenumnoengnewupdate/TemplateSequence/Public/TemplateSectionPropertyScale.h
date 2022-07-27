#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertyBinding -FallbackName=MovieScenePropertyBinding
#include "ETemplateSectionPropertyScaleType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "TemplateSectionPropertyScale.generated.h"

USTRUCT(BlueprintType)
struct FTemplateSectionPropertyScale {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBinding;
    
    UPROPERTY()
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY()
    ETemplateSectionPropertyScaleType PropertyScaleType;
    
    UPROPERTY()
    FMovieSceneFloatChannel FloatChannel;
    
    TEMPLATESEQUENCE_API FTemplateSectionPropertyScale();
};

