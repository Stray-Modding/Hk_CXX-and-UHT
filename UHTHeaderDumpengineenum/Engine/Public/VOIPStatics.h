#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "VOIPStatics.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UVOIPStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVOIPStatics();
    UFUNCTION(BlueprintCallable)
    static void SetMicThreshold(float InThreshold);
    
};

