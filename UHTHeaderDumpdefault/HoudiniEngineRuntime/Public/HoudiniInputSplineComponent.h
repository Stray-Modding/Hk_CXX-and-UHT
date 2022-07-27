#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInputSplineComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumberOfSplineControlPoints;
    
    UPROPERTY()
    float SplineLength;
    
    UPROPERTY()
    float SplineResolution;
    
    UPROPERTY()
    bool SplineClosed;
    
    UPROPERTY()
    TArray<FTransform> SplineControlPoints;
    
    UHoudiniInputSplineComponent();
};
