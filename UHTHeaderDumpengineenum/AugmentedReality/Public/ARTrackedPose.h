#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "ARPose3D.h"
#include "ARTrackedPose.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARTrackedPose : public UARTrackedGeometry {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FARPose3D TrackedPose;
    
public:
    UARTrackedPose();
    UFUNCTION(BlueprintPure)
    FARPose3D GetTrackedPoseData() const;
    
};

