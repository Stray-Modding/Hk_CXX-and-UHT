#pragma once
#include "CoreMinimal.h"
#include "CanvasIcon.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCanvasIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VL;
    
    ENGINE_API FCanvasIcon();
};

