#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERadialImpulseFalloff -FallbackName=ERadialImpulseFalloff
#include "EObjectTypeQuery.h"
#include "RadialForceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API URadialForceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpulseVelChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreOwningActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleDamage;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    
public:
    URadialForceComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
    
    UFUNCTION(BlueprintCallable)
    void FireImpulse();
    
    UFUNCTION(BlueprintCallable)
    void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
    
};

