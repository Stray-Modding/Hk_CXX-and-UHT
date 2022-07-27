#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "AchievementQueryCallbackProxy.generated.h"

class UAchievementQueryCallbackProxy;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
    UAchievementQueryCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

