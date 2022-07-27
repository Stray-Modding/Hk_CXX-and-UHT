#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RootMotionSource_RadialForce.generated.h"

class AActor;
class UCurveFloat;

USTRUCT()
struct ENGINE_API FRootMotionSource_RadialForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    AActor* LocationActor;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float Strength;
    
    UPROPERTY()
    bool bIsPush;
    
    UPROPERTY()
    bool bNoZForce;
    
    UPROPERTY()
    UCurveFloat* StrengthDistanceFalloff;
    
    UPROPERTY()
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY()
    bool bUseFixedWorldDirection;
    
    UPROPERTY()
    FRotator FixedWorldDirection;
    
    FRootMotionSource_RadialForce();
};

