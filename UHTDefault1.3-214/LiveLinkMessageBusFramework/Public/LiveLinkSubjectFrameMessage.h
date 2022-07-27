#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkMetaData -FallbackName=LiveLinkMetaData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkCurveElement -FallbackName=LiveLinkCurveElement
#include "LiveLinkSubjectFrameMessage.generated.h"

USTRUCT()
struct FLiveLinkSubjectFrameMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SubjectName;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FLiveLinkCurveElement> Curves;
    
    UPROPERTY()
    FLiveLinkMetaData MetaData;
    
    UPROPERTY()
    double Time;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkSubjectFrameMessage();
};

