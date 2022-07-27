#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponent.h"
#include "PlanarReflectionComponent.generated.h"

class UBoxComponent;

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlanarReflectionComponent : public USceneCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UBoxComponent* PreviewBox;
    
    UPROPERTY(EditAnywhere)
    float NormalDistortionStrength;
    
    UPROPERTY(EditAnywhere)
    float PrefilterRoughness;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float PrefilterRoughnessDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 ScreenPercentage;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ExtraFOV;
    
    UPROPERTY()
    float DistanceFromPlaneFadeStart;
    
    UPROPERTY()
    float DistanceFromPlaneFadeEnd;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromPlaneFadeoutStart;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromPlaneFadeoutEnd;
    
    UPROPERTY(EditAnywhere)
    float AngleFromPlaneFadeStart;
    
    UPROPERTY(EditAnywhere)
    float AngleFromPlaneFadeEnd;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreviewPlane;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bRenderSceneTwoSided;
    
    UPlanarReflectionComponent();
};

