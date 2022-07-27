#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoudiniParameterRampColorPoint.generated.h"

class UHoudiniParameterFloat;
class UHoudiniParameterColor;
class UHoudiniParameterChoice;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColorPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    FLinearColor Value;
    
    UPROPERTY()
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY()
    int32 InstanceIndex;
    
    UPROPERTY(Export)
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(Export)
    UHoudiniParameterColor* ValueParentParm;
    
    UPROPERTY(Export)
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampColorPoint();
};
