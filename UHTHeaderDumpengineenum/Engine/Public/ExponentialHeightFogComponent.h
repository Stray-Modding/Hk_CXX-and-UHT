#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "ExponentialHeightFogData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ExponentialHeightFogComponent.generated.h"

class UTextureCube;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UExponentialHeightFogComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FExponentialHeightFogData SecondFogData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureCube* InscatteringColorCubemap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InscatteringColorCubemapAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor InscatteringTextureTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FullyDirectionalInscatteringColorDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NonDirectionalInscatteringColorDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogMaxOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float StartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FogCutoffDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableVolumetricFog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumetricFogExtinctionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumetricFogDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumetricFogStaticLightingScatteringIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bOverrideLightColorsWithFogInscatteringColors;
    
    UExponentialHeightFogComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogScatteringDistribution(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogExtinctionScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogEmissive(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogDistance(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogAlbedo(FColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFog(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNonDirectionalInscatteringColorDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringTextureTint(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringColorCubemapAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringColorCubemap(UTextureCube* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMaxOpacity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogInscatteringColor(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogHeightFalloff(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogDensity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogCutoffDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringStartDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringExponent(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringColor(FLinearColor Value);
    
};

