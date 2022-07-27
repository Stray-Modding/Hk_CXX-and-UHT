#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DatasmithStaticParameterSetTemplate.h"
#include "DatasmithMaterialInstanceTemplate.generated.h"

class UMaterialInterface;
class UTexture;

UCLASS()
class DATASMITHCONTENT_API UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;
    
    UPROPERTY()
    TMap<FName, float> ScalarParameterValues;
    
    UPROPERTY()
    TMap<FName, FLinearColor> VectorParameterValues;
    
    UPROPERTY()
    TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues;
    
    UPROPERTY()
    FDatasmithStaticParameterSetTemplate StaticParameters;
    
    UDatasmithMaterialInstanceTemplate();
};

