#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "AchievementWriteDelegateDelegate.h"
#include "AchievementWriteCallbackProxy.generated.h"

class APlayerController;
class UAchievementWriteCallbackProxy;
class UObject;

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
