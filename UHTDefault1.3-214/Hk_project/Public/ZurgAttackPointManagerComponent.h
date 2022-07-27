#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "ZurgAttackPointManagerComponent.generated.h"

class UZurgAttackPointComponent;
class AZurgPawnSlave;
class ULifeComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInt32Range m_zurgCountDamageMultiplicator;
    
public:
    UZurgAttackPointManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackPointsActive(bool _active);
    
    UFUNCTION()
    void OnZurgDetached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION()
    void OnZurgAttached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintPure)
    bool IsAttackPointsActive();
    
private:
    UFUNCTION()
    void _OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
};

