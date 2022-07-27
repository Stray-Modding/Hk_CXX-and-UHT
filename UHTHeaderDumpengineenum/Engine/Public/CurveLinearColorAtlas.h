#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "CurveLinearColorAtlas.generated.h"

class UCurveLinearColor;

UCLASS()
class ENGINE_API UCurveLinearColorAtlas : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 TextureSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bSquareResolution: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 TextureHeight;
    
    UPROPERTY(EditAnywhere)
    TArray<UCurveLinearColor*> GradientCurves;
    
    UCurveLinearColorAtlas();
    UFUNCTION(BlueprintCallable)
    bool GetCurvePosition(UCurveLinearColor* InCurve, float& Position);
    
};

