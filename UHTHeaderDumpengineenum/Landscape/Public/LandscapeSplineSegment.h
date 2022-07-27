#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineSegmentConnection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineSegment.generated.h"

class USplineMeshComponent;

UCLASS(MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    FLandscapeSplineSegmentConnection Connections[2];
    
protected:
    UPROPERTY()
    FInterpCurveVector SplineInfo;
    
    UPROPERTY()
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY()
    FBox Bounds;
    
    UPROPERTY(Export, TextExportTransient)
    TArray<USplineMeshComponent*> LocalMeshComponents;
    
public:
    ULandscapeSplineSegment();
};

