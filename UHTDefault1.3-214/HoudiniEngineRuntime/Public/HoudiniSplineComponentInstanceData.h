#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniSplineComponentInstanceData.generated.h"

USTRUCT()
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> CurvePoints;
    
    UPROPERTY()
    TArray<FVector> DisplayPoints;
    
    UPROPERTY()
    TArray<int32> DisplayPointIndexDivider;
    
    HOUDINIENGINERUNTIME_API FHoudiniSplineComponentInstanceData();
};

