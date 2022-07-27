#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SimpleCameraShakePattern.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ConstantCameraShakePattern.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class UConstantCameraShakePattern : public USimpleCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector LocationOffset;
    
    UPROPERTY()
    FRotator RotationOffset;
    
    UConstantCameraShakePattern();
};

