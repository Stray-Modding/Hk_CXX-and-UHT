#pragma once
#include "CoreMinimal.h"
#include "LightmassMaterialInterfaceSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightmassMaterialInterfaceSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float EmissiveBoost;
    
    UPROPERTY(EditAnywhere)
    float DiffuseBoost;
    
    UPROPERTY(EditAnywhere)
    float ExportResolutionScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bCastShadowAsMasked: 1;
    
    UPROPERTY()
    uint8 bOverrideCastShadowAsMasked: 1;
    
    UPROPERTY()
    uint8 bOverrideEmissiveBoost: 1;
    
    UPROPERTY()
    uint8 bOverrideDiffuseBoost: 1;
    
    UPROPERTY()
    uint8 bOverrideExportResolutionScale: 1;
    
    ENGINE_API FLightmassMaterialInterfaceSettings();
};

