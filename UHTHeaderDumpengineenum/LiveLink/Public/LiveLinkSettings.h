#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkRoleProjectSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=ELiveLinkSourceMode -FallbackName=ELiveLinkSourceMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "LiveLinkSettings.generated.h"

class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkPreset;

UCLASS(DefaultConfig, Config=Game)
class LIVELINK_API ULiveLinkSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;
    
public:
    UPROPERTY(Config)
    TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath PresetSaveDir;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float ClockOffsetCorrectionStep;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    ELiveLinkSourceMode DefaultMessageBusSourceMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    double MessageBusPingRequestFrequency;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    double MessageBusHeartbeatFrequency;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    double MessageBusHeartbeatTimeout;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    double MessageBusTimeBeforeRemovingInactiveSource;
    
    UPROPERTY(Config, EditAnywhere)
    double TimeWithoutFrameToBeConsiderAsInvalid;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor ValidColor;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor InvalidColor;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 TextSizeSource;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 TextSizeSubject;
    
    ULiveLinkSettings();
};

