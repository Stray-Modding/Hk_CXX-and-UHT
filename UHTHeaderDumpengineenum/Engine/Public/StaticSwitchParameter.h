#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "StaticSwitchParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticSwitchParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Value;
    
    ENGINE_API FStaticSwitchParameter();
};

