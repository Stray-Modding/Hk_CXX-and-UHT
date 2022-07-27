#pragma once
#include "CoreMinimal.h"
#include "GaussianSumBloomSettings.h"
#include "ConvolutionBloomSettings.h"
#include "EBloomMethod.h"
#include "LensBloomSettings.generated.h"

USTRUCT(BlueprintType)
struct FLensBloomSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FGaussianSumBloomSettings GaussianSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FConvolutionBloomSettings Convolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBloomMethod> Method;
    
    ENGINE_API FLensBloomSettings();
};

