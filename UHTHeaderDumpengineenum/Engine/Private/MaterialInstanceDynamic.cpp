#include "MaterialInstanceDynamic.h"

class UTexture;
class UMaterialInstance;
class UMaterialInterface;

void UMaterialInstanceDynamic::SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value) {
}

void UMaterialInstanceDynamic::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void UMaterialInstanceDynamic::SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value) {
}

void UMaterialInstanceDynamic::SetTextureParameterValue(FName ParameterName, UTexture* Value) {
}

void UMaterialInstanceDynamic::SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value) {
}

void UMaterialInstanceDynamic::SetScalarParameterValue(FName ParameterName, float Value) {
}

void UMaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha) {
}

FLinearColor UMaterialInstanceDynamic::K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo) {
    return FLinearColor{};
}

FLinearColor UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName ParameterName) {
    return FLinearColor{};
}

UTexture* UMaterialInstanceDynamic::K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo) {
    return NULL;
}

UTexture* UMaterialInstanceDynamic::K2_GetTextureParameterValue(FName ParameterName) {
    return NULL;
}

float UMaterialInstanceDynamic::K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo) {
    return 0.0f;
}

float UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName ParameterName) {
    return 0.0f;
}

void UMaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly) {
}

void UMaterialInstanceDynamic::CopyParameterOverrides(UMaterialInstance* MaterialInstance) {
}

void UMaterialInstanceDynamic::CopyInterpParameters(UMaterialInstance* Source) {
}

UMaterialInstanceDynamic::UMaterialInstanceDynamic() {
}

