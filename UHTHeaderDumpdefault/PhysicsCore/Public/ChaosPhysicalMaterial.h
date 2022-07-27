#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChaosPhysicalMaterial.generated.h"

UCLASS(BlueprintType, CollapseCategories)
class PHYSICSCORE_API UChaosPhysicalMaterial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StaticFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Restitution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LinearEtherDrag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngularEtherDrag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepingLinearVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepingAngularVelocityThreshold;
    
    UChaosPhysicalMaterial();
};

