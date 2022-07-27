#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize100.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigidBodyState.generated.h"

USTRUCT()
struct FRigidBodyState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize100 Position;
    
    UPROPERTY()
    FQuat Quaternion;
    
    UPROPERTY()
    FVector_NetQuantize100 LinVel;
    
    UPROPERTY()
    FVector_NetQuantize100 AngVel;
    
    UPROPERTY()
    uint8 Flags;
    
    ENGINE_API FRigidBodyState();
};

