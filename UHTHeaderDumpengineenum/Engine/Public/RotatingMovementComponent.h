#pragma once
#include "CoreMinimal.h"
#include "MovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RotatingMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API URotatingMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PivotTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRotationInLocalSpace: 1;
    
    URotatingMovementComponent();
};

