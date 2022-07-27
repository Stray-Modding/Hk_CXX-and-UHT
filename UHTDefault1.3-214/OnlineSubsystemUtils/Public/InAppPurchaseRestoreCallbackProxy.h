#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductRequest -FallbackName=InAppPurchaseProductRequest
#include "InAppPurchaseRestoreResultDelegate.h"
#include "InAppPurchaseRestoreCallbackProxy.generated.h"

class UInAppPurchaseRestoreCallbackProxy;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreResult OnFailure;
    
    UInAppPurchaseRestoreCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController);
    
};

