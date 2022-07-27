#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeSplineConnection.h"
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineControlPoint.generated.h"

class UControlPointMeshComponent;

UCLASS(MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineControlPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float LayerWidthRatio;
    
    UPROPERTY(EditAnywhere)
    float SideFalloff;
    
    UPROPERTY(EditAnywhere)
    float LeftSideFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float RightSideFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float LeftSideLayerFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float RightSideLayerFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float EndFalloff;
    
    UPROPERTY(TextExportTransient)
    TArray<FLandscapeSplineConnection> ConnectedSegments;
    
protected:
    UPROPERTY()
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY()
    FBox Bounds;
    
    UPROPERTY(Export, TextExportTransient)
    UControlPointMeshComponent* LocalMeshComponent;
    
public:
    ULandscapeSplineControlPoint();
};

