#pragma once
#include "CoreMinimal.h"
#include "MaterialCachedParameterEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialCachedParameters.generated.h"

class URuntimeVirtualTexture;
class UFont;
class UTexture;

USTRUCT(BlueprintType)
struct FMaterialCachedParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialCachedParameterEntry RuntimeEntries[5];
    
    UPROPERTY()
    TArray<float> ScalarValues;
    
    UPROPERTY()
    TArray<FLinearColor> VectorValues;
    
    UPROPERTY()
    TArray<UTexture*> TextureValues;
    
    UPROPERTY()
    TArray<UFont*> FontValues;
    
    UPROPERTY()
    TArray<int32> FontPageValues;
    
    UPROPERTY()
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues;
    
    ENGINE_API FMaterialCachedParameters();
};

