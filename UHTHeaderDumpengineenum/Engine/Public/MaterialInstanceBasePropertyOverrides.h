#pragma once
#include "CoreMinimal.h"
#include "EMaterialShadingModel.h"
#include "EBlendMode.h"
#include "MaterialInstanceBasePropertyOverrides.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialInstanceBasePropertyOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_OpacityMaskClipValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_BlendMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_ShadingModel: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DitheredLODTransition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_CastDynamicShadowAsMasked: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_TwoSided: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 TwoSided: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DitheredLODTransition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCastDynamicShadowAsMasked: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBlendMode> BlendMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    
    UPROPERTY(EditAnywhere)
    float OpacityMaskClipValue;
    
    FMaterialInstanceBasePropertyOverrides();
};

