#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSizeBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ParticleModuleSizeScaleBySpeed.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D SpeedScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D MaxScale;
    
    UParticleModuleSizeScaleBySpeed();
};

