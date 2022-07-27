#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraRibbonShapeCustomVertex.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRibbonShapeCustomVertex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D Position;
    
    UPROPERTY(EditAnywhere)
    FVector2D Normal;
    
    UPROPERTY(EditAnywhere)
    float TextureV;
    
    NIAGARA_API FNiagaraRibbonShapeCustomVertex();
};

