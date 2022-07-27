#pragma once
#include "CoreMinimal.h"
#include "StereoLayerShape.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EquirectProps.h"
#include "StereoLayerShapeEquirect.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class ENGINE_API UStereoLayerShapeEquirect : public UStereoLayerShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBox2D LeftUVRect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBox2D RightUVRect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D LeftScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RightScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D LeftBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RightBias;
    
    UStereoLayerShapeEquirect();
    UFUNCTION(BlueprintCallable)
    void SetEquirectProps(FEquirectProps InScaleBiases);
    
};

