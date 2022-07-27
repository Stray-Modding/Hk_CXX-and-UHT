#pragma once
#include "CoreMinimal.h"
#include "LiveLinkWorldTime.h"
#include "LiveLinkMetaData.h"
#include "LiveLinkBaseFrameData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkWorldTime WorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkMetaData MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PropertyValues;
    
    FLiveLinkBaseFrameData();
};

