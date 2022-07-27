#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampFloatPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterFloat;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloatPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY()
    int32 InstanceIndex;
    
    UPROPERTY(Export)
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(Export)
    UHoudiniParameterFloat* ValueParentParm;
    
    UPROPERTY(Export)
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampFloatPoint();
};

