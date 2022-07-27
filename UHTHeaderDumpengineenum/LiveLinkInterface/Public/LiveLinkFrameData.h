#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LiveLinkCurveElement.h"
#include "LiveLinkWorldTime.h"
#include "LiveLinkMetaData.h"
#include "LiveLinkFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkFrameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FLiveLinkCurveElement> CurveElements;
    
    UPROPERTY()
    FLiveLinkWorldTime WorldTime;
    
    UPROPERTY()
    FLiveLinkMetaData MetaData;
    
    LIVELINKINTERFACE_API FLiveLinkFrameData();
};

