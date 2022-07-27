#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBasicFrameInterpolationProcessor.h"
#include "LiveLinkAnimationFrameInterpolationProcessor.generated.h"

UCLASS(EditInlineNew)
class LIVELINK_API ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor {
    GENERATED_BODY()
public:
    ULiveLinkAnimationFrameInterpolationProcessor();
};

