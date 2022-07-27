#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PhysicsCollisionHandler.generated.h"

class USoundBase;

UCLASS(BlueprintType)
class ENGINE_API UPhysicsCollisionHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactReFireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DefaultImpactSound;
    
    UPROPERTY()
    float LastImpactSoundTime;
    
    UPhysicsCollisionHandler();
};

