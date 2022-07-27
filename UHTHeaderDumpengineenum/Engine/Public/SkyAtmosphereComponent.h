#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESkyAtmosphereTransformMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TentDistribution.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SkyAtmosphereComponent.generated.h"

class UDirectionalLightComponent;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkyAtmosphereComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    ESkyAtmosphereTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float BottomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MultiScatteringFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float RayleighScatteringScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor RayleighScattering;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MieScatteringScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor MieScattering;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MieAbsorptionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor MieAbsorption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MieAnisotropy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MieExponentialDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float OtherAbsorptionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor OtherAbsorption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTentDistribution OtherTentDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor SkyLuminanceFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float HeightFogContribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TransmittanceMinLightElevationAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float AerialPerspectiveStartDepth;
    
private:
    UPROPERTY()
    FGuid bStaticLightingBuiltGUID;
    
public:
    USkyAtmosphereComponent();
    UFUNCTION(BlueprintCallable)
    void SetSkyLuminanceFactor(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighScatteringScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighScattering(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighExponentialDistribution(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherAbsorptionScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherAbsorption(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiScatteringFactor(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieScatteringScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieScattering(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieExponentialDistribution(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAnisotropy(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAbsorptionScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAbsorption(FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFogContribution(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAtmosphereHeight(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialPespectiveViewDistanceScale(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight);
    
};

