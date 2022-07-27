#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "StaticComponentMaskParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticComponentMaskParameter : public FStaticParameterBase {
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
    
    ENGINE_API FStaticComponentMaskParameter();
};

