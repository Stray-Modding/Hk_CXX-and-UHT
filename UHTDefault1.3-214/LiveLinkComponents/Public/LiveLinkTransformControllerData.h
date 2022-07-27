#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformControllerData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKCOMPONENTS_API FLiveLinkTransformControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWorldTransform;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseLocation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseRotation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bSweep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bTeleport;
    
    FLiveLinkTransformControllerData();
};

