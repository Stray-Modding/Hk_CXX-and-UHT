#pragma once
#include "CoreMinimal.h"
#include "AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNotify_PlayParticleEffect.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories)
class ENGINE_API UAnimNotify_PlayParticleEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UAnimNotify_PlayParticleEffect();
};

