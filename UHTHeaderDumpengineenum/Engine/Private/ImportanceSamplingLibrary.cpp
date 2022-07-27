#include "ImportanceSamplingLibrary.h"

class UTexture2D;

float UImportanceSamplingLibrary::RandomSobolFloat(int32 Index, int32 Dimension, float Seed) {
    return 0.0f;
}

FVector UImportanceSamplingLibrary::RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed) {
    return FVector{};
}

FVector2D UImportanceSamplingLibrary::RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed) {
    return FVector2D{};
}

float UImportanceSamplingLibrary::NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue) {
    return 0.0f;
}

FVector UImportanceSamplingLibrary::NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue) {
    return FVector{};
}

FVector2D UImportanceSamplingLibrary::NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue) {
    return FVector2D{};
}

FImportanceTexture UImportanceSamplingLibrary::MakeImportanceTexture(UTexture2D* Texture, TEnumAsByte<EImportanceWeight::Type> WeightingFunc) {
    return FImportanceTexture{};
}

void UImportanceSamplingLibrary::ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize) {
}

void UImportanceSamplingLibrary::BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, TEnumAsByte<EImportanceWeight::Type>& WeightingFunc) {
}

UImportanceSamplingLibrary::UImportanceSamplingLibrary() {
}

