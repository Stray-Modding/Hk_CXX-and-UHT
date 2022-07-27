#pragma once
#include "CoreMinimal.h"
#include "ARSkeletonDefinition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARPose2D.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARPose2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSkeletonDefinition SkeletonDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector2D> JointLocations;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<bool> IsJointTracked;
    
    FARPose2D();
};

