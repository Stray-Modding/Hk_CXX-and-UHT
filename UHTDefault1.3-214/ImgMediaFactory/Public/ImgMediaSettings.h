#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "ImgMediaSettings.generated.h"

UCLASS()
class IMGMEDIAFACTORY_API UImgMediaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFrameRate DefaultFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float CacheBehindPercentage;
    
    UPROPERTY(Config, EditAnywhere)
    float CacheSizeGB;
    
    UPROPERTY(Config, EditAnywhere)
    int32 CacheThreads;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 CacheThreadStackSizeKB;
    
    UPROPERTY(Config, EditAnywhere)
    float GlobalCacheSizeGB;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseGlobalCache;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ExrDecoderThreads;
    
private:
    UPROPERTY(Config, EditAnywhere)
    FString DefaultProxy;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseDefaultProxy;
    
public:
    UImgMediaSettings();
};

