#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "BlueprintEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilePath FirstMeshPath;
    
    UPROPERTY(EditAnywhere)
    FFilePath SecondMeshPath;
    
    UPROPERTY(EditAnywhere)
    FFilePath DefaultParticleAsset;
    
    ENGINE_API FBlueprintEditorPromotionSettings();
};

