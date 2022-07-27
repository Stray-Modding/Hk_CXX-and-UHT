#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
#include "SplineCurves.h"
#include "SplineInstanceData.generated.h"

USTRUCT()
struct FSplineInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bSplineHasBeenEdited;
    
    UPROPERTY()
    FSplineCurves SplineCurves;
    
    UPROPERTY()
    FSplineCurves SplineCurvesPreUCS;
    
    ENGINE_API FSplineInstanceData();
};

