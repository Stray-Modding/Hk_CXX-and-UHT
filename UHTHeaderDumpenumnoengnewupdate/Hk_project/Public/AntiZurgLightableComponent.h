#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "AntiZurgLightableComponent.generated.h"

class AZurgManager;
class ULifeComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgLightableComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AZurgManager* m_zurgManager;
    
    UPROPERTY(Export)
    ULifeComponent* m_ownerLifeComponent;
    
public:
    UAntiZurgLightableComponent();
};

