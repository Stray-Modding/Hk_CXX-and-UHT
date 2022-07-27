#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkRefSkeleton -FallbackName=LiveLinkRefSkeleton
#include "LiveLinkSubjectDataMessage.generated.h"

USTRUCT()
struct FLiveLinkSubjectDataMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLiveLinkRefSkeleton RefSkeleton;
    
    UPROPERTY()
    FName SubjectName;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkSubjectDataMessage();
};

