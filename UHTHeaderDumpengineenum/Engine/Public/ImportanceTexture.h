#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EImportanceWeight.h"
#include "ImportanceTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FImportanceTexture {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIntPoint Size;
    
    UPROPERTY()
    int32 NumMips;
    
    UPROPERTY()
    TArray<float> MarginalCDF;
    
    UPROPERTY()
    TArray<float> ConditionalCDF;
    
    UPROPERTY()
    TArray<FColor> TextureData;
    
    UPROPERTY()
    TWeakObjectPtr<UTexture2D> Texture;
    
    UPROPERTY()
    TEnumAsByte<EImportanceWeight::Type> Weighting;
    
    ENGINE_API FImportanceTexture();
};

