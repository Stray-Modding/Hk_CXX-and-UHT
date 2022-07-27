#pragma once
#include "CoreMinimal.h"
#include "RigidBodyContactInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CollisionImpactData.generated.h"

USTRUCT()
struct ENGINE_API FCollisionImpactData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigidBodyContactInfo> ContactInfos;
    
    UPROPERTY()
    FVector TotalNormalImpulse;
    
    UPROPERTY()
    FVector TotalFrictionImpulse;
    
    UPROPERTY()
    bool bIsVelocityDeltaUnderThreshold;
    
    FCollisionImpactData();
};

