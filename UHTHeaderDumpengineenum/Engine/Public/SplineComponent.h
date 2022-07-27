#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "PrimitiveComponent.h"
#include "SplineCurves.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveQuat -FallbackName=InterpCurveQuat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESplineCoordinateSpace.h"
#include "SplinePoint.h"
#include "ESplinePointType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SplineComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USplineComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSplineCurves SplineCurves;
    
    UPROPERTY()
    FInterpCurveVector SplineInfo;
    
    UPROPERTY()
    FInterpCurveQuat SplineRotInfo;
    
    UPROPERTY()
    FInterpCurveVector SplineScaleInfo;
    
    UPROPERTY()
    FInterpCurveFloat SplineReparamTable;
    
    UPROPERTY()
    bool bAllowSplineEditingPerInstance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bStationaryEndpoints;
    
    UPROPERTY(EditAnywhere)
    bool bSplineHasBeenEdited;
    
    UPROPERTY()
    bool bModifiedByConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInputSplinePointsToConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
private:
    UPROPERTY(EditAnywhere)
    bool bClosedLoop;
    
    UPROPERTY(EditAnywhere)
    bool bLoopPositionOverride;
    
    UPROPERTY(EditAnywhere)
    float LoopPosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DefaultUpVector;
    
    USplineComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentColor(const FLinearColor& TangentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineWorldPoints(const TArray<FVector>& Points);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePointType(int32 PointIndex, TEnumAsByte<ESplinePointType::Type> Type, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineLocalPoints(const TArray<FVector>& Points);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleAtSplinePoint(int32 PointIndex, const FVector& InScaleVector, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationAtSplinePoint(int32 PointIndex, const FRotator& InRotation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawDebug(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultUpVector(const FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSplinePoint(int32 Index, bool bUpdateSpline);
    
    UFUNCTION(BlueprintPure)
    bool IsClosedLoop() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldTangentAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetWorldRotationAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldLocationAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldDirectionAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUpVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTangentAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ESplinePointType::Type> GetSplinePointType(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineLength() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaleAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaleAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaleAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaleAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    float GetRollAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float GetRollAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSplineSegments() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSplinePoints() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    void GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    void GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName) const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceAlongSplineAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FTransform FindTransformClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindTangentClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindScaleClosestToWorldLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintPure)
    FRotator FindRotationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float FindRollClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindLocationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintPure)
    FVector FindDirectionClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSplinePoints(bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineWorldPoint(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePointAtIndex(const FVector& Position, int32 Index, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePoint(const FVector& Position, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineLocalPoint(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(const FSplinePoint& Point, bool bUpdateSpline);
    
};

