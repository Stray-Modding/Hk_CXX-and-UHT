#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LookAtAnimationState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HKAnimInstance.generated.h"

UCLASS(NonTransient)
class HK_PROJECT_API UHKAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UHKAnimInstance();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSoundEvent(FName Name, float Velocity);
    
    UFUNCTION(BlueprintPure)
    FRotator FindLookAtRotator(UPARAM(Ref) FLookAtAnimationState& _lookAtState, bool& _enable, bool _lookAtEnable, FVector _lookAtLocation, float _angleLimit, float _hysteresis, int32 _virtualBoneBaseEffector, int32 _virtualBoneEndEffector, bool& _isInSight, float _speed);
    
};

