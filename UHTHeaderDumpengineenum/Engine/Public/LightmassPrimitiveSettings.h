#pragma once
#include "CoreMinimal.h"
#include "LightmassPrimitiveSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightmassPrimitiveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseTwoSidedLighting: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShadowIndirectOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEmissiveForStaticLighting: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseVertexNormalForHemisphereGather: 1;
    
    UPROPERTY()
    float EmissiveLightFalloffExponent;
    
    UPROPERTY()
    float EmissiveLightExplicitInfluenceRadius;
    
    UPROPERTY(EditAnywhere)
    float EmissiveBoost;
    
    UPROPERTY(EditAnywhere)
    float DiffuseBoost;
    
    UPROPERTY(EditAnywhere)
    float FullyOccludedSamplesFraction;
    
    ENGINE_API FLightmassPrimitiveSettings();
};

