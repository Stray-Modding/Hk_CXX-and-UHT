#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BrushStampIndicator.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushStampIndicator : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float BrushRadius;
    
    UPROPERTY()
    float BrushFalloff;
    
    UPROPERTY()
    FVector BrushPosition;
    
    UPROPERTY()
    FVector BrushNormal;
    
    UPROPERTY()
    bool bDrawIndicatorLines;
    
    UPROPERTY()
    bool bDrawRadiusCircle;
    
    UPROPERTY()
    int32 SampleStepCount;
    
    UPROPERTY()
    FLinearColor LineColor;
    
    UPROPERTY()
    float LineThickness;
    
    UPROPERTY()
    bool bDepthTested;
    
    UPROPERTY()
    bool bDrawSecondaryLines;
    
    UPROPERTY()
    float SecondaryLineThickness;
    
    UPROPERTY()
    FLinearColor SecondaryLineColor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* AttachedComponent;
    
    UBrushStampIndicator();
};

