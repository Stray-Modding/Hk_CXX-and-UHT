#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LightComponentBase.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULightComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid LightGuid;
    
    UPROPERTY()
    float Brightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FColor LightColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAffectsWorld: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 CastStaticShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 CastDynamicShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectTranslucentLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bTransmission: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastVolumetricShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastDeepShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastRaytracedShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectReflection: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectGlobalIllumination: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float DeepShadowLayerDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float IndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SamplesPerPixel;
    
    ULightComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetSamplesPerPixel(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastVolumetricShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadows(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastRaytracedShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastDeepShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectReflection(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectGlobalIllumination(bool bNewValue);
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetLightColor() const;
    
};

