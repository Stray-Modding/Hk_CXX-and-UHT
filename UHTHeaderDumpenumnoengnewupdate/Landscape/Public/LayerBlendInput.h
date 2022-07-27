#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerBlendType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LayerBlendInput.generated.h"

USTRUCT(BlueprintType)
struct FLayerBlendInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    
    UPROPERTY()
    FExpressionInput LayerInput;
    
    UPROPERTY()
    FExpressionInput HeightInput;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY(EditAnywhere)
    FVector ConstLayerInput;
    
    UPROPERTY(EditAnywhere)
    float ConstHeightInput;
    
    LANDSCAPE_API FLayerBlendInput();
};

