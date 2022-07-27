#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseVec2ParameterSource.h"
#include "GizmoVec2ParameterChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoPlaneTranslationParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    FVector2D Parameter;
    
    UPROPERTY()
    FGizmoVec2ParameterChange LastChange;
    
    UPROPERTY()
    FVector CurTranslationOrigin;
    
    UPROPERTY()
    FVector CurTranslationNormal;
    
    UPROPERTY()
    FVector CurTranslationAxisX;
    
    UPROPERTY()
    FVector CurTranslationAxisY;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoPlaneTranslationParameterSource();
};

