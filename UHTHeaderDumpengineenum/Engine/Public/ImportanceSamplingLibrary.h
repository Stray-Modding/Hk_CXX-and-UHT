#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ImportanceTexture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EImportanceWeight.h"
#include "ImportanceSamplingLibrary.generated.h"

class UTexture2D;

UCLASS(BlueprintType, MinimalAPI)
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImportanceSamplingLibrary();
    UFUNCTION(BlueprintPure)
    static float RandomSobolFloat(int32 Index, int32 Dimension, float Seed);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed);
    
    UFUNCTION(BlueprintPure)
    static FVector2D RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed);
    
    UFUNCTION(BlueprintPure)
    static float NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue);
    
    UFUNCTION(BlueprintPure)
    static FVector NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue);
    
    UFUNCTION(BlueprintPure)
    static FVector2D NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue);
    
    UFUNCTION(BlueprintPure)
    static FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, TEnumAsByte<EImportanceWeight::Type> WeightingFunc);
    
    UFUNCTION(BlueprintPure)
    static void ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    
    UFUNCTION(BlueprintPure)
    static void BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, TEnumAsByte<EImportanceWeight::Type>& WeightingFunc);
    
};

