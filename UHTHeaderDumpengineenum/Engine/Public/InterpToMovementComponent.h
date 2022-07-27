#pragma once
#include "CoreMinimal.h"
#include "MovementComponent.h"
#include "HitResult.h"
#include "EInterpToBehaviourType.h"
#include "ETeleportType.h"
#include "InterpControlPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpToMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInterpToMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToWaitEndDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToWaitBeginDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToStopDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToReverseDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToResetDelegate, const FHitResult&, ImpactResult, float, Time);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPauseOnImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETeleportType TeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpToBehaviourType BehaviourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckIfStillInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceSubStepping: 1;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpToReverseDelegate OnInterpToReverse;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpToStopDelegate OnInterpToStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpToWaitBeginDelegate OnWaitBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpToWaitEndDelegate OnWaitEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpToResetDelegate OnResetDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSimulationTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSimulationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInterpControlPoint> ControlPoints;
    
    UInterpToMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopSimulating(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void RestartMovement(float InitialDirection);
    
    UFUNCTION(BlueprintCallable)
    void ResetControlPoints();
    
    UFUNCTION(BlueprintCallable)
    void FinaliseControlPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddControlPointPosition(FVector Pos, bool bPositionIsRelative);
    
};

