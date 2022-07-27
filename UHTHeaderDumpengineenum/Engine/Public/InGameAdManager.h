#pragma once
#include "CoreMinimal.h"
#include "OnUserClickedBannerDelegate.h"
#include "PlatformInterfaceBase.h"
#include "OnUserClosedAdvertisementDelegate.h"
#include "InGameAdManager.generated.h"

UCLASS(NonTransient)
class UInGameAdManager : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bShouldPauseWhileAdOpen: 1;
    
    UPROPERTY()
    TArray<FOnUserClickedBanner> ClickedBannerDelegates;
    
    UPROPERTY()
    TArray<FOnUserClosedAdvertisement> ClosedAdDelegates;
    
    UInGameAdManager();
};

