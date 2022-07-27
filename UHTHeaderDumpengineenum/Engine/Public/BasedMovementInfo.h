#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize100.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BasedMovementInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FBasedMovementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* MovementBase;
    
    UPROPERTY()
    FName BoneName;
    
    UPROPERTY()
    FVector_NetQuantize100 Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    bool bServerHasBaseComponent;
    
    UPROPERTY()
    bool bRelativeRotation;
    
    UPROPERTY()
    bool bServerHasVelocity;
    
    ENGINE_API FBasedMovementInfo();
};

