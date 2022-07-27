#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AxisAngleGizmo.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoFloatParameterSource;
class IGizmoFloatParameterSource;
class UGizmoClickTarget;
class IGizmoClickTarget;
class UGizmoStateTarget;
class IGizmoStateTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisAngleGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoFloatParameterSource> AngleSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector RotationOrigin;
    
    UPROPERTY()
    FVector RotationAxis;
    
    UPROPERTY()
    FVector RotationPlaneX;
    
    UPROPERTY()
    FVector RotationPlaneY;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    float InteractionStartAngle;
    
    UPROPERTY()
    float InteractionCurAngle;
    
    UAxisAngleGizmo();
};

