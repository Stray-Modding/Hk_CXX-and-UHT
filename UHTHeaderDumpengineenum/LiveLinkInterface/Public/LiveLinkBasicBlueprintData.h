#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkBaseFrameData.h"
#include "LiveLinkBasicBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkBaseStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkBaseFrameData FrameData;
    
    FLiveLinkBasicBlueprintData();
};

