#pragma once
#include "CoreMinimal.h"
#include "LightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LightmassDirectionalLightSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "DirectionalLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UDirectionalLightComponent : public ULightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowCascadeBiasDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableLightShaftOcclusion: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionMaskDarkness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionDepthRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector LightShaftOverrideDirection;
    
    UPROPERTY()
    float WholeSceneDynamicShadowRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DynamicShadowDistanceMovableLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DynamicShadowDistanceStationaryLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DynamicShadowCascades;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CascadeDistributionExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CascadeTransitionFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowDistanceFadeoutFraction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseInsetShadowsForMovableObjects: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 FarShadowCascadeCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float FarShadowDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceFieldShadowDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LightSourceAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LightSourceSoftAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float ShadowSourceAngleFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedAsAtmosphereSunLight: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 AtmosphereSunLightIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLinearColor AtmosphereSunDiskColorScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bPerPixelAtmosphereTransmittance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowsOnClouds: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowsOnAtmosphere: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastCloudShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowOnAtmosphereStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowOnSurfaceStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowDepthBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowMapResolutionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor CloudScatteredLuminanceScale;
    
    UPROPERTY(EditAnywhere)
    FLightmassDirectionalLightSettings LightmassSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastModulatedShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Interp)
    FColor ModulatedShadowColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Interp)
    float ShadowAmount;
    
    UDirectionalLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetShadowDistanceFadeoutFraction(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowAmount(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionMaskDarkness(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightShaftOverrideDirection(FVector newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLightShaftOcclusion(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicShadowDistanceStationaryLight(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicShadowDistanceMovableLight(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicShadowCascades(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCascadeTransitionFraction(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCascadeDistributionExponent(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAtmosphereSunLightIndex(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAtmosphereSunLight(bool bNewValue);
    
};

