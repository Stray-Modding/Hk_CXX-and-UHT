#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "ToyoSplinePointData.h"
#include "ToyoSplineComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FToyoSplinePointData> ToyoSplinePointsData;
    
    UToyoSplineComponent();
};

