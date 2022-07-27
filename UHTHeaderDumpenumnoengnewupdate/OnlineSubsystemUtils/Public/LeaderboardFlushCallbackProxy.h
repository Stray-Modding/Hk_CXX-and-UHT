#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnLeaderboardFlushedDelegate.h"
#include "LeaderboardFlushCallbackProxy.generated.h"

class APlayerController;
class ULeaderboardFlushCallbackProxy;

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

