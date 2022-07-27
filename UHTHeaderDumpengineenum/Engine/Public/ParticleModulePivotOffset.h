#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ParticleModulePivotOffset.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModulePivotOffset : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D PivotOffset;
    
    UParticleModulePivotOffset();
};

