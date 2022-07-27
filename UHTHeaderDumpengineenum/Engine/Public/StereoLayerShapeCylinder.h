#pragma once
#include "CoreMinimal.h"
#include "StereoLayerShape.h"
#include "StereoLayerShapeCylinder.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class ENGINE_API UStereoLayerShapeCylinder : public UStereoLayerShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float OverlayArc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    int32 Height;
    
    UStereoLayerShapeCylinder();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayArc(float InOverlayArc);
    
    UFUNCTION(BlueprintCallable)
    void SetHeight(int32 InHeight);
    
};

