#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
#include "MovieSceneTangentData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
#include "MovieSceneFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY(EditAnywhere)
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneFloatValue();
};

