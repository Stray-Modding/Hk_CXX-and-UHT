#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=TimeManagement -ObjectName=TimeSynchronizationSource -FallbackName=TimeSynchronizationSource
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "LiveLinkTimeSynchronizationSource.generated.h"

UCLASS(EditInlineNew)
class LIVELINK_API ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLiveLinkSubjectName SubjectName;
    
    ULiveLinkTimeSynchronizationSource();
};

