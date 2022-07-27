#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AppleImageConversionDelegateDelegate.h"
#include "AppleImageUtilsImageConversionResult.h"
#include "ETextureRotationDirection.h"
#include "AppleImageUtilsBaseAsyncTaskBlueprintProxy.generated.h"

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
class UTexture;

UCLASS(BlueprintType, MinimalAPI)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAppleImageConversionDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAppleImageConversionDelegate OnFailure;
    
    UPROPERTY(BlueprintReadOnly)
    FAppleImageUtilsImageConversionResult ConversionResult;
    
    UAppleImageUtilsBaseAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
};

