#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceBase.h"
#include "BlendSpace1D.generated.h"

UCLASS(MinimalAPI)
class UBlendSpace1D : public UBlendSpaceBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bScaleAnimation;
    
    UBlendSpace1D();
};

