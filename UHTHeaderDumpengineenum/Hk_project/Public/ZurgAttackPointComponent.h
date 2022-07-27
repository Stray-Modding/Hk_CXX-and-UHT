#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ZurgAttackPointComponent.generated.h"

class UZurgAttackPointComponent;
class AZurgPawnSlave;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZurgAttackPointComponentDelegate, UZurgAttackPointComponent*, _zurgAttackPointComponent, AZurgPawnSlave*, _zurg);
    
    UPROPERTY(BlueprintAssignable)
    FZurgAttackPointComponentDelegate OnZurgAttached;
    
    UPROPERTY(BlueprintAssignable)
    FZurgAttackPointComponentDelegate OnZurgDetached;
    
    UZurgAttackPointComponent();
    UFUNCTION(BlueprintPure)
    AZurgPawnSlave* GetAttachedZurg() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachZurg();
    
    UFUNCTION(BlueprintCallable)
    void AttachZurg(AZurgPawnSlave* _zurg);
    
private:
    UFUNCTION()
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

