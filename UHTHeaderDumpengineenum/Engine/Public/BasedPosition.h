#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BasedPosition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FBasedPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY()
    FVector CachedBaseLocation;
    
    UPROPERTY()
    FRotator CachedBaseRotation;
    
    UPROPERTY()
    FVector CachedTransPosition;
    
    FBasedPosition();
};

