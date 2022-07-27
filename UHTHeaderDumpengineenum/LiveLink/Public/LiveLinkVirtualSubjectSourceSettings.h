#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceSettings -FallbackName=LiveLinkSourceSettings
#include "LiveLinkVirtualSubjectSourceSettings.generated.h"

UCLASS()
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SourceName;
    
    ULiveLinkVirtualSubjectSourceSettings();
};

