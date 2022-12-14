#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathTools.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UMathTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathTools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SignedAngleBetween(const FVector& _a, const FVector& _b, FVector _UpVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat RotatorToQuat(const FRotator& _rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator QuatToRotator(const FQuat& _quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearlyZero(float _value, float _tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetYZ2D(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetYZ(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetXZ2D(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetXZ(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetXY2D(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetXY(const FVector& _vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSignedAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProjectileTimeOfFlight(FVector _projectileVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestPointToBox(const FBox& _box, const FVector& _point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ComputeBarycentricCoordinates(const FVector& _point, const FVector& _a, const FVector& _b, const FVector& _C, float& _outU, float& _outV, float& _outW);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorAngle(const FVector& _vector, const FVector& _forward, float _minAngleDeg, float _maxAngleDeg, const FVector& _up);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetween(const FVector& _a, const FVector& _b);
    
};

