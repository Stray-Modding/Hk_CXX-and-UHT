#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "BandwidthTestGenerator.h"
#include "BandwidthTestActor.generated.h"

UCLASS(NotPlaceable, Transient)
class ABandwidthTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FBandwidthTestGenerator BandwidthGenerator;
    
    ABandwidthTestActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

