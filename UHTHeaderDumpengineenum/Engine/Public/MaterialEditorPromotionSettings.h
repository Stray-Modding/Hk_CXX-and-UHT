#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "MaterialEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FMaterialEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilePath DefaultMaterialAsset;
    
    UPROPERTY(EditAnywhere)
    FFilePath DefaultDiffuseTexture;
    
    UPROPERTY(EditAnywhere)
    FFilePath DefaultNormalTexture;
    
    ENGINE_API FMaterialEditorPromotionSettings();
};

