#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkTransformStaticData.h"
#include "LiveLinkTransformFrameData.h"
#include "LiveLinkTransformBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkTransformStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkTransformFrameData FrameData;
    
    FLiveLinkTransformBlueprintData();
};

