#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AntiZurgZoneComponent.generated.h"

class AActor;
class UNavAreaBase;
class UAntiZurgSpotlightComponent;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgZoneComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavAreaBase> m_navArea;
    
public:
    UAntiZurgZoneComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpotlightOwner(UAntiZurgSpotlightComponent* _newSpotlight);
    
    UFUNCTION(BlueprintPure)
    UAntiZurgSpotlightComponent* GetSpotLightOwner() const;
    
protected:
    UFUNCTION()
    void _OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

