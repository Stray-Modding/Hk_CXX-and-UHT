#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigidBodyContactInfo.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct ENGINE_API FRigidBodyContactInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ContactPosition;
    
    UPROPERTY()
    FVector ContactNormal;
    
    UPROPERTY()
    float ContactPenetration;
    
    UPROPERTY()
    UPhysicalMaterial* PhysMaterial[2];
    
    FRigidBodyContactInfo();
};

