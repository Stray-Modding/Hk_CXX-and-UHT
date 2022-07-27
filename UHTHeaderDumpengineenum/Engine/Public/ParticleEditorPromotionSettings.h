#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ParticleEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FParticleEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilePath DefaultParticleAsset;
    
    ENGINE_API FParticleEditorPromotionSettings();
};

