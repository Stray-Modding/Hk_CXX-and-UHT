#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctions.generated.h"

class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialLayersFunctions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialFunctionInterface*> Layers;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialFunctionInterface*> Blends;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> LayerStates;
    
    UPROPERTY()
    FString KeyString;
    
    FMaterialLayersFunctions();
};

