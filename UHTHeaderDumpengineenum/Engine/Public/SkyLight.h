#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "SkyLight.generated.h"

class USkyLightComponent;

UCLASS()
class ENGINE_API ASkyLight : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkyLightComponent* LightComponent;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
    ASkyLight();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_bEnabled();
    
};

