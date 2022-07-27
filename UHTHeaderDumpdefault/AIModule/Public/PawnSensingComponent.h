#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PawnSensingComponent.generated.h"

class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPawnSensingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeePawnDelegate, APawn*, Pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHearNoiseDelegate, APawn*, Instigator, const FVector&, Location, float, Volume);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HearingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LOSHearingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SensingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HearingMaxSoundAge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableSensingUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOnlySensePlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSeePawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHearNoises: 1;
    
    UPROPERTY(BlueprintAssignable)
    FSeePawnDelegate OnSeePawn;
    
    UPROPERTY(BlueprintAssignable)
    FHearNoiseDelegate OnHearNoise;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PeripheralVisionAngle;
    
    UPROPERTY()
    float PeripheralVisionCosine;
    
public:
    UPawnSensingComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSensingUpdatesEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSensingInterval(const float NewSensingInterval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionCosine() const;
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionAngle() const;
    
};

