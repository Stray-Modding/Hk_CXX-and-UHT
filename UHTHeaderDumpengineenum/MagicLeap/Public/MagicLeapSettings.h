#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MagicLeapSettings.generated.h"

UCLASS(DefaultConfig)
class MAGICLEAP_API UMagicLeapSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bEnableZI;
    
    UPROPERTY(GlobalConfig)
    bool bUseVulkanForZI;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseMLAudioForZI;
    
    UMagicLeapSettings();
};

