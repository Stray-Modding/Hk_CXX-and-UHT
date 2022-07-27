#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "SmartName.h"
#include "PoseData.h"
#include "PoseDataContainer.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseDataContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSmartName> PoseNames;
    
    UPROPERTY()
    TArray<FName> Tracks;
    
    UPROPERTY(Transient)
    TMap<FName, int32> TrackMap;
    
    UPROPERTY()
    TArray<FPoseData> Poses;
    
    UPROPERTY()
    TArray<FAnimCurveBase> Curves;
    
public:
    FPoseDataContainer();
};

