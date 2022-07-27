#pragma once
#include "CoreMinimal.h"
#include "PoseDriverTransform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ERBFFunctionType.h"
#include "ERBFDistanceMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "PoseDriverTarget.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FPoseDriverTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPoseDriverTransform> BoneTransforms;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    float TargetScale;
    
    UPROPERTY(EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    ERBFFunctionType FunctionType;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    FName DrivenName;
    
    UPROPERTY(EditAnywhere)
    bool bIsHidden;
    
    FPoseDriverTarget();
};

