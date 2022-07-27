#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EToolContextCoordinateSystem.h"
#include "TransformGizmo.generated.h"

class UPrimitiveComponent;
class UTransformProxy;
class UGizmoConstantFrameAxisSource;
class UGizmoComponentAxisSource;
class UGizmoTransformChangeStateTarget;
class UGizmoScaledTransformSource;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* ActiveTarget;
    
    UPROPERTY()
    bool bSnapToWorldGrid;
    
    UPROPERTY()
    bool bGridSizeIsExplicit;
    
    UPROPERTY()
    FVector ExplicitGridSize;
    
    UPROPERTY()
    bool bRotationGridSizeIsExplicit;
    
    UPROPERTY()
    FRotator ExplicitRotationGridSize;
    
    UPROPERTY()
    bool bSnapToWorldRotGrid;
    
    UPROPERTY()
    bool bUseContextCoordinateSystem;
    
    UPROPERTY()
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    
protected:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> NonuniformScaleComponents;
    
    UPROPERTY()
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY()
    UGizmoConstantFrameAxisSource* CameraAxisSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisZSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisZSource;
    
    UPROPERTY()
    UGizmoTransformChangeStateTarget* StateTarget;
    
    UPROPERTY()
    UGizmoScaledTransformSource* ScaledTransformSource;
    
public:
    UTransformGizmo();
};

