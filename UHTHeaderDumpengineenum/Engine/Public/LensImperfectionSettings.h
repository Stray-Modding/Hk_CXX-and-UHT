#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LensImperfectionSettings.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLensImperfectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* DirtMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DirtMaskIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor DirtMaskTint;
    
    ENGINE_API FLensImperfectionSettings();
};

