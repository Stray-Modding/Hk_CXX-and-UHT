#pragma once
#include "CoreMinimal.h"
#include "OnlineLogoutResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "LogoutCallbackProxy.generated.h"

class UObject;
class ULogoutCallbackProxy;
class APlayerController;

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineLogoutResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineLogoutResult OnFailure;
    
    ULogoutCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

