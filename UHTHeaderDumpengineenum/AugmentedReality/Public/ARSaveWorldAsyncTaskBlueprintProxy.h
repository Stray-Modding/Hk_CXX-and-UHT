#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "ARSaveWorldPinDelegate.h"
#include "ARSaveWorldAsyncTaskBlueprintProxy.generated.h"

class UARSaveWorldAsyncTaskBlueprintProxy;
class UObject;

UCLASS()
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldPin OnFailed;
    
    UARSaveWorldAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
    
};

