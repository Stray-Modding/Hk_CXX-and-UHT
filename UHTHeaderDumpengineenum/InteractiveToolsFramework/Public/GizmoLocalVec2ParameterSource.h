#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoBaseVec2ParameterSource.h"
#include "GizmoVec2ParameterChange.h"
#include "GizmoLocalVec2ParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2D Value;
    
    UPROPERTY()
    FGizmoVec2ParameterChange LastChange;
    
    UGizmoLocalVec2ParameterSource();
};

