#pragma once
#include "CoreMinimal.h"
#include "LensImperfectionSettings.h"
#include "LensBloomSettings.h"
#include "LensSettings.generated.h"

USTRUCT(BlueprintType)
struct FLensSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLensBloomSettings Bloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLensImperfectionSettings Imperfections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ChromaticAberration;
    
    ENGINE_API FLensSettings();
};

