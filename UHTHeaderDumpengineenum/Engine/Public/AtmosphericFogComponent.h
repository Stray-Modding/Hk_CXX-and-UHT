#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "AtmospherePrecomputeParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AtmosphericFogComponent.generated.h"

class UTexture2D;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtmosphericFogComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SunMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DensityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AltitudeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float GroundOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SunDiscScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float DefaultBrightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FColor DefaultLightColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    uint8 bDisableSunDisk: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    uint8 bAtmosphereAffectsSunIlluminance: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    uint8 bDisableGroundScattering: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAtmospherePrecomputeParameters PrecomputeParams;
    
public:
    UPROPERTY()
    UTexture2D* TransmittanceTexture;
    
    UPROPERTY()
    UTexture2D* IrradianceTexture;
    
    UAtmosphericFogComponent();
    UFUNCTION(BlueprintCallable)
    void StartPrecompute();
    
    UFUNCTION(BlueprintCallable)
    void SetSunMultiplier(float NewSunMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDistance(float NewStartDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMultiplier(float NewFogMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceScale(float NewDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceOffset(float NewDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityOffset(float NewDensityOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityMultiplier(float NewDensityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBrightness(float NewBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetAltitudeScale(float NewAltitudeScale);
    
    UFUNCTION(BlueprintCallable)
    void DisableSunDisk(bool NewSunDisk);
    
    UFUNCTION(BlueprintCallable)
    void DisableGroundScattering(bool NewGroundScattering);
    
};

