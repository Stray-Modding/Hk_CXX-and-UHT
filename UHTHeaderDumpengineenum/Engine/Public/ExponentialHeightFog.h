#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "ExponentialHeightFog.generated.h"

class UExponentialHeightFogComponent;

UCLASS(MinimalAPI)
class AExponentialHeightFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* Component;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
    AExponentialHeightFog();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_bEnabled();
    
};

