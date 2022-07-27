#pragma once
#include "CoreMinimal.h"
#include "AchievementWriteDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "AchievementWriteCallbackProxy.generated.h"

class UAchievementWriteCallbackProxy;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAchievementWriteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAchievementWriteDelegate OnFailure;
    
    UAchievementWriteCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);
    
};

