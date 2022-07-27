#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderBoolValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderBoolValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DefaultValue;
    
    FAIDataProviderBoolValue();
};

