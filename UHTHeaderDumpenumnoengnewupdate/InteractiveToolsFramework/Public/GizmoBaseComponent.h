#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "GizmoBaseComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    float HoverSizeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PixelHitDistanceThreshold;
    
    UGizmoBaseComponent();
    UFUNCTION()
    void UpdateWorldLocalState(bool bWorldIn);
    
    UFUNCTION()
    void UpdateHoverState(bool bHoveringIn);
    
};

