#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ActorComponent.h"
#include "PhysicalAnimationData.h"
#include "PhysicalAnimationComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicalAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrengthMultiplyer;
    
private:
    UPROPERTY(Export)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPhysicalAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    
    UFUNCTION(BlueprintPure)
    FTransform GetBodyTargetTransform(FName BodyName) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
    
};

