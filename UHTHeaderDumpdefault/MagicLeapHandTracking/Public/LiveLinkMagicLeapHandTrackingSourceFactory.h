#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceFactory -FallbackName=LiveLinkSourceFactory
#include "LiveLinkMagicLeapHandTrackingSourceFactory.generated.h"

UCLASS()
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory {
    GENERATED_BODY()
public:
    ULiveLinkMagicLeapHandTrackingSourceFactory();
};

