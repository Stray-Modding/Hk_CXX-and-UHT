#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "PawnNoiseEmitterComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPawnNoiseEmitterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bAIPerceptionSystemCompatibilityMode: 1;
    
public:
    UPROPERTY()
    FVector LastRemoteNoisePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseLifetime;
    
private:
    UPROPERTY()
    float LastRemoteNoiseVolume;
    
    UPROPERTY()
    float LastRemoteNoiseTime;
    
    UPROPERTY()
    float LastLocalNoiseVolume;
    
    UPROPERTY()
    float LastLocalNoiseTime;
    
public:
    UPawnNoiseEmitterComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakeNoise(AActor* NoiseMaker, float Loudness, const FVector& NoiseLocation);
    
};

