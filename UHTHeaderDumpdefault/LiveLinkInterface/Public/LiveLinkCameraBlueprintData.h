#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkCameraStaticData.h"
#include "LiveLinkCameraFrameData.h"
#include "LiveLinkCameraBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkCameraStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkCameraFrameData FrameData;
    
    FLiveLinkCameraBlueprintData();
};

