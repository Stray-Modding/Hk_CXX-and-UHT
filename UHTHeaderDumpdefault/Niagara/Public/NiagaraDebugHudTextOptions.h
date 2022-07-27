#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHudVAlign.h"
#include "ENiagaraDebugHudHAlign.h"
#include "ENiagaraDebugHudFont.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraDebugHudTextOptions.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDebugHudTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudFont Font;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDebugHudHAlign HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDebugHudVAlign VerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    FVector2D ScreenOffset;
    
    NIAGARA_API FNiagaraDebugHudTextOptions();
};

