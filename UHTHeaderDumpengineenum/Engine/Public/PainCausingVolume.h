#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhysicsVolume.h"
#include "PainCausingVolume.generated.h"

class AController;
class UDamageType;

UCLASS()
class ENGINE_API APainCausingVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPainCausing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamagePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PainInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEntryPain: 1;
    
    UPROPERTY()
    uint8 BACKUP_bPainCausing: 1;
    
    UPROPERTY()
    AController* DamageInstigator;
    
    APainCausingVolume();
};

