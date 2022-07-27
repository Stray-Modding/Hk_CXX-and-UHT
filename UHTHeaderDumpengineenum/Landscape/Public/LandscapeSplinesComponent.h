#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapeSplinesComponent.generated.h"

class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class UMeshComponent;
class USplineMeshComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeSplinesComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(TextExportTransient)
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
    UPROPERTY(TextExportTransient)
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY(Export, TextExportTransient)
    TArray<UMeshComponent*> CookedForeignMeshComponents;
    
public:
    ULandscapeSplinesComponent();
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> GetSplineMeshComponents();
    
};

