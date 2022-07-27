#pragma once
#include "CoreMinimal.h"
#include "LiveLinkControllerBase.h"
#include "LiveLinkTransformControllerData.h"
#include "LiveLinkTransformController.generated.h"

UCLASS(EditInlineNew)
class LIVELINKCOMPONENTS_API ULiveLinkTransformController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLiveLinkTransformControllerData TransformData;
    
    ULiveLinkTransformController();
};

