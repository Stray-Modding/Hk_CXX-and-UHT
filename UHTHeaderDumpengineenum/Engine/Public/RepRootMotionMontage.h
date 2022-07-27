#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize100.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RootMotionSourceGroup.h"
#include "Vector_NetQuantize10.h"
#include "RepRootMotionMontage.generated.h"

class UAnimMontage;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRepRootMotionMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsActive;
    
    UPROPERTY()
    UAnimMontage* AnimMontage;
    
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    FVector_NetQuantize100 Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY(Export)
    UPrimitiveComponent* MovementBase;
    
    UPROPERTY()
    FName MovementBaseBoneName;
    
    UPROPERTY()
    bool bRelativePosition;
    
    UPROPERTY()
    bool bRelativeRotation;
    
    UPROPERTY()
    FRootMotionSourceGroup AuthoritativeRootMotion;
    
    UPROPERTY()
    FVector_NetQuantize10 Acceleration;
    
    UPROPERTY()
    FVector_NetQuantize10 LinearVelocity;
    
    ENGINE_API FRepRootMotionMontage();
};

