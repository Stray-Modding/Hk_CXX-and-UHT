#pragma once
#include "CoreMinimal.h"
#include "LiveLinkWorldTime.h"
#include "LiveLinkMetaData.h"
#include "LiveLinkBaseFrameData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FLiveLinkWorldTime WorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkMetaData MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> PropertyValues;
    
    FLiveLinkBaseFrameData();
};

