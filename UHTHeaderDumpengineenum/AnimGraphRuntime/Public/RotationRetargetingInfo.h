#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EEasingFuncType.h"
#include "ERotationComponent.h"
#include "RotationRetargetingInfo.generated.h"

USTRUCT(BlueprintType)
struct FRotationRetargetingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FTransform Source;
    
    UPROPERTY(EditAnywhere)
    FTransform Target;
    
    UPROPERTY(EditAnywhere)
    ERotationComponent RotationComponent;
    
    UPROPERTY(EditAnywhere)
    FVector TwistAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUseAbsoluteAngle;
    
    UPROPERTY(EditAnywhere)
    float SourceMinimum;
    
    UPROPERTY(EditAnywhere)
    float SourceMaximum;
    
    UPROPERTY(EditAnywhere)
    float TargetMinimum;
    
    UPROPERTY(EditAnywhere)
    float TargetMaximum;
    
    UPROPERTY(EditAnywhere)
    EEasingFuncType EasingType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    bool bFlipEasing;
    
    UPROPERTY(EditAnywhere)
    float EasingWeight;
    
    UPROPERTY(EditAnywhere)
    bool bClamp;
    
    ANIMGRAPHRUNTIME_API FRotationRetargetingInfo();
};

