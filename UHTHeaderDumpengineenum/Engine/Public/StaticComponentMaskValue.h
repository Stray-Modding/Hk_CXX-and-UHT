#pragma once
#include "CoreMinimal.h"
#include "StaticComponentMaskValue.generated.h"

USTRUCT()
struct FStaticComponentMaskValue {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool R;
    
    UPROPERTY()
    bool G;
    
    UPROPERTY()
    bool B;
    
    UPROPERTY()
    bool A;
    
    ENGINE_API FStaticComponentMaskValue();
};

