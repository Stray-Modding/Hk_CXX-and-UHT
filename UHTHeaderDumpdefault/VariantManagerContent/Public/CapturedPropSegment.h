#pragma once
#include "CoreMinimal.h"
#include "CapturedPropSegment.generated.h"

USTRUCT(BlueprintType)
struct VARIANTMANAGERCONTENT_API FCapturedPropSegment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PropertyName;
    
    UPROPERTY()
    int32 PropertyIndex;
    
    UPROPERTY()
    FString ComponentName;
    
    FCapturedPropSegment();
};

