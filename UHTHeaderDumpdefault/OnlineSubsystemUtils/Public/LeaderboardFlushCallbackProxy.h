#pragma once
#include "CoreMinimal.h"
#include "OnLeaderboardFlushedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LeaderboardFlushCallbackProxy.generated.h"

class ULeaderboardFlushCallbackProxy;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class ULeaderboardFlushCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLeaderboardFlushed OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnLeaderboardFlushed OnFailure;
    
    ULeaderboardFlushCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);
    
};

