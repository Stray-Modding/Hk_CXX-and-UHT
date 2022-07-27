#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "LightComponentBase.h"
#include "LightingChannels.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LightComponent.generated.h"

class UMaterialInterface;
class UTextureLightProfile;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULightComponent : public ULightComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float Temperature;
    
    UPROPERTY(EditAnywhere)
    float MaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistanceFadeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseTemperature: 1;
    
    UPROPERTY()
    int32 ShadowMapChannel;
    
    UPROPERTY()
    float MinRoughness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float SpecularScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowResolutionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowSlopeBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ShadowSharpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ContactShadowLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 ContactShadowLengthInWS: 1;
    
    UPROPERTY()
    uint8 InverseSquaredFalloff: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 CastTranslucentShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowsFromCinematicObjectsOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bForceCachedShadowsForMovablePrimitives: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* LightFunctionMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LightFunctionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureLightProfile* IESTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseIESBrightness: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float IESBrightnessScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightFunctionFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisabledBrightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableLightShaftBloom: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BloomScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BloomMaxBrightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor BloomTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseRayTracedDistanceFieldShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float RayStartOffsetDepthScale;
    
    ULightComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolumetricScatteringIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetUseTemperature(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseIESBrightness(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTransmission(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTemperature(float NewTemperature);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecularScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowSlopeBias(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowBias(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionDisabledBrightness(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColor(FLinearColor NewLightColor, bool bSRGB);
    
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIndirectLightingIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIESTexture(UTextureLightProfile* newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIESBrightnessScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLightShaftBloom(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomTint(FColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomThreshold(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomMaxBrightness(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectTranslucentLighting(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectDynamicIndirectLighting(bool bNewValue);
    
};

