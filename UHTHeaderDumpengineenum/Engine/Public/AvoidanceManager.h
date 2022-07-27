#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AvoidanceManager.generated.h"

class UMovementComponent;

UCLASS(BlueprintType)
class ENGINE_API UAvoidanceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DefaultTimeToLive;
    
    UPROPERTY(Config, EditAnywhere)
    float LockTimeAfterAvoid;
    
    UPROPERTY(Config, EditAnywhere)
    float LockTimeAfterClean;
    
    UPROPERTY(Config, EditAnywhere)
    float DeltaTimeToPredict;
    
    UPROPERTY(Config, EditAnywhere)
    float ArtificialRadiusExpansion;
    
    UPROPERTY()
    float TestHeightDifference;
    
    UPROPERTY(Config, EditAnywhere)
    float HeightCheckMargin;
    
    UAvoidanceManager();
    UFUNCTION(BlueprintCallable)
    bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);
    
    UFUNCTION(BlueprintCallable)
    int32 GetObjectCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNewAvoidanceUID();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);
    
};

