#pragma once
#include "CoreMinimal.h"
#include "LiveLinkCurveElement.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkCurveElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CurveName;
    
    UPROPERTY()
    float CurveValue;
    
    LIVELINKINTERFACE_API FLiveLinkCurveElement();
};

