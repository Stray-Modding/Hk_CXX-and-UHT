#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoArrowComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTIVETOOLSFRAMEWORK_API UGizmoArrowComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float Gap;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UGizmoArrowComponent();
};

