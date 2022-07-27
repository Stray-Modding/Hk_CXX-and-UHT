#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintAsyncActionBase.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UBlueprintAsyncActionBase : public UObject {
    GENERATED_BODY()
public:
    UBlueprintAsyncActionBase();
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

