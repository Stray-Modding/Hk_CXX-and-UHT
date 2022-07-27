#pragma once
#include "CoreMinimal.h"
#include "MobileInstalledContent.h"
#include "OnContentInstallSucceededDelegate.h"
#include "OnContentInstallFailedDelegate.h"
#include "MobilePendingContent.generated.h"

UCLASS()
class MOBILEPATCHINGUTILS_API UMobilePendingContent : public UMobileInstalledContent {
    GENERATED_BODY()
public:
    UMobilePendingContent();
    UFUNCTION(BlueprintCallable)
    void StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed);
    
    UFUNCTION(BlueprintPure)
    float GetTotalDownloadedSize();
    
    UFUNCTION(BlueprintPure)
    float GetRequiredDiskSpace();
    
    UFUNCTION(BlueprintPure)
    float GetInstallProgress();
    
    UFUNCTION(BlueprintPure)
    FText GetDownloadStatusText();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSize();
    
};

