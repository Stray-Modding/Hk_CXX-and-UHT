#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "GizmoBoxComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBoxComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Origin;
    
    UPROPERTY(EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector Dimensions;
    
    UPROPERTY(EditAnywhere)
    float LineThickness;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveHiddenLines;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAxisFlip;
    
    UGizmoBoxComponent();
};

