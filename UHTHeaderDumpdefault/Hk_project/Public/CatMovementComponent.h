#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=SmootherTransform -FallbackName=SmootherTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CatMovementComponent.generated.h"

class AActor;
class UHierarchicalStateMachine;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_touchForceFactor;
    
    UPROPERTY(EditAnywhere)
    float m_minTouchForce;
    
    UPROPERTY(EditAnywhere)
    float m_maxTouchForce;
    
    UPROPERTY(EditAnywhere)
    float m_initialPushForceFactor;
    
    UPROPERTY(EditAnywhere)
    float m_pushForceFactor;
    
    UPROPERTY(EditAnywhere)
    float m_additionalDistanceFromGaps;
    
    UPROPERTY(EditAnywhere)
    FSmootherTransform m_railSyncSmoother;
    
    UPROPERTY(Instanced)
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    UCatMovementComponent();
private:
    UFUNCTION()
    void _CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

