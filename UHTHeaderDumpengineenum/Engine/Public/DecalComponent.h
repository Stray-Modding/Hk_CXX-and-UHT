#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DecalComponent.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UDecalComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SortOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeScreenSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDestroyOwnerAfterFade: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector DecalSize;
    
    UDecalComponent();
    UFUNCTION(BlueprintCallable)
    void SetSortOrder(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeScreenSize(float NewFadeScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeIn(float StartDelay, float Duaration);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
    UFUNCTION(BlueprintPure)
    float GetFadeStartDelay() const;
    
    UFUNCTION(BlueprintPure)
    float GetFadeInStartDelay() const;
    
    UFUNCTION(BlueprintPure)
    float GetFadeInDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetFadeDuration() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetDecalMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
    
};

