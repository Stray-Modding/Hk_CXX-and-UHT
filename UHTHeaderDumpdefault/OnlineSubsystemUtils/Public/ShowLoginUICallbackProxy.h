#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnlineShowLoginUIResultDelegate.h"
#include "ShowLoginUICallbackProxy.generated.h"

class APlayerController;
class UShowLoginUICallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineShowLoginUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineShowLoginUIResult OnFailure;
    
    UShowLoginUICallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

