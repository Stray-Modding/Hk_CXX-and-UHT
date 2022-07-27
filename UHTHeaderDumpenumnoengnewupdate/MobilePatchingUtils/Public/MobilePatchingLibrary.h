#pragma once
#include "CoreMinimal.h"
#include "OnRequestContentSucceededDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnRequestContentFailedDelegate.h"
#include "MobilePatchingLibrary.generated.h"

class UMobileInstalledContent;

UCLASS(BlueprintType)
class MOBILEPATCHINGUTILS_API UMobilePatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMobilePatchingLibrary();
    UFUNCTION(BlueprintCallable)
    static void RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FOnRequestContentSucceeded OnSucceeded, FOnRequestContentFailed OnFailed);
    
    UFUNCTION(BlueprintPure)
    static bool HasActiveWiFiConnection();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetSupportedPlatformNames();
    
    UFUNCTION(BlueprintPure)
    static UMobileInstalledContent* GetInstalledContent(const FString& InstallDirectory);
    
    UFUNCTION(BlueprintPure)
    static FString GetActiveDeviceProfileName();
    
};

