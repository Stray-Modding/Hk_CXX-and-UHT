#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "SplineTool.generated.h"

class USplineComponent;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API USplineTool : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USplineTool();
    UFUNCTION(BlueprintPure)
    static FVector FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, TEnumAsByte<ESplineCoordinateSpace::Type> _splineCoordinateSpace);
    
    UFUNCTION(BlueprintPure)
    static float FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location);
    
    UFUNCTION(BlueprintPure)
    static float FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations);
    
    UFUNCTION(BlueprintCallable)
    static void DrawSplineComponent(const USplineComponent* _spline, float _thickness, FColor _color, bool _persistentLines, float _lifeTime);
    
};

