#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PostProcessSettings.h"
#include "CameraAnim.generated.h"

class UInterpGroup;

UCLASS(MinimalAPI, NotPlaceable)
class UCameraAnim : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInterpGroup* CameraInterpGroup;
    
    UPROPERTY()
    float AnimLength;
    
    UPROPERTY()
    FBox BoundingBox;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bRelativeToInitialTransform: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bRelativeToInitialFOV: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseFOV;
    
    UPROPERTY()
    FPostProcessSettings BasePostProcessSettings;
    
    UPROPERTY()
    float BasePostProcessBlendWeight;
    
    UCameraAnim();
};

