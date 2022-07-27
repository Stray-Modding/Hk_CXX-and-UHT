#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOpacitySourceMode.h"
#include "ESubUVBoundingVertexCount.h"
#include "SubUVAnimation.generated.h"

class UTexture2D;

UCLASS(MinimalAPI)
class USubUVAnimation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* SubUVTexture;
    
    UPROPERTY(EditAnywhere)
    int32 SubImages_Horizontal;
    
    UPROPERTY(EditAnywhere)
    int32 SubImages_Vertical;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    
    UPROPERTY(EditAnywhere)
    float AlphaThreshold;
    
    USubUVAnimation();
};

