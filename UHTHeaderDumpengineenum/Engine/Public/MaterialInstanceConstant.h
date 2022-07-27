#pragma once
#include "CoreMinimal.h"
#include "MaterialInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialInstanceConstant.generated.h"

class UPhysicalMaterialMask;
class UTexture;

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialInstanceConstant : public UMaterialInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterialMask* PhysMaterialMask;
    
    UMaterialInstanceConstant();
    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValue(FName ParameterName);
    
};

