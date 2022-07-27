#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ArchVisCharMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCHVISCHARACTER_API UArchVisCharMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator RotationalAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator RotationalDeceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator MaxRotationalVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingFriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingAcceleration;
    
    UArchVisCharMovementComponent();
};

