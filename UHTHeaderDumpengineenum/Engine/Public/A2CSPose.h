#pragma once
#include "CoreMinimal.h"
#include "A2Pose.h"
#include "A2CSPose.generated.h"

USTRUCT()
struct ENGINE_API FA2CSPose : public FA2Pose {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> ComponentSpaceFlags;
    
public:
    FA2CSPose();
};

