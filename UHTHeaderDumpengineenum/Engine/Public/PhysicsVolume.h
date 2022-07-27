#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "PhysicsVolume.generated.h"

UCLASS()
class ENGINE_API APhysicsVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TerminalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FluidFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bWaterVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPhysicsOnContact: 1;
    
    APhysicsVolume();
};

