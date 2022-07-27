#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "VolumetricCloudComponent.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVolumetricCloudComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LayerHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePerSampleAtmosphericLightTransmittance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SkyLightCloudBottomOcclusion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ReflectionSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowTracingDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float StopTracingTransmittanceThreshold;
    
    UVolumetricCloudComponent();
    UFUNCTION(BlueprintCallable)
    void SetViewSampleCountScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTracingStartMaxDistance(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTracingMaxDistance(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStopTracingTransmittanceThreshold(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightCloudBottomOcclusion(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowViewSampleCountScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowTracingDistance(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowReflectionSampleCountScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionSampleCountScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlanetRadius(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerHeight(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerBottomAltitude(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundAlbedo(FColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetbUsePerSampleAtmosphericLightTransmittance(bool newValue);
    
};

