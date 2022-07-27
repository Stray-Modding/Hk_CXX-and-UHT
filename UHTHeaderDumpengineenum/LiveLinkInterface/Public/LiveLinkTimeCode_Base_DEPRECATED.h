#pragma once
#include "CoreMinimal.h"
#include "LiveLinkFrameRate.h"
#include "LiveLinkTimeCode_Base_DEPRECATED.generated.h"

USTRUCT()
struct FLiveLinkTimeCode_Base_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Seconds;
    
    UPROPERTY()
    int32 Frames;
    
    UPROPERTY()
    FLiveLinkFrameRate FrameRate;
    
    LIVELINKINTERFACE_API FLiveLinkTimeCode_Base_DEPRECATED();
};

