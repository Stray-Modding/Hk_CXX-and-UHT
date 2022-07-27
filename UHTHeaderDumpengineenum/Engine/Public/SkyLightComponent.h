#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ESkyLightSourceType.h"
#include "LightComponentBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EOcclusionCombineMode.h"
#include "SkyLightComponent.generated.h"

class UTextureCube;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USkyLightComponent : public ULightComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRealTimeCapture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyLightSourceType> SourceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureCube* Cubemap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CubemapResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SkyDistanceThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bCaptureEmissiveOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bLowerHemisphereIsBlack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLinearColor LowerHemisphereColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Contrast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinOcclusion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor OcclusionTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCloudAmbientOcclusion: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionMapResolutionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionApertureScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;
    
protected:
    UPROPERTY(Transient)
    UTextureCube* BlendDestinationCubemap;
    
public:
    USkyLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolumetricScatteringIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionTint(const FColor& InTint);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionExponent(float InOcclusionExponent);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionContrast(float InOcclusionContrast);
    
    UFUNCTION(BlueprintCallable)
    void SetMinOcclusion(float InMinOcclusion);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerHemisphereColor(const FLinearColor& InLowerHemisphereColor);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIndirectLightingIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction);
    
    UFUNCTION(BlueprintCallable)
    void SetCubemap(UTextureCube* NewCubemap);
    
    UFUNCTION(BlueprintCallable)
    void RecaptureSky();
    
};

