#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGooglePADErrorCode.h"
#include "EGooglePADDownloadStatus.h"
#include "EGooglePADStorageMethod.h"
#include "EGooglePADCellularDataConfirmStatus.h"
#include "GooglePADFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class GOOGLEPAD_API UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGooglePADFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode ShowCellularDataConfirmation();
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode RequestRemoval(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode RequestInfo(const TArray<FString> AssetPacks);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode RequestDownload(const TArray<FString> AssetPacks);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseDownloadState(const int32 State);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseAssetPackLocation(const int32 Location);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalBytesToDownload(const int32 State);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADStorageMethod GetStorageMethod(const int32 Location);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& status);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADDownloadStatus GetDownloadStatus(const int32 State);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode GetDownloadState(const FString& Name, int32& State);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBytesDownloaded(const int32 State);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAssetsPath(const int32 Location);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode GetAssetPackLocation(const FString& Name, int32& Location);
    
    UFUNCTION(BlueprintCallable)
    static EGooglePADErrorCode CancelDownload(const TArray<FString> AssetPacks);
    
};

