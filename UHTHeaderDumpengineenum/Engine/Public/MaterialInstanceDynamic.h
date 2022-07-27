#pragma once
#include "CoreMinimal.h"
#include "MaterialInstance.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialInstanceDynamic.generated.h"

class UTexture;
class UMaterialInterface;

UCLASS(CollapseCategories)
class ENGINE_API UMaterialInstanceDynamic : public UMaterialInstance {
    GENERATED_BODY()
public:
    UMaterialInstanceDynamic();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterValue(FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);
    
    UFUNCTION(BlueprintCallable)
    void CopyParameterOverrides(UMaterialInstance* MaterialInstance);
    
    UFUNCTION()
    void CopyInterpParameters(UMaterialInstance* Source);
    
};

