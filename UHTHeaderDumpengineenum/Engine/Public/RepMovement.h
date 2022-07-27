#pragma once
#include "CoreMinimal.h"
#include "ERotatorQuantization.h"
#include "EVectorQuantization.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RepMovement.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRepMovement {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector LinearVelocity;
    
    UPROPERTY(Transient)
    FVector AngularVelocity;
    
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    uint8 bSimulatedPhysicSleep: 1;
    
    UPROPERTY(Transient)
    uint8 bRepPhysics: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    EVectorQuantization LocationQuantizationLevel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    EVectorQuantization VelocityQuantizationLevel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    ERotatorQuantization RotationQuantizationLevel;
    
    FRepMovement();
};

