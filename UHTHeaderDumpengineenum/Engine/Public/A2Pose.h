#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "A2Pose.generated.h"

USTRUCT()
struct FA2Pose {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> Bones;
    
    ENGINE_API FA2Pose();
};

