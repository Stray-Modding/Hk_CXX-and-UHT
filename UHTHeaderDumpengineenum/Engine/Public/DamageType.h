#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DamageType.generated.h"

UCLASS(BlueprintType, Const, MinimalAPI)
class UDamageType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCausedByWorld: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bScaleMomentumByMass: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bRadialDamageVelChange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DestructibleImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DestructibleDamageSpreadScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageFalloff;
    
    UDamageType();
};

