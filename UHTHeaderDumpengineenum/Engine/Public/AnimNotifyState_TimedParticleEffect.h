#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNotifyState_TimedParticleEffect.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyAtEnd;
    
    UAnimNotifyState_TimedParticleEffect();
};

