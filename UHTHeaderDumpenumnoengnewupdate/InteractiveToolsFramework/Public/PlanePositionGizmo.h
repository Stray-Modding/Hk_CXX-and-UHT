#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PlanePositionGizmo.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoVec2ParameterSource;
class IGizmoVec2ParameterSource;
class UGizmoClickTarget;
class IGizmoClickTarget;
class UGizmoStateTarget;
class IGizmoStateTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UPlanePositionGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    bool bEnableSignedAxis;
    
    UPROPERTY()
    bool bFlipX;
    
    UPROPERTY()
    bool bFlipY;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector InteractionOrigin;
    
    UPROPERTY()
    FVector InteractionNormal;
    
    UPROPERTY()
    FVector InteractionAxisX;
    
    UPROPERTY()
    FVector InteractionAxisY;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    FVector2D InteractionStartParameter;
    
    UPROPERTY()
    FVector2D InteractionCurParameter;
    
    UPROPERTY()
    FVector2D ParameterSigns;
    
    UPlanePositionGizmo();
};

