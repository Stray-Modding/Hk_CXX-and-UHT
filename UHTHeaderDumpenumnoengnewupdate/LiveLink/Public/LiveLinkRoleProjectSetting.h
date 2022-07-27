#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkRoleProjectSetting.generated.h"

class ULiveLinkRole;
class ULiveLinkSubjectSettings;
class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFramePreProcessor;

USTRUCT(BlueprintType)
struct LIVELINK_API FLiveLinkRoleProjectSetting {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ULiveLinkSubjectSettings> SettingClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSubclassOf<ULiveLinkFramePreProcessor>> FramePreProcessors;
    
    FLiveLinkRoleProjectSetting();
};

