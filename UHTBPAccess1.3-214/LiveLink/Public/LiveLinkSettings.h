#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkRoleProjectSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=ELiveLinkSourceMode -FallbackName=ELiveLinkSourceMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LiveLinkSettings.generated.h"

class ULiveLinkPreset;
class ULiveLinkFrameInterpolationProcessor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LIVELINK_API ULiveLinkSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath PresetSaveDir;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClockOffsetCorrectionStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ValidColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InvalidColor;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 TextSizeSource;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 TextSizeSubject;
    
    ULiveLinkSettings();
};

