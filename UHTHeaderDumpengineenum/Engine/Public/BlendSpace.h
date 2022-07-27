#pragma once
#include "CoreMinimal.h"
#include "EBlendSpaceAxis.h"
#include "BlendSpaceBase.h"
#include "BlendSpace.generated.h"

UCLASS(MinimalAPI)
class UBlendSpace : public UBlendSpaceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;
    
public:
    UBlendSpace();
};

