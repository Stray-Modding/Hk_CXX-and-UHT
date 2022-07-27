#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "MovieSceneVector4KeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4 Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4KeyStruct();
};

